//sphere.c, sphere intersect function

#include "sphere.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


// ray/sphere intersect function
int intersect(ray_t *ray, sphere_t *sph, double *t){
int hit = 0;	
	//calculate A, B, and C variables to determine the discriminant	
	double A = vec_dot(&ray->dir, &ray->dir);
	PV_t dist = vec_diff(&ray->or, &sph->ctr);
	double B = 2 * vec_dot(&ray->dir, &dist);
	double C = vec_dot(&dist, &dist) - (sph->radius * sph->radius);
	//equation for the discriminant B^2 - 4AC
	double discriminant = (B * B) - 4 * (A * C);
	
	//return no hit if disc < 0
	if(discriminant < 0)
		hit = 0;
	
	//determining the t0 and t1 for the sphere intersection
		double discsqrt = sqrt(discriminant);
		double t0 = (-B - discsqrt)/(2);
		double t1 = (-B + discsqrt)/(2);		
		//set t0 to not greater (closer) than t1		   
		if(t0<0 && t1==0){
		hit=0;
		}		
		if(t0 < 0.0){
		      *t = t1;
		      }
      		
		   //if its also greater than 0, return 1 for hit. If not then 0
		   if(t0 > 0.0){
			*t = t0;
			hit = 1;
			}
			else
			   hit = 0; 
		
return hit;
}

