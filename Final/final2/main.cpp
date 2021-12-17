#include <fstream>
#include "course.cpp"

int partition (Course array[], int , int );
void quickSort(Course array[], int, int );
void swap(int* a, int* b);
void displayArray(Course arr[], int size);

static int x;
static string Inputfile;
const int n = 10;
void operator>>(fstream& inputfile, Course& array){
  int id;
  string name;
  int credit;
  
  ifstream testdata_file("Final/final2/testdata.txt");

 Course course[10];
  int n = 0;
 while(!testdata_file.eof() && n < 10){
  inputfile >> id;
  inputfile >> name;
  inputfile >> credit;

  array.setid(id);
  array.setname(name);
  array.setcredit(credit);
    Course a(id, name, credit); 
  x ++;
 }
  inputfile.close();
}

ostream& operator<<(ostream& y, Course& course)
{
  y << course.getid() << " ";
  y << course.getname() << " ";
  y << course.getcredit() << " ";
  return y;
}
int main()
{
  fstream inputfile;
  Course z[10];
  Inputfile = "Final/final2/textdata.txt";
  for(int i = 0; i < n; i++)
  {
    inputfile >> z[i];
  }
  int j = sizeof(z)/sizeof(z[0]);

  quickSort(z, 0, j-1);
  
  displayArray(z,j);
}

void swap(Course* a, Course* b) 
{ 
    Course c = *a; 
    *a = *b; 
    *b = c; 
} 

// partition array using last element as pivot
int partition (Course array[], int last, int first) 
{ 
    int d = last;
  int pivot = array[first].getid();
  int i;
  for(i = last; i < first; i++)
  {
      if(array[i].getid() < pivot)
      {
          swap(&array[i], &array[d]);
          d++;
      }
  }
  swap(&array[first], &array[d]);
  return d;
} 

void quickSort(Course *array, int last, int first) 
{ 
cout << last << " " << first << endl;
    if (last < first) 
    { 
        //partition the array 
        int pivot = partition(array, last, first); 
   
        //sort the sub arrays 
        quickSort(array, last, pivot - 1);
         
        quickSort(array, pivot + 1, first);
        
    }
} 

void displayArray(Course array[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << array[i] << endl; 
}