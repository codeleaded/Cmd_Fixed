#if defined __linux__
#include "/home/codeleaded/System/Static/Library/Fixed.h"
#elif defined _WINE
#include "/home/codeleaded/System/Static/Library/Fixed.h"
#elif defined _WIN32
#include "F:/home/codeleaded/System/Static/Library/Fixed.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif

#include <stdio.h>

int main(int argc, const char *argv[]){
    
    Fixed16 f1 = Fixed16_ByDouble(8,5.6);
    Fixed16 f2 = Fixed16_ByDouble(12,2.7);
    Fixed16 f3 = Fixed16_Mul(f1,f2);
    Fixed16 f4 = Fixed16_Div(f1,f2);

    double d1 = Fixed16_ToDouble(f1);
    double d2 = Fixed16_ToDouble(f2);
    double d3 = Fixed16_ToDouble(f3);
    double d4 = Fixed16_ToDouble(f4);

    printf("%lf %lf %lf %lf\n",d1,d2,d3,d4);

    return 0;
}