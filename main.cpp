#include <iostream>
#include <vector>
#include <fstream>
#include "Rectangle.h"

int main(int, char**) {
    int n;
    std::cout << "Enter rectangle count: ";
    std::cin >> n;

    std::vector<Rectangle> rectangle_vector;

    for (int i = 0; i < n; i++) {
        int width, height;

        std::cout << "Please enter the width of the rectangle " << i + 1 << ": ";
        std::cin >> width;

        std::cout << "Please enter the height of the rectangle " << i + 1 << ": ";
        std::cin >> height;

        Rectangle my_rectangle(width, height);
        rectangle_vector.push_back(my_rectangle);
    }

    std::ofstream outfile("../out.txt");

    for (auto rectangle : rectangle_vector) {
        rectangle.printData();
        rectangle.writeToFile(outfile);
    }
}
