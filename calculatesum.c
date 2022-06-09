// Description: wap to calculate the sum of numbers (10 numbers max)

#include <stdio.h>
void main()
{       
    int i,n,sum=0;
	//6float avg;
	printf("Input the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
                printf("Number%d :",i);

		scanf("%d",&n);
		sum +=n;
	}
			printf("The sum of given numbers is:%d",sum);
 
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  a) If the user enters a negative number, the loop terminates
         
#include <stdio.h>
int main(){
    int num, sum = 0,n;
    
    // Asking for input
    printf("Enter numbers: \n");
 // scanf("%d",&n);
    for (int i = 1; i <= 10; i++){
        printf("Number %d = ", i);
        scanf("%d", &num);
        
        if (num < 0){
            break;
        }
        sum = num + sum;
    }
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 b) If the user enters a negative number, it's not added to the result
 ex   a: user enters 
  1 - add to sum , 20, add to sum , 0 - terminate the loop and sum  should be printed 
  ex b : user enters  1 - add to sum , 20 , add to sum , -1 - dont add to sum - go to next iteration - print sum 



#include <stdio.h>
int main()
{
    int num, sum = 0,n;
    
    // Asking for input
    printf("Enter numbers: \n");
  //scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        printf("Number %d = ", i);
        scanf("%d", &num);
        if(num==0)
        {
            break;
       }
        if (num < 0)
        {
            continue;
        }
        
        sum = num + sum;
        
    }
    
    // Display output
    printf("Sum of positive numbers: %d", sum);
    return 0;
}
