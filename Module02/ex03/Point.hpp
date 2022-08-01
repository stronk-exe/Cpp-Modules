#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point( int, int );
        Point& operator=( Point const &p );
        ~Point();
};
0 1 0 0 0 0 0
1 1 0 0 0 0 0
0 0 0 0 0 0 0
0 1 0 0 0 0 0


           |
           |
           |1
---------1-|-----------
           1
           |
           |
#endif