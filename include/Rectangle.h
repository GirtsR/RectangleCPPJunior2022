#include <fstream>

class Rectangle
{
private:
    int width;
    int height;
    int area;

    bool isEvenArea();
public:
    Rectangle(int r_width, int r_height);

    void printData();

    void writeToFile(std::ofstream &file);

    int getWidth();

    int getHeight();

    int getArea();
};
