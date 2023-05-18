#include <iostream>
#include "quadrilateral.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

int Quadrilateral::get_a() { return a; }
int Quadrilateral::get_b() { return b; }
int Quadrilateral::get_c() { return c; }
int Quadrilateral::get_d() { return d; }
int Quadrilateral::get_A() { return A; }
int Quadrilateral::get_B() { return B; }
int Quadrilateral::get_C() { return C; }
int Quadrilateral::get_D() { return D; }

std::string Quadrilateral::get_name()
{
    name = "Четырехугольник: ";
    return name;
}

void Quadrilateral::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "Стороны: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << ", d = " << get_d() << "\n";
    std::cout << "Углы: A = " << get_A() << ", B = " << get_B() << ", c = " << get_c() << ", D = " << get_D() << "\n\n";
}