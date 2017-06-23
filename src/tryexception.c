#include <stdio.h>
#include "tryexception.h"
#include "CException.h"



#define  radius_is_zero 1
#define  radius_is_neg 2


void validateNumber(float r)
{
  if(r==0)
  Throw(createException("radius cannot be zero",radius_is_zero));
  else if (r<0)
  Throw(createException("radius cannot be negative",radius_is_neg));
}


float areaOfCircle(float r1)
{
    CEXCEPTION_T ex;
 Try{
      validateNumber(r1);
    }Catch(ex) {
      printf("it something wrong here\n");
     Throw(ex);
    }
    printf("%f is valid",r1);
    return 3.14159*r1*r1;
}
  
void tryException(float r1){
  CEXCEPTION_T ex;
  Try{
    //try something 
    float result = areaOfCircle(r1);
    printf(" area of cicle = %f\n",result);
  }Catch(ex){
      dumpException (ex);
  }
 
}