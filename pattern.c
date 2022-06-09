// Description: Write a program to print the below pattern using while loop:
          / \                                                                                                                       

       /     \                                                                                                                              

     /        \                                                                                                                               

   /           \                                                                                                                                

 /_____________ \     

#include <stdio.h>
int main(void)
{
    int numberofrows; 
    printf("Enter height: ");
    scanf("%d",&numberofrows);
    int counter, rownumber;
    for (rownumber = 0 ; rownumber < numberofrows; rownumber++)  
    {
        for (counter = 0 ; counter < numberofrows- rownumber ; counter++)
            printf(" ");        
            printf("/");
        for (counter = 0 ; counter < rownumber ; counter++)
            if(rownumber >= 1)  
                for (counter = 0; counter < rownumber*2; counter++)
                {
        if (rownumber == numberofrows-1)
        {
        printf("_");
        } else 
        {
        printf(" ");
        }
        }
        printf("\\");
        printf("\n");
    }
}

