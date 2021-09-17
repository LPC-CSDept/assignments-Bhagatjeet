#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int>, int );
void printVector(vector<string>, int );

int main()
{
	const int N = 5;
	vector<int> ID = {10005, 10004, 10003, 10002, 10001};
	vector<string> Names = {"John", "Greg", "Saul", "Yana", "Lee"};

    printVector(ID, 5);
	printVector(Names, 5);

	for(int i=0; i<ID.size(); i++)
{
	for(int j=0; j<ID.size()-1; j++)
		if ( ID[j] > ID[j+1]){
			swap(ID[j], ID[j+1]);
		
		}
	}
	
	printVector(ID, 5);
	printVector(Names, 5);

int minval, minid;
    string change;
    for(int i=0; i<N; i++)
    {
        minval = ID[i];
        minid = i;
        for(int j=i+1; j<N; j++)
        {
            if ( minval > ID[j] )
            {
                minval = ID[j];
                minid = j;
            }
        }
        ID[minid] = ID[i];
        ID[i] = minval;

        change = Names[minid];
        Names[minid] = Names[i];
        Names[i] = change;
    }
}


void printVector(vector<int> ID, int N)
{
    for(int i=0; i<N; i++)
        cout << ID[i] << "\t" ;
    cout << endl;
}
void printVector(vector<string> Names, int N)
{
    for(int i=0; i<N; i++)
        cout << Names[i] << "\t" ;
    cout << endl;
}