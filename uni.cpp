#include <iostream>
#include <fstream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main ()
{
    int num;
    scanf("%d", &num);
    srand(time(0));
    ofstream myfile ("uni.txt");
    myfile.is_open();
    for (int i = 1; i <= num; i++)
    {
        myfile << rand() << "\n";
    }
}