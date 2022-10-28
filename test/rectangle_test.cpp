#include "gtest/gtest.h"
#include "Rectangle.h"
#include <vector>
#include <algorithm>

bool isAreaGreater(Rectangle rect1, Rectangle rect2) {
    return rect1.getArea() > rect2.getArea();
}

TEST(RectangleTest, BasicRectangleCreation) {
    Rectangle rect{10, 13};
    EXPECT_EQ(rect.getWidth(), 10);
    EXPECT_EQ(rect.getHeight(), 13);
    EXPECT_EQ(rect.getArea(), 130);
}

TEST(RectangleTest, SortByArea) {
    std::vector<Rectangle> rect_vector;
    rect_vector.push_back(Rectangle{1, 5});
    rect_vector.push_back(Rectangle{3, 2});
    rect_vector.push_back(Rectangle{2, 13});

    std::sort(rect_vector.begin(), rect_vector.end(), isAreaGreater);

    std::vector<int> expected_area = {26, 6, 5};
    std::vector<int> expected_width = {2, 3, 1};
    std::vector<int> expected_height = {13, 2, 5};

    for (int i = 0; i < rect_vector.size(); i++) {
        std::cout << "Checking rectangle " << rect_vector[i].getWidth() << "x" << rect_vector[i].getHeight() << std::endl;
        EXPECT_EQ(rect_vector[i].getArea(), expected_area[i]);
        EXPECT_EQ(rect_vector[i].getWidth(), expected_width[i]);
        EXPECT_EQ(rect_vector[i].getHeight(), expected_height[i]);
    }
}