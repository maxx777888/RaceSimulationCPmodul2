#include "Broomstick.h"

Broomstick::Broomstick()
{
    speed_air = 20;
    cls_name = "Метла";
}

double Broomstick::dist_reduction_Air(int distance)
{   
    int coeff_red = distance / 1000;

    return static_cast<double>(coeff_red)/100;
}
