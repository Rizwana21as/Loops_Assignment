// Description: A sequence must be made with the following constraint on its values.
/*Constraint: The number of consecutive same elements in the sequence should be same as the value.  
Example: 1 2 2 3 3 3 4 4 4 4 is valid (input1)              
1 2 3 3 3  is invalid. (input2) 
Write a program that checks whether a given input sequence is valid.
Input format is just a sequence of integers.
Output format should be one of the following:
input1  : sequence is valid
input2  : sequence is not valid*/

#include<stdio.h>  
int main() 
{ 
int i,j,k,n,num; 
printf("Enter the limit:");
scanf("%d",&n);
for(i=1;i<=n;i++)  
{  
for(j=1;j<=i;j++)  

printf("%d",i);
}
printf("\nEnter user input:");
scanf("%d",&num);
if(num==k)
{
    printf("Valid");
}
else
{
    printf("Invalid");
}
return 0;  
}
