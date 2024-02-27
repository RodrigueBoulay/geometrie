//
// Created by goodm on 15/02/2024.
//

#ifndef GEOMETRIE_POINT_H
#define GEOMETRIE_POINT_H

#include <iostream>

class Point {
    public:
        Point() = default;
        Point(float x, float y);
        friend std::ostream& operator<<(std::ostream &flux, const Point &point);
        friend bool operator==(Point &a, Point &b);
        float getX() const { return m_x; }
        float getY() const { return m_y; }

    private:
        float m_x{0}, m_y{0};
};


#endif //GEOMETRIE_POINT_H
