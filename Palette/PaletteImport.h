#pragma once

#include "Palette.h"

namespace Palette
{
namespace GPL
{
	// If input stream or image is invalid, will return ImageData::fallback_image (a single white pixel with invalid flag = true)
	ColorPalette<sRGB_uint8> import_from_file(const char* filename);
	ColorPalette<sRGB_uint8> import_from_stream(std::istream& input);
	void export_to_file  (const ColorPalette<sRGB_uint8>& data, const char* filename);
	void export_to_stream(const ColorPalette<sRGB_uint8>& data, std::ostream& output);
}
}