#include "Application.h"

#include "Birch\Events\ApplicationEvent.h"
#include "Birch\Log.h"

namespace Birch {

	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		BR_TRACE(e);

		while (true);
	}

}