/******************************************************************************************
 *	Chili DirectX Framework Version 16.07.20											  *
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "Face.h"
#include "Vec2.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	rng(rd()),
	xRange(30.0f, 770.0f),
	yRange(30.0f, 570.0f),
	speedRange(-2.5f * 60.0f, 2.5f * 60.0f),
	square(xRange(rng), yRange(rng)),
	raticle(Vec2(Graphics::ScreenWidth / 2, Graphics::ScreenHeight / 2))
{
	for (int i = 0; i < nFaces; i++) {
		faces[i].init(Vec2(xRange(rng),yRange(rng)), Vec2(speedRange(rng), speedRange(rng)));
	}
}


void Game::Go()
{
	gfx.BeginFrame();
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{	
	const float deltaTime = frameTime.mark();

	if (wnd.kbd.KeyIsPressed(VK_SPACE)) {
		for (int i = 0; i < nFaces; i++) {
			if (faces[i].isAlive()) {
				faces[i].setAlive(testShootOnFace(raticle, faces[i]));
			}
		}
	}

	if (wnd.mouse.LeftIsPressed()) {
		raticle.update(Vec2(wnd.mouse.GetPosX(), wnd.mouse.GetPosY()));
	}
	square.shiftBackground();

	for (int i = 0; i < nFaces; i++) {
		if (faces[i].isAlive()) {
			faces[i].move(deltaTime);
		}
	}

	raticle.shiftRaticle(wnd.kbd.KeyIsPressed(VK_SHIFT));
	raticle.clamp();
}

void Game::ComposeFrame()
{
	square.draw(gfx);

	if (raticle.getShape()) {
		raticle.drawSquaredRaticle(gfx);
	}
	else {
		raticle.drawCrossRaticle(gfx);
	}
	for (int i = 0; i < nFaces; i++) {
		if (faces[i].isAlive()) {
			faces[i].draw(gfx);
		}
	}
}

bool Game::testShootOnFace(Raticle raticle, Face face)
{
	return !((raticle.getPosition().x > face.getPosition().x) && 
		(raticle.getPosition().x < face.getPosition().x + face.getSize()) &&
		(raticle.getPosition().y > face.getPosition().y) &&
		(raticle.getPosition().y < face.getPosition().y + face.getSize()));
}

//just proving