#include <iostream>

using namespace std;

class shape{
protected :
    double width,height;
public :
    shape() = default;
    shape(double w,double h):width(w), height(h) {}
    virtual double area (){}
};
class triangle: public shape{
public :
    triangle() = default;
    triangle(double w,double h):shape(w,h) {}
    double area() override{
        return width*height/2;
    }
};
class rectangle:public shape {
public:
    rectangle() = default;
    rectangle(double w,double h):shape(w, h) {}
    double area() override {
        return width * height ;
    }
};

int main() {
    triangle tri(10.0,4.0) ;
    rectangle rec(10.0,4.0);
    cout << tri.area() <<endl;
    cout << rec.area() <<endl;
    return 0;
}
