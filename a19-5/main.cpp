#include<iostream>

using namespace std;
int partition(int[],int,int);
void quicksort(int[],int,int);
void printAll(int[],int);

int main()
{
const int N = 7;
int n[N] ={1,8,5,9,4,3,7};
printAll(n,N);
quicksort(n,0,N-1);
printAll(n,N);
return 0;
}

int partition (int num[],int x, int y){
  int p = num[y]; 
  int i= -1;
  for(int j=0;j<y;j++){ 
    if(num[j] <p){
      i++; 
      swap(num[i], num[j]);
  }
  }
  swap(num[i+1],num[y]); 
  return i+1; 
}

void quicksort(int num[], int x, int y){
  int pivot_idx;
  if(x>=y)
  return;
  pivot_idx = partition(num,x,y);
  quicksort(num,x,pivot_idx -1);
  quicksort(num,pivot_idx + 1,y); 
}

void printAll(int num[],int N){
  for(int i=0;i<N;i++){
  cout<<num[i]<<" ";
}
cout<<endl;
}