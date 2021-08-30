#pragma once

#ifdef PENGINE_PLATFORM_WINDOWS

extern PEngine::Application* PEngine::CreateApplication();

int main(int argc, char** argv)
{
	PEngine::Application* app = PEngine::CreateApplication();

	app->Run();

	delete app;

	return 0;
}

#endif
