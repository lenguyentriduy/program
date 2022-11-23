#include <iostream>
#include <conio.h>
using namespace std;
bool gameOver;
const int width = 30;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void setUp(){
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
void doDraw(){
    system("cls"); //system("clear");
    for(int i = 0; i < width+2; i++){
        cout << "#";
    }
    cout << endl;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width+2; j++){
            if(j == 0 || j == width+1){
                cout << "#";
            }
            else if(i == y && j == x){
                cout << "0";
            }
            else if(i == fruitY && j == fruitX){
                cout << "o";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i = 0; i < width+2; i++){
        cout << "#";
    }
}
void doInput(){
    if(kbhit()){
        switch(getch()){
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}
void doLogic(){
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
}
int main(){
    setUp();
    while(!gameOver){
        doDraw();
        doInput();
        doLogic();
        //gameOver = true;

    }
    //cout << "Hello";
    return 0;
}