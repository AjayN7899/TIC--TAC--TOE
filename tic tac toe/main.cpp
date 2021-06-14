/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
int player;

int wincheck()
{
    int returnvalue=0;
    if(a[1]==a[2] && a[2]==a[3])
    returnvalue=1;

    else if(a[1]==a[4] && a[4]==a[7])
     returnvalue=1;

    else if(a[1]==a[5] && a[5]==a[9])
     returnvalue=1;

     else if(a[3]==a[6] && a[6]==a[9])
     returnvalue=1;

     else if(a[3]==a[5] && a[5]==a[7])
     returnvalue=1;

     else if(a[4]==a[5] && a[5]==a[6])
     returnvalue=1;

     else if(a[7]==a[8] && a[8]==a[9])
     returnvalue=1;

     else if(a[2]==a[5] && a[5]==a[8])
     returnvalue=1;

     else if (a[1]!='1' && a[2]!='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' &&a[6]!='6' &&a[7]!='7' &&a[8]!='8' &&a[9]!='9')
returnvalue=0;

    else
    returnvalue=-1;

    return returnvalue;
}


void displayboard()
{


system ("CLS");
     cout<<"*** Tic Tac Toe***\n\n\n";
    cout<<"PLAYER 1(x)  -- PLAYER 2 (0)\n\n\n";

    cout<<"     |     |      \n";
    cout<<"  "<<a[1]<<"  |  "<<a[2]<<"  |  "<<a[3];

    cout<<"\n_____|_____|_____\n";
    cout<<"     |     |     \n";


    cout<<"  "<<a[4]<<"  |  "<<a[5]<<"  |  "<<a[6];

    cout<<"\n_____|_____|_____\n";
    cout<<"     |     |     \n";


    cout<<"  "<<a[7]<<"  |  "<<a[8]<<"  |  "<<a[9];

    cout<<"\n     |     |     \n";
}

void markboard(char mark, int choice)

{
    if(choice==1 && a[1]=='1')
        a[1]=mark;

    else if(choice==2 && a[2]=='2')
        a[2]=mark;

     else if(choice==3 && a[3]=='3')
        a[3]=mark;

    else if(choice==4 && a[4]=='4')
        a[4]=mark;

    else if(choice==5 && a[5]=='5')
        a[5]=mark;

    else if(choice==6 && a[6]=='6')
        a[6]=mark;

     else if(choice==7 && a[7]=='7')
        a[7]=mark;

      else if(choice==8 && a[8]=='8')
        a[8]=mark;

      else if(choice==9 && a[9]=='9')
        a[9]=mark;

      else
        {
           cout<<"invalid move";

            player --;
            getch();


        }

}

int main()
{
    int gamestatus, choice;
    char mark;
    player =1;
     do{
         displayboard();
         player=(player%2==1)?1:2;
          cout<<"player "<<player<<"  enter the choice \n";
          cin>>choice;
          mark=(player==1)?'X':'O';
          markboard(mark,choice);
          displayboard();


          gamestatus=wincheck();
          player++;

     } while(gamestatus==-1);

     if (gamestatus==1)
     cout<<"congratulations player "<< --player<<"  won the game";
     else
     cout<<"the game is draw";


     return 0;
}





