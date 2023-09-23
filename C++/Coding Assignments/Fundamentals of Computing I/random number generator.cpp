#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    for (int i = 0; i < 4; i++)
        cout << (rand() % 6) + 1 << " ";
  
    return 0;
}
