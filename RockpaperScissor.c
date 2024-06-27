#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Function to implement the game
int game(char you,char computer)
{
    /*If both the user and computer
    has choose the same thing*/
    if(you == computer)
    {
        return -1;
    }
    /*If user's choice is stone and computer 's chiice is paper*/
    if(you == 's' && computer =='p')
    {
        return 0;
    }
    else if(you == 'p' && computer == 's'){
        return 1;
    }
    if(you == 's' && computer =='z'){
        return 1;
    }
    else if(you == 'z' && computer=='s'){
        return 0;
    }
    if(you == 'p' && computer =='z'){
        return 0;
    }
    else if(you == 'z' && computer =='p'){
        return 1;

    }

}
int main(){
    // Stores the random number
    int n;
    char you,computer,results;
    // Chooses the random number every time
    srand(time(NULL));
    //Make the random number less than 100,divided it by 100
    n = rand()%100;
    //Using simple probability 100 is roughly divided among
    // stone,papaer and scissor
    if (n<33){
        //s is denoting Stone
        computer = 's';
    }
    else if(n > 33 && n < 66){
        //p is denoting Paper
        computer = 'p';
    }
    else{
        // z is denoting Scissor
        computer = 'z';
    }
    printf("\n\n\n\n\n\t\t\t\t Enter s for Stone,p for Paper and z for Scissor \n\t\t\t\t\t\t ");
    //  Input from the user
    printf("Enter Your Choices:");
    scanf("%c",&you);
    //Function call to play the game
    results = game(you,computer);
    if(results == -1){
        printf("\n\n\t\t\t\tGame Dreaw!\n");
    }
    else if(results == 1){
        printf("\n\n\t\t\t\t Wow! You have won the game!\n");
    }
    else{
        printf("\n\n\t\t\t\t Oh! You have lost the game!\n");
    }
    printf("\t\t\t\t You choose : %c and Computer choose : %c\n",you,computer);
    return 0;
}