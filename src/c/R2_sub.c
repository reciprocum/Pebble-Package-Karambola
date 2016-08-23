/*
   Package: R2
   File   : R2_sub.c
   Author : Afonso Santos, Portugal

   Last revision: 17h35 August 19 2016
*/

#include "R2.h"


// c := a - b

R2*
R2_sub
( R2       *c
, const R2 *a
, const R2 *b
)
{
  c->x = a->x - b->x ;
  c->y = a->y - b->y ;
 
  return c ;
}