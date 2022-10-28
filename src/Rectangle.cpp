#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(int r_width, int r_height){
    width = r_width;
    height = r_height;
    area = width * height;
}

bool Rectangle::isEvenArea() {
    return (area % 2 == 0);
}

void Rectangle::printData() {
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Is even: " << isEvenArea() << std::endl;
}

void Rectangle::writeToFile(std::ofstream &file) {
    file << width << " " << height << " " << area << " " << isEvenArea() << std::endl;
}

int Rectangle::getWidth() {
    return width;
}

int Rectangle::getHeight() {
    return height;
}

int Rectangle::getArea() {
    return area;
}
