#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <fstream>
#include <vector>
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
void display(student x[], int y)
  {
    for(int i = 0; i < y; i++)
    {
      int s = 0;
      for(int j = 0; j < y-i-1; j++)
      {
        if(x[j].total_scores < x[j+1].total_scores)
        {
          swap(x[j], x[j+1]);
          s = 1;
        }
      }
    }
    for(int i = 0; i < y; i++)
    {
      cout << "student id: " << x[i].id << "name: " << x[i].name<< " total score is: " << x[i].score1 + x[i].score2 + x[i].score3 << endl;
    }
  }

  int binarysearch(student x[], int y, int id)
  {
    int first = 0;
    int last = x-1;
    while(first<=last)
    {
      int mid = (first+last)/2;
      if(x[mid].id == id)
      {
        return mid;
      }
      else if(x[mid].id >id)
      {
        first = mid-1;
      }
      else{
        last = mid - 1;
      }
    }
    return -1;
  }
};