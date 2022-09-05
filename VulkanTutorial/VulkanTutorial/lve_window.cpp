#include "lve_window.h"

namespace lve {
	lve::LveWindow::LveWindow(int t_w, int t_h, std::string t_name) : WIDTH{ t_w }, HEIGHT{ t_h }, windowName{ t_name }
	{
		initWindow();
	}

	lve::LveWindow::~LveWindow()
	{
	}

	void lve::LveWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(WIDTH, HEIGHT, windowName.c_str(), nullptr, nullptr);
	}
} //namespace lve
