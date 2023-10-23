#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
const int WIDTH = 3;
const int HEIGHT = 10;
const int NUM_ROADS = 4;
const int INITIAL_DELAY = 100;         
const int MIN_DELAY = 10;         
const float ACCELERATION_INTERVAL = 1;
void drawScreen(int posX, int posY, int obstaclePosX1, int obstaclePosY1, int obstaclePosX2, int obstaclePosY2, int seconds){
    system("cls");
    for (int i = 0; i < HEIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            if (i == posY && j == posX){
                cout << "|A"; 
            }
            else if ((i == obstaclePosY1 && j == obstaclePosX1) || (i == obstaclePosY2 && j == obstaclePosX2)){
                cout << "|*";
            }
            else {
                cout << "| ";
            }
        }
        cout << "|" << endl;
    }
    cout << "Seconds: " << seconds << endl;
}
void updateObstacle(int &obstaclePosX1, int &obstaclePosY1, int &obstaclePosX2, int &obstaclePosY2, int seconds){
    int delay = INITIAL_DELAY - (seconds / ACCELERATION_INTERVAL);
    if (delay < MIN_DELAY){
        delay = MIN_DELAY;
    }
    obstaclePosY1++;
    obstaclePosY2++;
    if (obstaclePosY1 >= HEIGHT){
        obstaclePosY1 = 0;
        obstaclePosX1 = rand() % WIDTH;
    }
    if (obstaclePosY2 >= HEIGHT){
        obstaclePosY2 = 0;
        obstaclePosX2 = rand() % WIDTH;
    }
    Sleep(delay);
}
bool checkCollision(int posX, int posY, int obstaclePosX1, int obstaclePosY1, int obstaclePosX2, int obstaclePosY2){
    if ((posX == obstaclePosX1 && posY == obstaclePosY1) || (posX == obstaclePosX2 && posY == obstaclePosY2)){
        return true;
    }
    return false;
}
int main(){
    int posX = WIDTH / 2;
    int posY = HEIGHT - 1;
    int obstaclePosX1 = rand() % WIDTH;
    int obstaclePosY1 = 0;
    int obstaclePosX2 = rand() % WIDTH;
    int obstaclePosY2 = 0;
    char input;
    int seconds = 0;
    int prevTime = time(0);
    int prevAccelerationTime = time(0);
    bool autoDodgeEnabled = false;
    srand(time(0));
    while (true){
        int currentTime = time(0);
        if (currentTime - prevTime >= 1) {
            seconds++;
            prevTime = currentTime;
        }
        if (currentTime - prevAccelerationTime >= ACCELERATION_INTERVAL) {
           prevAccelerationTime = currentTime;
        }
        drawScreen(posX, posY, obstaclePosX1, obstaclePosY1, obstaclePosX2, obstaclePosY2, seconds);
        if (checkCollision(posX, posY, obstaclePosX1, obstaclePosY1, obstaclePosX2, obstaclePosY2)){
            cout << "Game Over!" << endl;
            break;
        }
        if (seconds == 300){
            system("cls");
            cout << "ban da pha dao con game nay!" << endl;
            break;
        }
        updateObstacle(obstaclePosX1, obstaclePosY1, obstaclePosX2, obstaclePosY2, seconds);
        if (autoDodgeEnabled){
            if ((posY == obstaclePosY1 && posX == obstaclePosX1) || (posY == obstaclePosY2 && posX == obstaclePosX2)){
                if ((posX == WIDTH - 1 && obstaclePosX1 == WIDTH / 2 && obstaclePosX2 == WIDTH - 1) || (posX == WIDTH - 1 && obstaclePosX2 == WIDTH / 2 && obstaclePosX1 == WIDTH - 1)){
                    posX = posX - 2;
                }
                else if ((posX == WIDTH % 3 && obstaclePosX1 == WIDTH / 2 && obstaclePosX2 == WIDTH % 3) || (posX == WIDTH % 3 && obstaclePosX2 == WIDTH / 2 && obstaclePosX1 == WIDTH % 3)){
                    posX = posX + 2;
                }
                else if ((posX == WIDTH - 1 && obstaclePosX1 == WIDTH % 3 && obstaclePosX2 == WIDTH - 1) || (posX == WIDTH - 1 && obstaclePosX2 == WIDTH % 3 && obstaclePosX1 == WIDTH - 1)){
                    posX--;
                }
                else if ((posX == WIDTH % 3 && obstaclePosX1 == WIDTH % 3 && obstaclePosX2 == WIDTH - 1) || (posX == WIDTH % 3 && obstaclePosX2 == WIDTH % 3 && obstaclePosX1 == WIDTH - 1)){
                    posX++;
                }
                else if (posX == WIDTH % 3 && obstaclePosX1 == WIDTH % 3 && obstaclePosX2 == WIDTH % 3){
                    posX += 2;
                }
                else if (posX == WIDTH - 2 && obstaclePosX1 == WIDTH % 3 && obstaclePosX2 == WIDTH - 2 || obstaclePosX1 == WIDTH - 2 && obstaclePosX2 == WIDTH % 3){
                    posX++;
                }
                else {
                    posX--;
                }
            }
        }
        else {
            if (_kbhit()) {
                input = _getch();
                if (input == 's') {
                    posX--;
                }
                else if (input == 'l') {
                    posX++;
                }
                else if (input == 'r') {
                    autoDodgeEnabled = true;
                }
            }
        }
        if (posX < 0) {
            posX = 0;
        }
        else if (posX >= WIDTH) {
            posX = WIDTH - 1;
        }
    }
    return 0;
}
