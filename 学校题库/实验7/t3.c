#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct vec3_tag
{
    double x;
    double y;
    double z;
};

typedef struct vec3_tag vec3;

vec3 *vec3_new()
{
    vec3 *v = (vec3 *)malloc(sizeof(vec3));
    v->x = 0;
    v->y = 0;
    v->z = 0;
    return v;
}

void vec3_delete(vec3 *v)
{
    if (v == NULL)
        return;
    free(v);
}

double vec3_x(const vec3 *v)
{
    return v->x;
}

double vec3_y(const vec3 *v)
{
    return v->y;
}

double vec3_z(const vec3 *v)
{
    return v->z;
}

void vec3_set_x(vec3 *v, double op)
{
    v->x = op;
}

void vec3_set_y(vec3 *v, double op)
{
    v->y = op;
}

void vec3_set_z(vec3 *v, double op)
{
    v->z = op;
}

vec3 *vec3_let(double x, double y, double z)
{
    vec3 *v = vec3_new(); // 我说代码复用
    v->x = x;
    v->y = y;
    v->z = z;
    return v;
}

double vec3_get(const vec3 *v, int n)
{
    if (n == 0)
        return v->x;
    if (n == 1)
        return v->y;
    if (n == 2)
        return v->z;
}

void vec3_set(vec3 *v, double x, double y, double z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

const vec3 *vec3_zero()
{
    static const vec3 ZERO = {0.0, 0.0, 0.0}; // 只初始化一次！
    return &ZERO;
}

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}
void vec3_swap(vec3 *a, vec3 *b)
{
    swap(&a->x, &b->x);
    swap(&a->y, &b->y);
    swap(&a->z, &b->z);
}

vec3 *vec3_copy(const vec3 *v)
{
    vec3 *op = vec3_new();
    vec3_set(op, v->x, v->y, v->z);
    // 我说代码复用
    return op;
}

void vec3_assign(vec3 *a, const vec3 *b)
{
    vec3_set(a, b->x, b->y, b->z);
}

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

void vec3_add(vec3 *a, const vec3 *b, const vec3 *c)
{
    a->x = b->x + c->x;
    a->y = b->y + c->y;
    a->z = b->z + c->z;
}

void vec3_mul(vec3 *a, const vec3 *b, double c)
{
    a->x = b->x * c;
    a->y = b->y * c;
    a->z = b->z * c;
}

double vec3_dot(const vec3 *a, const vec3 *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

void vec3_cross(vec3 *c, const vec3 *a, const vec3 *b)
{
    c->x = a->y * b->z - a->z * b->y;
    c->y = a->z * b->x - a->x * b->z;
    c->z = a->x * b->y - a->y * b->x;
}

double vec3_length(const vec3 *a)
{
    return sqrt(vec3_dot(a,a));
}
