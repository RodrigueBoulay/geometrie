//
// Created by goodm on 15/02/2024.
//

#ifndef GEOMETRIE_SEGMENT_H
#define GEOMETRIE_SEGMENT_H

#include <iostream>
#include <cmath>
#include "Point.h"

class Segment {
    public:
        Segment() = default;
        Segment(Point p1, Point p2);

        friend std::ostream& operator<<(std::ostream &flux, const Segment &segment);
        friend bool operator==(Segment &a, Segment &b);

        float longueur();
        Point milieu();

    private:
        Point m_p1{0,0}, m_p2;
};




#endif //GEOMETRIE_SEGMENT_H
