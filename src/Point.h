#ifndef POINT_H
#define POINT_H

class Point{
  private:
    float _x;
	float _y;
	Point(){}
	
  public:
    Point(float x, float y);
    float getX();
    float getY();
};

#endif
