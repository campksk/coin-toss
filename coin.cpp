#include <stdio.h>
#include <iostream>
#include <ctime>
#include <windows.h>
#include <fstream>

using namespace std;

int seed()
{
    Sleep(1000);
    srand(time(0));
    return rand();
}

int main()
{
    int big_loop, small_loop, min, max;
    float average, all;

    printf("How many do you want Big loop : ");
    scanf("%d",&big_loop);

    printf("How many do you want Small loop : ");
    scanf("%d",&small_loop);

    ofstream myfile ("example.txt");
    if (myfile.is_open())
    {
        myfile << "Big loop : " << big_loop;
        myfile << "\nSmall loop : " << small_loop;
    }

    for (int s_l = 1; s_l <= big_loop; s_l++)
    {
        srand(seed());
        min = 0, max = 0, all = 0;

        for (int i = 1; i <= small_loop; i++)
        {
            int head = 0, tail = 0, count = 0;
            
            do
            {
                int ran = rand() % 2;

                if (ran == 0) head++;
                else tail++;

                count++;

            } while (head != tail);

            /*printf("%d : %d\n", i, count);*/
            myfile << "\n" << count;
            /*printf("%d\n", count);*/

            if (max < count) max = count;
            if (min == 0 || min > count) min = count;

            all = all + count;
            
        }

        average = all / small_loop;

        printf("%d\n", s_l);
        /*printf("\naverage is : %.2f", average);
        printf("\nmin : %d max : %d\n\n", min, max);*/
        
    }
    
}
