#include "Shape.h"
#include <iostream>

using namespace std;

int main() {
    Shape shape1("blue");
    shape1.draw();

    shape1.setBackground("red");
    cout << "Background changed to: " << shape1.getBackground() << "\n";
    shape1.draw();

    return 0;
}
