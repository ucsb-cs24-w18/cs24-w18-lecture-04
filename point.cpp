// FILE: point.cpp
// CLASS IMPLEMENTED: point (See point.h for documentation.)

#include "point.h"

bool operator==(const point p1, const point p2){
    
    return p1.get_x() == p2.get_x() &&
           p1.get_y() == p2.get_y();

}

point operator+(const point p1, const point p2){
    double new_x = p1.get_x() + p2.get_x();
    double new_y = p1.get_y() + p2.get_y();
    return point(new_x, new_y);
}

ostream& operator<<(ostream& out, point p){
    out<< "("<< p.get_x()<<", "<<p.get_y()<<")"<<endl;
    return out;
}

istream& operator>>(istream& ins, point& p){
    /*double new_x, new_y;
    ins>> new_x>> new_y;
    p = point(new_x, new_y);*/
    cin>>p.x>>p.y;
    return ins;
}

point::point(double initial_x, double initial_y)
{
    x = initial_x;   // Constructor sets the point to a given position.
    y = initial_y;
}


void point::shift(double x_amount, double y_amount)
{
    x += x_amount;
    y += y_amount;   
}


void point::rotate90( )
{
    double new_x;
    double new_y;

    new_x = y;  // For a 90 degree clockwise rotation, the new x is the original y,
    new_y = -x; // and the new y is -1 times the original x.
    x = new_x;
    y = new_y; 
}

