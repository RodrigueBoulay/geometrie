//
// Created by goodm on 15/02/2024.
//

#include "Segment.h"

Segment::Segment(Point p1, Point p2) : m_p1(p1), m_p2(p2) {}

std::ostream& operator<<(std::ostream &flux, const Segment &segment) {
    flux << segment.m_p1 << " -> " << segment.m_p2;
    return flux;
}

bool operator==(Segment &a, Segment &b) {
    // A compléter
    return 0;
}


/*
float Segment::longueur() {
    float dx = m_p2.getX() - m_p1.getX();
    float dy = m_p2.getY() - m_p1.getY();
    return sqrt(dx * dx + dy * dy);
}

Point Segment::milieu() {
    float mx = (m_p1.getX() + m_p2.getX()) / 2;
    float my = (m_p1.getY() + m_p2.getY()) / 2;
    return Point(mx, my);
}

bool operator==(Segment &a, Segment &b) {
    return a.longueur() == b.longueur();
}
*/
