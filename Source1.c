#include <stdio.h>
#include <time.h> //������������ ��� ������� �� � ��� ����� ��
#include <stdlib.h> 
#include <windows.h> //�������� �������� � ������������ � � setcolor
//��� ���� _getch();
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
