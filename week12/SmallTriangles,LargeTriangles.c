#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

double area_triangle (triangle tr)
{
    double p = (tr.a + tr.b + tr.c) / 2.0;
    double s = p * (p - tr.a) * (p - tr.b) * (p - tr.c);
    return sqrt(s);
}

typedef struct
{
    triangle tr;
    double area;
    int index;
} node;

void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */
    int i, j;
    for (i = 0; i < n - 1; ++i) {
        node min = {tr[i], area_triangle(min.tr), i};
        for (j = i + 1; j < n; ++j)
        {
            if (area_triangle(tr[j]) < min.area)
            {
                min.area = area_triangle(tr[j]);
                min.tr = tr[j];
                min.index = j;
            }
        }
        triangle temp = tr[i];
        tr[i] = min.tr;
        tr[min.index] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}