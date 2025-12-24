#include "Circle.h"
#include "Rectangle.h"
#include <stdio.h>
int main()
{

    IShape* shapes[2];

    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            shapes[i] = new Circle();
        } else {
            shapes[i] = new Rectangle();
        }
    }

    for (int i = 0; i < 2; i++) {
        shapes[i]->Size();
    }

    for (int i = 0; i < 2; i++) {
        shapes[i]->Draw();
    }
    return 0;
}