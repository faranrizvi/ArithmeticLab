#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


    
    int rollDice(void){
    int numb1 = (rand() % 6) + 1;
    int numb2 = (rand() % 6) + 1;
    
    int numRolled = numb1 + numb2;
    return numRolled;
    }
    
bool playGame(void){
    int roll = rollDice();
    printf("You rolled: %d\n", roll);
    
    if(roll == 7 || roll == 11){
        printf("You win!\n");
        return true;

    }
    if(roll == 2 || roll == 3 || roll == 12){
        printf("You lose!\n");
        return false;
    }
    int point = roll;
    printf("Your point is %d\n", point);
    do {
        roll = rollDice();
        printf("You rolled %d\n", roll);
        if (roll == 7){
        printf("You lose!\n");
        return false;
        }

        else if(roll == point){
        printf("You win!\n");
        return true;
        }
    }
    while(roll != point);
    return false;
}
void winLoss(void)
{
    char decision;
    int numWins = 0;
    int numLosses = 0;
    do{
      bool game = playGame();
      if(game == true){
      numWins = numWins + 1;
      }
      
      else if(game == false){
      numLosses = numLosses + 1;
    }

      printf("Play again? \n");
      scanf(" %c", &decision);
    }
    while (decision == 'y'|| decision == 'Y');
      printf("Wins: %d\n", numWins);
      printf("Losses: %d\n", numLosses);
    }

    int main(void){
      winLoss();
      return 0;
    }





