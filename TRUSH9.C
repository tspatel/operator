#include<stdio.h>
#include<conio.h>
main()
{
    clrscr();
    int x=8,y=4,z=6,xyz;
    xyz=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z))+(3*(z+x));
    printf("%d",xyz);
    getch();


    }
