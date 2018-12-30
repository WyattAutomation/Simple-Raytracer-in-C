#include"sphere.h"

//prototypes for the lighting functions
color_t pln_lighting(light_t *, ray_t *, xpnt_t *);
color_t do_lighting(light_t *, ray_t *, sphere_t *, double *);
