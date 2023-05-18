#include <iostream>
#include "triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : a(a), b(b), c(c), A(A), B(B), C(C) {}

int Triangle::get_a() { return a; }
int Triangle::get_b() { return b; }
int Triangle::get_c() { return c; }
int Triangle::get_A() { return A; }
int Triangle::get_B() { return B; }
int Triangle::get_C() { return C; }

std::string Triangle::get_name()
{
    name = "�����������: ";
    return name;
}

void Triangle::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "�������: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << "\n";
    std::cout << "����: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << "\n\n";
}