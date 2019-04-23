#pragma once

#include "Core.h"

namespace Crimson {

	class CRIMSON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be Defined in the app
	Application* CreateApplication();
}
