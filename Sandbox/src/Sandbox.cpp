#include "Sandbox.h"

Sandbox::Sandbox()
{
}

Sandbox::~Sandbox()
{
}

Sety::Application* Sety::CreateApplication()
{
	return new Sandbox();
}

