#include <iostream>
#include "square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {}

std::string Square::get_name()
{
    name = "Квадрат: ";
    return name;
}

void Square::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
    std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", c = " << get_c() << ", D = " << get_D() << "\n\n";
}
