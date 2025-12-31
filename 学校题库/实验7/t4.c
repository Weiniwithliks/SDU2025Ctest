#pragma once
#include <math.h>
#include <stdio.h>
struct ComplexTag
{
    double real, imag;
};

int is_zero(double x, double eps)
{
    if (x < 0)
        x = -x;
    if (x <= eps)
        return 1;
    return 0;
}

int is_eq(double x, double y, double eps)
{
    return is_zero(x - y, eps);
}

typedef struct ComplexTag Complex;

Complex complex_add(const Complex *a, const Complex *b)
{
    Complex result;
    result.real = a->real + b->real;
    result.imag = a->imag + b->imag;
    return result;
}

Complex complex_mul(const Complex *a, const Complex *b)
{
    Complex result;
    result.real = a->real * b->real - a->imag * b->imag;
    result.imag = a->imag * b->real + a->real * b->imag;
    return result;
}

static inline void complex_print(const Complex *a, double eps)
{
    double real = a->real;
    double imag = a->imag;

    if (is_zero(imag, eps))
    {
        printf("%.4lf", real); // 纯实数
    }
    else if (is_zero(real, eps))
    {
        printf("%.4lfi", imag); // 纯虚数
    }
    else
    {
        printf("%.4lf%s%.4lfi", real, imag > 0 ? "+" : "", imag); // 完整复数
    }
}

void swap(Complex *r1, Complex *r2)
{
    double a, b;
    a = r1->real;
    b = r1->imag;
    r1->real = r2->real;
    r1->imag = r2->imag;
    r2->real = a;
    r2->imag = b;
}

int solve_quadratic(double a, double b, double c, Complex *r1, Complex *r2, double eps)
{
    double derta = b * b - 4 * a * c;
    if (is_zero(derta, eps))
    {
        r1->real = r2->real = -b / (2 * a);
        r1->imag = r2->imag = 0;
        return 1;
    }
    else
    {
        if (derta > 0)
        {
            r1->real = (-b + sqrt(derta)) / (2 * a);
            r2->real = (-b - sqrt(derta)) / (2 * a);
            r1->imag = r2->imag = 0;
            if (r1->real > r2->real)
            {
                swap(r1, r2);
            }
            return 2;
        }
        else if (derta < 0)
        {
            r1->real = r2->real = -b / (2 * a);
            r1->imag = sqrt(-derta) / (2 * a);
            r2->imag = -sqrt(-derta) / (2 * a);
            if (r1->imag > r2->imag)
            {
                swap(r1, r2);
            }
            return -2;
        }
    }
}