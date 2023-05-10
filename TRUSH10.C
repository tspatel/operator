#include<stdio.h>
#include<conio.h>
main()
{
    clrscr();
    int x=6,y=3,z=7,xyz;
    xyz=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
    printf("%d",xyz);
    getch();
    }