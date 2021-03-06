// Copyright 2018 The SwiftShader Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef VK_CONFIG_HPP_
#define VK_CONFIG_HPP_

namespace vk
{

// Note: Constant array initialization requires a string literal.
//       constexpr char* or char[] does not work for that purpose.
#define SWIFTSHADER_DEVICE_NAME "SwiftShader Device" // Max length: VK_MAX_PHYSICAL_DEVICE_NAME_SIZE
#define SWIFTSHADER_UUID "SwiftShaderUUID" // Max length: VK_UUID_SIZE

enum
{
	DRIVER_VERSION = 1,
	VENDOR_ID = 0x1AE0, // Google
	DEVICE_ID = 0xC0DE, // SwiftShader
};

enum
{
	REQUIRED_MEMORY_ALIGNMENT = 8, // For 64 bit formats on ARM64
	REQUIRED_MEMORY_TYPE_BITS = 1,
};

enum
{
	MAX_IMAGE_LEVELS_1D = 14,
	MAX_IMAGE_LEVELS_2D = 14,
	MAX_IMAGE_LEVELS_3D = 11,
	MAX_IMAGE_LEVELS_CUBE = 14,
	MAX_IMAGE_ARRAY_LAYERS = 11,
};

enum {
	MaxVertexInputBindings = 16,
};

}

#endif // VK_CONFIG_HPP_
