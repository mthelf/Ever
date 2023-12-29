#pragma once

#include "Core.h"

namespace Ever {


	class EVER_API Application
	{
	public:
		Application();
		virtual ~Application();


		void Run();
	};

	// Defined in client
	Application* CreateApplication();

}
