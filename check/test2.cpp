#include<stdio.h>
#include<iostream>
#include<ctime>

int main()
{
    int head = 0, tail = 0, count = 0;

    srand(time(0));

    for (int i = 1; i <= 130246; i++)
    {
        int ran = rand() % 2;
        /*printf("%d", ran);*/

        if (ran == 0) head++;
        else tail++;
    }

    printf("\nhead : %d tail :%d", head, tail);

}