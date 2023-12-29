#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Ever::Application* Ever::CreateApplication();

int main(int argc, char** argv) {

	auto app = Ever::CreateApplication();
	app->Run();
	delete app;

}

#endif // HZ_PLATFORM_WINDOWS
