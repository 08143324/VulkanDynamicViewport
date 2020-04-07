#pragma once
#include <vector>
#ifdef _WIN32
#pragma comment(linker, "/subsystem:console")  /*windows--不带命令行输出窗口运行 console--带命令行输出窗口运行*/
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef VK_USE_PLATFORM_WIN32_KHR
#define VK_USE_PLATFORM_WIN32_KHR
#endif
#ifndef NOMINMAX
#define NOMINMAX /* 不要让Windows定义min()或max() */
#endif
#define APP_NAME_STR_LEN 80
#endif
#include <vulkan/vulkan.h>
#include "main_task.h"

#define FENCE_TIMEOUT 100000000
#define PathPre "G:/vulkan/"

#define VertShaderPath PathPre ## "shaders/commonTexLight_vert.spv"
#define FragShaderPath PathPre ## "shaders/commonTexLight_frag.spv"

class VulkanManager
{
public:
	static struct WindowInfo info;
	static float xAngle;
	static float yAngle;
	static float zAngle;
	static int vpCenterX;
	static int vpCenterY;
	static bool memoryTypeFromProperties(VkPhysicalDeviceMemoryProperties& memoryProperties, uint32_t typeBits, VkFlags requirements_mask, uint32_t *typeIndex);
	static void draw();//执行Vulkan任务
	static void doVulkan();//执行Vulkan任务
};