#include "Rectangle.h"

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getCircum() const {
    return 2 * (width + height);
}

void Rectangle::setWidth(double w) {
    if (w > 0) width = w;
}

void Rectangle::setHeight(double h) {
    if (h > 0) height = h;
}