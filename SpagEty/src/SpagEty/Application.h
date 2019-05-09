#pragma once

#include "Core.h"

namespace Sety {
	class SETY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();		
	};

	Application* CreateApplication();

}
