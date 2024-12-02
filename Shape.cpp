#include "Shape.h"
#include <iostream>
using namespace std;

// Constructor
Shape::Shape(const string& bg) : background(bg) {}

// Getter
std::string Shape::getBackground() const {
    return background;
}

// Setter
void Shape::setBackground(const string& bg) {
    background = bg;
}

// Draw method
void Shape::draw() const {
    std::cout << "Drawing shape with background: " << background << "\n";
}
