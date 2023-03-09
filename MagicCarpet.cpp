#include "MagicCarpet.h"

MagicCarpet::MagicCarpet()
{
	speed_air = 10;
	cls_name = "Ковёр-самолёт";
}
double MagicCarpet::dist_reduction_Air(int distance)
{
	double reduction = 0;
	if (distance < 1000) {
		reduction = 0;
	}
	else if (distance >= 1000 && distance < 5000) {
		reduction = 0.03;
	}
	else if (distance >= 5000 && distance < 10000) {
		reduction = 0.1;
	}
	else if (distance >= 10000) {
		reduction = 0.05;
	}
	return reduction;
}
;

