#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

#include <cstdlib>
#include <fstream>
#include <iostream>

class HelloTriangleApplication
{
public:
    void Run()
    {
        std::cout << "Running app" << std::endl;
    }
};

int main()
{
    HelloTriangleApplication app;

    try
    {
        app.Run();
    }
    catch (const std::exception& anException)
    {
        std::cerr << anException.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
