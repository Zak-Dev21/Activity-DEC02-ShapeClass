#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using namespace std;

class Shape {
private:
    std::string background;

public:
    // Constructor
    Shape(const string& bg = "white");

    // Getter and Setter
    string getBackground() const;
    void setBackground(const string& bg);

    // Virtual method for drawing
    virtual void draw() const;
};

#endif
