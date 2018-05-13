//Soham 106117094
//Roy 106117094
// Sorting Algorithm
// C++ program for Bubble sort
#include <iostream>
using namespace std;
void Swap(int *a, int *b)
{
    int temp;
     temp = *a;
    *a = *b;
    *b = temp;
}
void Bubblesort(int a[], int n)
{
   for (int i = 0; i < n-1; i++)        
       for (int j = 0; j < n-i-1; j++) 
           if (a[j] > a[j+1])
              Swap(&a[j], &a[j+1]);
}
void Printarray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    Bubblesort(a, n);
    cout<<"Sorted array"<<endl;
    Printarray(a, n);
    return 0;
}
