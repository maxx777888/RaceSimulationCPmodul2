#include "Eagle.h"

Eagle::Eagle()
{
    speed_air = 8;
    cls_name = "Îð¸ë";
}

double Eagle::dist_reduction_Air(int distance)
{
    return 0.06;
}
