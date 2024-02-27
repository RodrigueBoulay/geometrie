//
// Created by goodm on 15/02/2024.
//

#include "Point.h"

Point::Point(float x, float y) : m_x(x), m_y(y) {}

std::ostream& operator<<(std::ostream &flux, const Point &point) {
    return flux << "Point (" << point.m_x << " ; " << point.m_y << ")";
}

bool operator==(Point &a, Point &b) {
    return a.m_x == b.m_x && a.m_y == b.m_y;
}

float Point::getX(){
    return m_x;
}

float Point::getY() {
    return m_y;
}
