#pragma once

#include "Application.h"

int main(int argc, char** argv)
{
	auto app = Sety::CreateApplication();
	app->run();
	delete app;
}