#pragma once

#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <string>

namespace lve {
	class LveWindow {

	public:
		LveWindow(int t_w, int t_h, std::string t_name);
		~LveWindow();

		//deleting copy constructors
		LveWindow(const LveWindow&) = delete;
		LveWindow& operator=(const LveWindow&) = delete; //no dangling pointer 

		bool shouldClose() { return glfwWindowShouldClose(window); } 
	private:
		GLFWwindow* window;
		void initWindow();

		const int WIDTH;
		const int HEIGHT;

		std::string windowName;
	};
} //namespace lve
