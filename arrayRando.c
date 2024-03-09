/*
Progam disciption: This program allows the user to enter 5 numbers into an array and then randomises the array

Author:Sean Byrne

Date:25/2/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//global variable size used for the array
#define SIZE 5


int main (){


    //initilises variables
    int userArray[SIZE];
    int i;
    int randNum;
    time_t t;
    int x;  // transition variable


    /* Intializes random number generator */
    srand((unsigned) time(&t));

    
    printf("Please enter %d numbers\n", SIZE);


    //scan in numbers to array
    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d", &userArray[i]);
    }//end for


    //generate random number
    randNum = rand() % SIZE;


    printf("\n", randNum);


    //repets the value swapping SIZE(5) times
    for ( i = 0; i < SIZE; i++)
    {

        x = userArray[i];  //array value added to x so the value isn't lost

        //swaps the position of the two numbers
        userArray[i] = userArray[randNum];
        userArray[randNum] = x;
        
        //generate random number
        randNum = rand() % SIZE;
        
    }//end for loop


    for ( i = 0; i < SIZE; i++)
    {
        printf("Array position %d contains %d\n", i+1, userArray[i]);
    }//end for

    return 0;
}