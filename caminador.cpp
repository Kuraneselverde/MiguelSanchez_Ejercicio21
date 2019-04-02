#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
int main(){

    double x;
    double y;
    double px;
    double py;
    srand48(42);
    float r;
    float t;
    double l;
    x = 0;
    y = 0;
    int i;
    for (i=0;i<1000;i++)
    {  
        r = drand48();
        t = drand48();
           
        px = 2.0*r-1;
        py = 2.0*r2-1;
       
        l = sqrt(dx*dx + dy*dy);
        px = dx/L;
        py = dy/L;
           
        x = x+px;
        y = y+py;
       
        std::cout << x << " " << y << std::endl;
       
    }

    return 0;
}