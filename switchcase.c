// Description: Switch case 
     /*take 2 double integers and an i/p from user :
	 if "a" , add the integers and print "sum is .." ,
	 if "s" , subtract the integers and print "diff is .." ,
	 default case : print "defaut case- noaction"*/


#include<stdio.h>
int main()
{
double m,n,a,s;
char ch;
scanf("%lf",&m);
scanf("%lf",&n);
scanf("%c",&ch);
switch('s')
{
case 'a':printf("%f",m+n);
break;
case 's':printf("%f",m-n);
break;
default:printf("default case-noaction");
}
}

