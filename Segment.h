//
// Created by goodm on 15/02/2024.
//

#ifndef GEOMETRIE_SEGMENT_H
#define GEOMETRIE_SEGMENT_H

#include <iostream>
#include "Point.h"

class Segment {
public:
    Segment() = default;
    Segment(Point p1, Point p2);
    friend std::ostream& operator<<(std::ostream &flux, const Segment &segment);
    friend bool operator==(Segment &a, Segment &b);
    float longueur();
    Point milieu();
    Point getP1() const { return m_p1; }
    Point getP2() const { return m_p2; }

private:
    Point m_p1;
    Point m_p2;

    float sqrt(float d);
};


#endif //GEOMETRIE_SEGMENT_H
