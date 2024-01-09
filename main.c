//
//  main.c
//  guess the number
//
//  Created by Harsha K N Bandara on 2023-12-10.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //for random number generator seed

int main(void) {
    // insert code here...
    /* int count = 0;
     
     printf("Enter a number:");
     scanf("%d",&num);
     
     
     while(num<=50){
     printf("%d\n",num);
     ++num;
     
     }
     
     
     for (int i = 1; i<=count; i++) {
     int sum = 1;
     int j = 1;
     printf("\n");
     
     
     //calculate sum of integers from 1 to i
     
     while (j<i) {
     sum += ++j;
     
     printf("+%d",j);
     
     }
     printf("=%d",sum);
     }
     enum Day{monday,tuesday,wednesday,thursday,friday,Saturday,Sunday};
     
     for(enum Day day = monday; day<=Sunday; ++day){
     if(day == wednesday)
     // continue;
     break;
     printf("its not wednesday\n");
     printf("Do something useful with day\n");
     }*/
    
    
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses = 0;
    time_t t;
    
    //initialization of random number generator
    srand((unsigned) time(&t));
    
    //get the random number
    randomNumber = rand () % 21;
    
    printf("\nThis is guessing game.");
    printf("\nI have chosen a number between 0 and 20,which you must guess\n");
    
    for(numberOfGuesses = 5; numberOfGuesses>0; --numberOfGuesses){
        
        printf("\nYou have %d tr%s left.",numberOfGuesses ,numberOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter number of guesses:");
        scanf("%d",&guess);
        
        if(guess == randomNumber)
        {
            printf("\nCongratulations. You guessed it.\n");
            break;
        }
        else if(guess<0 || guess>20) //check for invalid guess
            printf("\nI said number between 0-20 ");
        else if (randomNumber>guess)
            printf("\nSorry %d is wrong.my number is greater than that",guess);
        else if (randomNumber<guess)
            printf("\nSorry %d is wrong.My number is lower than That",guess);
        
    }
        printf("\nYou have five tries and failed. The number was %d\n",randomNumber);
    
    
    return 0;
}

