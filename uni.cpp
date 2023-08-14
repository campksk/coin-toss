#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main ()
{
    srand(time(0));
    ofstream myfile ("uni.txt");
    myfile.is_open();
    for (int i = 1; i <= 1000000000; i++)
    {
        myfile << rand() << "\n";
    }
}