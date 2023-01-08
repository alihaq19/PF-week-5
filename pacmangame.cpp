#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void printPacman(int x,int y);
void erasePacman(int x, int y);
void gotoxy(int x, int y);
char getCharAxy(short int x ,short int y);
main()
{
    int pacmanx=4;
    int pacmany=4;
    bool gameRunning=true;
    system("cls");
    printmaze();
    printPacman(pacmanx,pacmany);
    while(gameRunning)
    {
        
        if(GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation=getCharAxy(pacmanx-1,pacmany);
            if(nextLocation==' ')
            {
                erasePacman(pacmanx,pacmany);
                pacmanx=pacmanx-1;
                printPacman(pacmanx,pacmany);

            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation=getCharAxy(pacmanx+1,pacmany);
            if(nextLocation==' ')
            {
                erasePacman(pacmanx,pacmany);
                pacmanx=pacmanx+1;
                printPacman(pacmanx,pacmany);
            }
        }
        if(GetAsyncKeyState(VK_UP))
        {
            char nextLocation=getCharAxy(pacmanx,pacmany-1);
            if(nextLocation==' ')
            {
                erasePacman(pacmanx,pacmany);
                pacmany=pacmany-1;
                printPacman(pacmanx,pacmany);
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation=getCharAxy(pacmanx,pacmany+1);
            if(nextLocation==' ')
            {
                erasePacman(pacmanx,pacmany);
                pacmany=pacmany+1;
                printPacman(pacmanx,pacmany);
            }
        }
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning=false;
        }
        Sleep(200);

    }

}
void printmaze()
{
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%                                                            %"<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printPacman(int x,int y)
{
    gotoxy(x,y);
    cout<<"P";
}
void erasePacman(int x, int y)
{
    gotoxy(x,y);
    cout<<" ";

}
char getCharAxy(short int x ,short int y)
{
    CHAR_INFO ci;
    COORD xy={0,0};
    SMALL_RECT rect={x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
