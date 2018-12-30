//vector.h


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//vector structure
typedef struct vector_type{
   double x, y, z;
} PV_t;


//  prototypes for the vector functions  


PV_t vec_sum(PV_t *, PV_t *);
PV_t vec_diff(PV_t *, PV_t *);
double vec_dot(PV_t *, PV_t *);
PV_t vec_scale(double fact, PV_t *);
double vec_len(PV_t *);
