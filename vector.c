//vector.c


#include "vector.h"


//vector sum function 
PV_t vec_sum(PV_t *v1, PV_t *v2)   
{
PV_t v3 = {v1->x + v2->x, v1->y + v2->y, v1->z + v2->z};
  return v3;
}

//difference between 2 vectors
PV_t vec_diff(PV_t *v1, PV_t *v2)
{
    PV_t v3 = {v1->x - v2->x, v1->y - v2->y, v1->z - v2->z };
   return v3;   
}

//dot product of 2 vectors
double vec_dot(PV_t *v1, PV_t *v2) 
{
  return v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
}

//scale a vector by a factor
PV_t vec_scale(double fact, PV_t *v1)
{	
	PV_t scale = {fact * (v1->x), fact * (v1->y), fact * (v1->z)};
		return scale;
}

double vec_len(PV_t *v1)  /* Vector whose length is desired */
{
	double v = sqrt((v1->x * v1->x) + (v1->y * v1->y) + (v1->z * v1->z));
	return(v);
}
		

