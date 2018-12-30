//ray.h containing structure types

#include "vector.h"

//ray structure w/origin and direction points/vectors
typedef struct ray_type{
   PV_t or;
   PV_t dir;
} ray_t;

//color structure w/red green blue values
typedef struct color_type{
   double r;
   double g;
   double b;
} color_t;

//struct for plane
typedef struct plane_type{
   PV_t norm;
   double D;
} plane_t;

//sphere structure w/center point and radius
typedef struct sphere_type{
   PV_t ctr;
   double radius;
   color_t sclr; 
} sphere_t;
	
//light structure w/origin point and color amount
typedef struct light_type{
   PV_t origin;
   color_t amount;
} light_t;


