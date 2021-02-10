#include "FrameTime.h"
using namespace std::chrono;

FrameTime::FrameTime()
{
	lastSample = steady_clock::now();
}

float FrameTime::mark() {
	const auto oldSample = lastSample;
	lastSample = steady_clock::now();
	const duration<float> frameTime = lastSample - oldSample;
	return frameTime.count();
}
