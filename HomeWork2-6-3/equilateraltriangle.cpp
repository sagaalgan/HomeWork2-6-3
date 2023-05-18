#include <iostream>
#include "equilateraltriangle.h"

Equilateraltriangle::Equilateraltriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {}

std::string Equilateraltriangle::get_name()
{
    name = "�������������� �����������: ";
    return name;
}

void Equilateraltriangle::print_myself()
{
    std::cout << get_name() << std::endl;
    std::cout << "�������: a = " << get_a() << ", b = " << get_b() << ", c = " << get_c() << "\n";
    std::cout << "���: A = " << get_A() << ", B = " << get_B() << ", C = " << get_C() << "\n\n";
}