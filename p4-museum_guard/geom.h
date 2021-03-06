/* 
   Laura Toma
*/


#ifndef __geom_h
#define __geom_h


typedef struct _point2d {
  int x,y; 
  int vertex;
} point2D;


typedef struct _lineSegment2D {
    point2D p1, p2;
} lineSegment2D;


typedef struct _rect2D  {
    point2D origin;
    float width, height;
} rect2D;


//add any functions you might need to operate on these basic types
int left (point2D a, point2D b, point2D c);
int signed_area2D(point2D a, point2D b, point2D c);
int collinear(point2D p, point2D q, point2D r);

#endif
