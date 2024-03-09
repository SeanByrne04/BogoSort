#include<stdio.h>

#define SIZE 5

int main(){
    int userArray[SIZE];
    int i, j;
    int counter = 0;

    printf("Please enter %d numbers\n", SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d", &userArray[i]);
    }
    
    for ( i = 1; i < SIZE; i++)
    {
        if (userArray[i] < userArray[i-1])
        {
            counter++;
        }
        
    }

    if (counter == 0)
    {
        printf("The array is sorted\n");
    }
    else{
        printf("The array is unsorted\n");
    }
    
    


    return 0;
}