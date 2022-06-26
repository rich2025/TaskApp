// Copyright 2022 Jacob Chin @bu.edu
// Copyright 2022 Emika Hammond eth@bu.edu
// Copyright 2022 Nuo Lin nuolin@bu.edu
// Copyright 2022 Richard Yang richy@bu.edu

#include <iostream>
#include <SFML/Graphics.hpp>
// #include <SFML/Audio.hpp>
#include <ctime>
#include <cstdlib>
using std::cin;
using std::cout;
using namespace std;
class Dots {
    
public:
    Dots();
    ~Dots();
    int size;
    int x;
    int y;
    int getsize();
    sf::CircleShape dot;
    sf::Color dotcolor;
    int speedx;
    int speedy;
    void dotposition(int x, int y);

    
};



// initialize dot commands
// int Dot::getsize() {
//     return size;
// }

Dots::Dots() {
    // speedx = generate random number for horiz speed
    // speedy = generate random number for vert speed
    // size = generate random number for size of dot

    // set random color
    dot.setFillColor(dotcolor);
    dot.setRadius(size);
    dot.setPosition(x, y);


}

int main() {
    return 0;
}

