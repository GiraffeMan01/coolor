
#include <stdio.h>
#include <stdlib.h>

// coolor.c
// The terminal color changing program to end all terminal color changing programs
// (By Alex Cass, 2/5/2022)

// Code to clear the screen
void clearscreen(){
  // This may vary between systems
  // If the compiler complains here, consider changing it to another option

  system("cls||clear");

  //printf("\e[1;1H\e[2J");

  //clrscr(); // requires conio.h  
}

// This is separated for possible future color pallete expansion
const int num_colors = 18;

// *Note: 0 is not used as a color number because atoi returns 0 and is used for syntax checking.

int main(int argc, char *argv[]){
  // Error catching goes first
  clearscreen();

  if(argc==1){
    // Help message
    printf("\n\n   \033[92mcoolor - The terminal color changing program! By: Alex Cass\n\n\033[0mTo use this program, use this syntax: \033[7m./coolor <1-%d>\033[0m\n\nColor codes:\n\n",num_colors);

    printf("\033[34m   1 \u2588 Blue    \033[94m 11 \u2588 Azul \n");
    printf("\033[32m   2 \u2588 Green   \033[92m 12 \u2588 Lime \n");
    printf("\033[36m   3 \u2588 Cyan    \033[96m 13 \u2588 Aqua \n");
    printf("\033[31m   4 \u2588 Red     \033[91m 14 \u2588 Rose \n");
    printf("\033[35m   5 \u2588 Purple  \033[95m 15 \u2588 Pink \n");
    printf("\033[33m   6 \u2588 Amber   \033[93m 16 \u2588 Gold \n");
    printf("\033[37m   7 \u2588 White   \033[97m 17 \u2588 Bold \n");
    printf("\033[90m   8 \u2588 Gray    \033[0m 18 \u2588 None \n");
    
    printf("\033[0m\n");
    return 0;
  }
  
  if(argc!=2){
    printf("\n\n \033[91mSyntax error!\n Try running \033[97m./coolor <1-%d>\033[91m to change the terminal text color.\033[0m\n\n",num_colors);
    return 0;
  }

  int c = atoi(argv[1]);

  switch(c){
  case 1:
    printf("\033[34m\n"); // Blue
    break;
  case 2:
    printf("\033[32m\n"); // Green
    break;
  case 3:
    printf("\033[36m\n"); // Cyan
    break;
  case 4:
    printf("\033[31m\n"); // Red
    break;
  case 5:
    printf("\033[35m\n"); // Purple
    break;
  case 6:
    printf("\033[33m\n"); // Amber
    break;
  case 7:
    printf("\033[37m\n"); // White
    break;
  case 8:
    printf("\033[90m\n"); // Gray
    break;

  case 9:
  case 10:
    printf("\033[0m\n"); // None
    break;
    
  case 11:
    printf("\033[94m\n"); // Azul
    break;
  case 12:
    printf("\033[92m\n"); // Lime
    break;
  case 13:
    printf("\033[96m\n"); // Aqua
    break;
  case 14:
    printf("\033[91m\n"); // Rose
    break;
  case 15:
    printf("\033[95m\n"); // Pink
    break;
  case 16:
    printf("\033[93m\n"); // Gold
    break;
  case 17:
    printf("\033[97m\n"); // Bold
    break;
  case 18:
    printf("\033[0m\n"); // None
    break;
  default: // Invalid number
    printf("\n\n \033[91mInvalid color code!\n Try running \033[97m./coolor <1-%d>\033[91m to change the terminal text color.\033[0m\n\n",num_colors);
    break;
  }
  return 0;
}
