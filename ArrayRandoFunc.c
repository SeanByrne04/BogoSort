#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int arrayRando(int []);


#define SIZE 10

int main(){


    //initilise variables
    int userArray[SIZE];
    int i;
    time_t t;


    /* Intializes random number generator */
    srand((unsigned) time(&t));

    
    printf("Please enter %d numbers\n", SIZE);


    //scan in numbers to array
    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d", &userArray[i]);
    }//end for


    arrayRando(userArray);


    for ( i = 0; i < SIZE; i++)
    {
        printf("Array position %d contains %d\n", i+1, userArray[i]);
    }//end for


    return 0;
}


int arrayRando(int userArray[]){

    int i;
    int x;
    int randNum;


    //generate random number
    randNum = rand() % SIZE;


    for (i = 0; i < SIZE; i++)
    {

        x = userArray[i];  //array value added to x so the value isn't lost

        //swaps the position of the two numbers
        userArray[i] = userArray[randNum];
        userArray[randNum] = x;
        
        //generate random number
        randNum = rand() % SIZE;
        
    }//end for loop

    return *userArray;

}