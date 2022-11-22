#include <stdio.h>
#include <time.h> //использовала для рандома но и без этого ок
#include <stdlib.h> 
#include <windows.h> //помогает работать с координатами и с setcolor
//тут есть _getch();
#include <conio.h> 
#include "Header1.h"


void greetings(int* choice) {

setColor(13);
printf("\n\n*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
setColor(13);
printf("|                    Hello to my Snake!                           |");
setColor(13);
printf("\n\n*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
printf("\n1. Game Rules");
printf("\n2. Play ```Game");
printf("\n3. Quit\n");

scanf_s("%d", choice);

}
