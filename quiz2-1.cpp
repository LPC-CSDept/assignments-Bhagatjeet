#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int  *fillupArray(int N);
void printArray(int * const ptr, int N);

int main()
{
    const int N=10;
    int *ptr=nullptr;
    ptr = fillupArray(N);
    printArray(ptr, N);
}
int *fillupArray(int N)
{
      srand(time(0));
    int *num = new int[N];
    for (int i=0; i<N; i++){
        num[i]=rand()% 100;
    }
    return num;
}
void printArray(int *const ptr, int N)
{
    for (int i=0; i<N; i++){
        cout << ptr[i] << endl;
    }
}