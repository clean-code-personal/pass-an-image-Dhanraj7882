#pragma once
#include <cstdint>

struct Image {
	int rows;
	int columns;
	uint8_t pixels[1024 * 1024]; // max 1k x 1k image
};

class ImageBrightener {
private:
	Image* m_inputImage;
public:
	ImageBrightener(Image& inputImage);
	int BrightenWholeImage() const;
	Image* GetImage();
	~ImageBrightener() {
		delete m_inputImage;
		m_inputImage = NULL;
	}
};
