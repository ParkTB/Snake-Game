#include <iostream>
#include <ncurses.h>
#ifndef SNAKE_H
#define SNAKE_H

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4


class snake{

public:
    bool gameOver;
    int growthCnt, growthItemTime, growthItemX, growthItemY;
    int poisonCnt, poisonItemTime, poisonItemX, poisonItemY;
    int gateX1, gateY1, gateX2, gateY2, gateTime;
    int gItemCnt, pItemCnt, passGateCnt, maxLength, currentLength;
    int nTail, current_tick;
    int goalGItem, goalPItem, goalPassGate, goalMaxLength;
    int _x;
    int _y;
    snake();
    ~snake();
    void start();
    int keyControl();
    int titleDraw();
    void infoDraw();
    int stageSelect();
    void drawMap(int* x, int* y);
    void gLoop(int s);
    void move(int* x, int* y);
    void growthItem();
    void poisonItem();
    void openGate();
    bool missionCheck();
    void victoryDraw();
    int failDraw();
    void scoreBoard();
    int getScore();
    void stageClear();

};




#endif
