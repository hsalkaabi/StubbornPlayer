#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int repeat;
  int winner;

    cout<<" How many times do you want to play?\n";
    cin>> repeat;

    for( int index=0; index<repeat; index++)
    {

            game.newGame();
            game.guessDoorC();
            game.guessDoorC();
    if(game.isWinner() == true)
    {
            winner++;

    }

    }

    cout<<"How many times you won?\n"<<winner<<endl;


  return 0;
}
