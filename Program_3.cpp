#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

struct ImageMetadata {
    int width;
    int height;
    char format[10];
};

int main() {

    ImageMetadata image1{1920, 1080, "JPEG"};
    ImageMetadata image2{800, 600, "PNG"};
    ImageMetadata image3{3840, 2160, "WEBP"};

    ofstream output("images.bin", ios::binary);

    if (!output) {
        cerr << "Unable to open binary file for writing." << endl;
        return 1;
    }

    output.write(reinterpret_cast<const char*>(&image1),
                 sizeof(ImageMetadata));

    output.write(reinterpret_cast<const char*>(&image2),
                 sizeof(ImageMetadata));

    output.write(reinterpret_cast<const char*>(&image3),
                 sizeof(ImageMetadata));

    output.close();

    ifstream input("images.bin", ios::binary);

    if (!input) {
        cerr << "Unable to open binary file for reading." << endl;
        return 1;
    }

    ImageMetadata item{};
    int recordNo = 1;

    cout << "=== Image Metadata ===" << endl;

    while (input.read(reinterpret_cast<char*>(&item),
                      sizeof(ImageMetadata))) {

        cout << "Record " << recordNo++ << ": "
             << item.width << " x " << item.height
             << " | " << item.format << endl;
    }

    input.close();

    return 0;
}