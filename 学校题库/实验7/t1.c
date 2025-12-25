#include <stdio.h>
#include <stdlib.h>
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