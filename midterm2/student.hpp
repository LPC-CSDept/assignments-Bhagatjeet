#include <bits/stdc++.h>

using namespace std;

class student
{
  public:
  int id;
  string name;
  int score1;
  int score2;
  int score3;
  int total_scores;
void display(student a[], int n)
  {
    for(int i = 0; i < n; i++)
    {
      int swaps = 0;

      for(int j = 0; j < n-i-1; j++)
      {
        if(a[j].total_scores < a[j+1].total_scores)
        {
          swap(a[j], a[j+1]);
          swaps = 1;
        }
      }
      if(!swaps)
      break;
    }