#include <iostream>
#include "brightener.h"

int main() {
    Image* image = new Image();
    image->rows = 512;
    image->columns = 512;
	std::cout << "Brightening a 512 x 512 image\n";

    //adding random value [0,255] for testing
    for (int x = 0; x < image->rows * image->columns; x++) {
        image->pixels[x] = rand() % 256;
	}

    ImageBrightener brightener(*image);
    const int attenuatedCount = brightener.BrightenWholeImage();
    std::cout << "Attenuated " << attenuatedCount << " pixels\n";
    delete image;
    image = NULL;
}
