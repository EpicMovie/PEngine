#pragma once

#include "Core.h"

namespace PEngine
{
	class PENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

