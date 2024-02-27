#include <iostream>
#include "Point.h"
#include "Segment.h"

using namespace std;

int main() {
    // Création de quelques points
    Point p1(1.0f, 2.0f);
    Point p2(3.0f, 4.0f);
    Point p3(1.0f, 2.0f); // Pour tester l'égalité

    // Affichage des points
    cout << "Point p1 : " << p1 << endl;
    cout << "Point p2 : " << p2 << endl;

    // Test d'égalité entre p1 et p3
    cout << "p1 == p3 ? " << (p1 == p3 ? "true" : "false") << endl;

    // Création de quelques segments
    Segment s1(p1, p2);
    Segment s2(p1, p3);

    // Affichage des segments
    cout << "Segment s1 : " << s1 << endl;
    cout << "Segment s2 : " << s2 << endl;

    // Calcul et affichage des longueurs des segments
    cout << "Longueur de s1 : " << s1.longueur() << endl;
    cout << "Longueur de s2 : " << s2.longueur() << endl;

    // Calcul et affichage du milieu du segment s1
    Point milieu_s1 = s1.milieu();
    cout << "Milieu du segment s1 : " << milieu_s1 << endl;

    // Test d'égalité entre les segments s1 et s2
    cout << "s1 == s2 ? " << (s1 == s2 ? "true" : "false") << endl;

    return 0;
}
