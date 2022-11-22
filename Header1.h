#pragma once


#define V 21
#define H 75
#define N 100

struct snake
{
	int x, y; // определ€ем где змейка стоит в начале
	int movX, movY;
	char imagen; //где хран€тс€ изображени€ змеи, тело
};

struct  fruit
{
	int x, y;
};

struct snake snk[N]; // максимальный размер
struct fruit frt;

//typedef void show(char map[V][H]);


/////////////////////////////////////////////////////////////////////

void setColor(int ForgC);

void greetings(int* choice);

void begin(int* size, char map[V][H]);
void intro(char map[V][H]);
void intro_data(char map[V][H], int* size);
void loop(char map[V][H], int size);
void input(char map[V][H], int* size, int* dead);
void update(char map[V][H], int size);
void intro_data2(char map[V][H], int size);

void gotoxy(int x, int y);

void show(char map[V][H]);

void gameRules();
void playGame();

