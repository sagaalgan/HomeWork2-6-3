#include <iostream>
#include <string>
#include "figure.h"
#include "square.h"
#include "righttriangle.h"
#include "rhombus.h"
#include "rectangle.h"
#include "quadrilateral.h"
#include "parallelogram.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "triangle.h"


void print_info(Figure* figure)
{
    figure->print_myself();
}

int main() {
    setlocale(LC_ALL, "Russian");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    print_info(&triangle);
    Righttriangle righttriangle(10, 20, 30, 50, 60, 90);
    print_info(&righttriangle);
    Isoscelestriangle isoscelestriangle(10, 20, 10, 50, 60, 50);
    print_info(&isoscelestriangle);
    Equilateraltriangle equilateraltriangle(30, 30, 30, 60, 60, 60);
    print_info(&equilateraltriangle);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&quadrilateral);
    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    print_info(&rectangle);
    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    print_info(&square);
    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    print_info(&parallelogram);
    Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);
    print_info(&rhombus);
    return 0;
}
