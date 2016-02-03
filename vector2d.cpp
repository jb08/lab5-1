#include "vector2d.h"

// constructors
Vector2d::Vector2d() : x_{0}, y_{0} {}; //default constructor
Vector2d::Vector2d(double x, double y) {
    // implement here
}

// getters: return the value of member variables x and y
double Vector2d::getX() const { //const indicates that the function cannot change the object it is called from
    // implement here

}
double Vector2d::getY() const {
    // implement here


}

// setters: set the value of member variables x and y
void Vector2d::setX(double x) {
    // implement here
}
void Vector2d::setY(double y) {
    // implement here
}

// helper function
Vector2d add(const Vector2d& a, const Vector2d& b) { //const indicates that parameters that are const cannot be changed
    // implement here

}

// helper function
Vector2d subtract(const Vector2d& a, const Vector2d& b) {
    // implement here
}

// operator overloading of '=='
bool operator==(const Vector2d& a, const Vector2d& b) {
    return (a.getX()==b.getX() && a.getY()==b.getY());
}


// operator overloading of '+' and '-'
Vector2d operator+(const Vector2d& a, const Vector2d& b) {
    // implement here
}
Vector2d operator-(const Vector2d& a, const Vector2d& b) {
    // implement here
}