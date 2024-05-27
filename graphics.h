#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <string>

class Point {
protected:
    double x, y;
    std::string color;
public:
    Point(double x = 0, double y = 0, const std::string& color = "black");
    virtual ~Point() {}
    virtual void move(double dx, double dy);
    virtual void resize(double factor) = 0; 
    virtual void rotate(double angle) = 0; 
    virtual void setColor(const std::string& newColor);
    virtual void draw() const = 0; 
};

class Square : public Point {
private:
    double side;
public:
    Square(double x, double y, double side, const std::string& color = "black");
    void resize(double factor) override;
    void rotate(double angle) override;
    void draw() const override;
};

#endif 
