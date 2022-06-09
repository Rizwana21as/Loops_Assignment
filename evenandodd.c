// Description: Write a c program to print all even and odd numbers btwn 1-100  
/*o/p : even numbers are : 2,4,6,....100
odd numbers are : 1,3,5,.....99*/

#include<stdio.h>
int main()
{
    int l=100,i;
    for(i=2;i<=l;i++)
    {
        if(i%2==0)
        {
        printf("even number:%d\t",i);
    }
    else
    {
        printf("odd number:%d\t",i);
    }
    }
return 0;
}
