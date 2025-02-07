#include<iostream.h>
#include<conio.h>
    int gameOver = 0;
    char arr[10] = {'o','1','2','3','4','5','6','7','8','9'};
void displayBoard(){
    clrscr();
    cout << arr[1] << " | " << arr[2] << " | " << arr[3] << endl;
    cout << "- + - + -\n";
    cout << arr[4] << " | " << arr[5] << " | " << arr[6] << endl;
    cout << "- + - + -\n";
    cout << arr[7] << " | " << arr[8] << " | " << arr[9] << endl;
}
void gameLogic(){
   if(arr[1]==arr[4] && arr[4]==arr[7]){
      if(arr[1]=='X'){
      cout << "Player 1 wins" << endl;
      gameOver = 1;
      }
      else{
      cout << "Player 2 wins" << endl;
      gameOver = 1;
      }
   }
   if(arr[2]==arr[5] && arr[5]==arr[8]){
      if(arr[1]=='X'){
      cout << "Player 1 wins" << endl;
      gameOver = 1;
      }
      else{
      cout << "Player 2 wins" << endl;
      gameOver = 1;
      }
   }
   if(arr[3]==arr[6] && arr[6]==arr[9]){
      if(arr[1]=='X'){
      cout << "Player 1 wins" << endl;
      gameOver = 1;
      }
      else{
      cout << "Player 2 wins" << endl;
      gameOver = 1;
      }
   }
   if(arr[1]==arr[2] && arr[2]==arr[3]){
      if(arr[1]=='X'){
      cout << "Player 1 wins" << endl;
      gameOver = 1;
      }
      else{
      cout << "Player 2 wins" << endl;
      gameOver = 1;
      }
   }
   else if(arr[4]==arr[5] && arr[5]==arr[6]){
      if(arr[4]=='X'){
      cout << "Player 1 wins" << endl;
      gameOver = 1;
      }
      else{
      cout << "Player 2 wins" << endl;
      gameOver = 1;
      }
   }
   else if(arr[7]==arr[8] && arr[8]==arr[9]){
      if(arr[7]=='X'){
      cout << "Player 1 wins" << endl;
      gameOver = 1;
      }
      else{
      cout << "Player 2 wins" << endl;
      gameOver = 1;
      }
   }
   else if(arr[1]==arr[5] && arr[5]==arr[9]){
      if(arr[1]=='X'){
      cout << "Player 1 wins" << endl;
      gameOver = 1;
      }
      else{
      cout << "Player 2 wins" << endl;
      gameOver = 1;
      }
   }
   else if(arr[3]==arr[5] && arr[5]==arr[7]){
      if(arr[3]=='X'){
      cout << "Player 1 wins" << endl;
      gameOver = 1;
      }
      else{
      cout << "Player 2 wins" << endl;
      gameOver = 1;
      }
   } 
}
int playerOneTurn(){
   if(gameOver == 1){return 1;}
 int player1Turn;
 cout << "Player 1 Turn : ";
 cin >> player1Turn;
 switch(player1Turn){
       case 1:
	    arr[1] = 'X';
	displayBoard();
	gameLogic();
	break;
       case 2:
	    arr[2] = 'X';
	    displayBoard();
	gameLogic();
	break;
       case 3:
	    arr[3] = 'X';
	    displayBoard();
	gameLogic();
	break;
       case 4:
	    arr[4] = 'X';
	    displayBoard();
	gameLogic();
	break;
       case 5:
	    arr[5] = 'X';
	    displayBoard();
	gameLogic();
	break;
       case 6:
	    arr[6] = 'X';
	    displayBoard();
	gameLogic();
	break;
       case 7:
	    arr[7] = 'X';
	    displayBoard();
	gameLogic();
	break;
       case 8:
	    arr[8] = 'X';
	    displayBoard();
	gameLogic();
	break;
       case 9:
	    arr[9] = 'X';
	    displayBoard();
	gameLogic();
	break;
       default:
	    cout << "Inavlid Choice !";
 }
}
int playerTwoTurn(){
   if(gameOver == 1){return 1;}
 int player2Turn;
 cout << "Player 2 Turn : ";
 cin >> player2Turn;
 switch(player2Turn){
       case 1:
	    arr[1] = 'O';
	displayBoard();
        gameLogic();
        break;
       case 2:
	    arr[2] = 'O';
	    displayBoard();
        gameLogic();
        break;
       case 3:
	    arr[3] = 'O';
	    displayBoard();
        gameLogic();
        break;
       case 4:
	    arr[4] = 'O';
	    displayBoard();
        gameLogic();
        break;
       case 5:
	    arr[5] = 'O';
	    displayBoard();
        gameLogic();
        break;
       case 6:
	    arr[6] = 'O';
	    displayBoard();
        gameLogic();
        break;
       case 7:
	    arr[7] = 'O';
	    displayBoard();
        gameLogic();
        break;
       case 8:
	    arr[8] = 'O';
	    displayBoard();
        gameLogic();
        break;
       case 9:
	    arr[9] = 'O';
	    displayBoard();
        gameLogic();
        break;
       default:
	    cout << "Inavlid Choice !";
 } 
}


int main(){
    clrscr();
    int i = 1;
    while(i<=4){
    playerOneTurn();
    playerTwoTurn();
    i++;
    }
    playerOneTurn();
    if(gameOver == 0){
    cout << "It's a Tie";
    }
    getch();
    return 0;

}