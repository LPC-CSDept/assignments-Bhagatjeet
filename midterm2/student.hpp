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
    for(int i = 0; i < n; i++)
    {
      cout << "student id: " << a[i].id << "name: " << a[i].name<< " total score is: " << a[i].score1 + a[i].score2 + a[i].score3 << endl;
    }
  }

  int binarysearch(student a[], int n, int id)
  {
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
      int mid = (start+end)/2;

      if(a[mid].id == id)
      {
        return mid;
      }
      else if(a[mid].id >id)
      {
        start = mid-1;
      }
      else{
        end = mid - 1;
      }
    }
    return -1;
  }
};