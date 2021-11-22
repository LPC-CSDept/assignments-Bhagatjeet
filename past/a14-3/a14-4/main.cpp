#include "main.hpp"

Numbers::Numbers(){
  size = 0;
  numbers = nullptr;
}
Numbers::Numbers(int s){
  size = s;
  numbers = new int [s];
   for (int i=0; i<s; i++){
        int n = rand() % 100;
        numbers[i]=n;
}}
Numbers::Numbers(const Numbers &n){
  size = n.size; //copying size
  numbers = new int[size]; //new memory space
  for(int i = 0; i < size; i++){
        numbers[i] = n.numbers[i]; //copying all elements
}}
int Numbers::getMax() const{
int max = 0;
 for (int i=0; i<size; i++){
   if(numbers[i]>max)
     max = numbers[i];
 }
 return max;
}

void printNumbers(Numbers n) {
  for (int i=0; i<n.size; i++){
        cout << n.numbers[i] << endl;
    }
}

Numbers::~Numbers(){
  delete[] numbers;
}