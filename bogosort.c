#include<stdio.h>
#include <stdlib.h>
#include <time.h>


//function signature
int arrayRando(int []);


//create global varable
#define SIZE 5


int main(){


    //initilise variables
    int userArray[SIZE];
    int i, j;
    time_t t;
    int counter = 0;
    int runs = 0;
    int end = 0;


    /* Intializes random number generator */
    srand((unsigned) time(&t));

    
    printf("Please enter %d numbers\n", SIZE);


    //scan in numbers to array
    for ( i = 0; i < SIZE; i++){

        scanf("%d", &userArray[i]);

    }//end for


    //while loop to continuosly run code
    while (end == 0){


        //check is the array is sorted
        for ( i = 1; i < SIZE; i++)
        {

            if (userArray[i] < userArray[i-1])
            {
                //increse counter if the array is sorted
                counter++;

            }//end if
            
        }//end for


        if (counter == 0){

            //if sorted
            printf("The array is sorted\n");
            printf("The array randomised %d times\n", runs);
            end = 1;

        }//end if

        else{
            
            //if unsorted
            arrayRando(userArray);
            runs++;

        }//end else

        //prints the first element (done to allow proper printing of the array)
        printf("%d",userArray[0]);


        for ( i = 1; i < SIZE; i++){

                //print the array from 2nd value to end
                printf(", %d",userArray[i]);

        }//end for

        //newline
        printf("\n");

        counter = 0;
    }//end while



    return 0;

}//end main


int arrayRando(int userArray[]){


    //initilise variables
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

}//end func