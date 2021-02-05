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

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	rng(rd()),
	xRange(0, 770),
	yRange(0, 570),
	square(xRange(rng), yRange(rng)),
	face0(xRange(rng), yRange(rng), 2, 2),
	face1(xRange(rng), yRange(rng), 2, 2),
	face2(xRange(rng), yRange(rng), 2, 2),
	raticle(Graphics::ScreenWidth/2, Graphics::ScreenHeight/2)
{
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
	if (wnd.kbd.KeyIsPressed(VK_SPACE)) {
		if (face0.isAlive()) {
			face0.setAlive(testShootOnFace(raticle, face0));
		}
		if (face1.isAlive()) {
			face1.setAlive(testShootOnFace(raticle, face1));
		}
		if (face2.isAlive()) {
			face2.setAlive(testShootOnFace(raticle, face2));
		}
	}

	raticle.update(wnd.kbd);
	square.shiftBackground();

	face0.move();
	face2.move();
	face1.move();

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
	if (face0.isAlive()) {
		face0.draw(gfx);
	}
	if (face1.isAlive()) {
		face1.draw(gfx);
	}
	if (face2.isAlive()) {
		face2.draw(gfx);
	}
}

bool Game::testShootOnFace(Raticle raticle, Face face)
{
	return !((raticle.getX() > face.getX()) && (raticle.getX() < face.getX() + face.getSize()) &&
		(raticle.getY() > face.getY()) && (raticle.getY() < face.getY() + face.getSize()));
}

