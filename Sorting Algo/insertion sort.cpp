#include <bits/stdc++.h> 
#include<time.h>
using namespace std; 
  
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
  
/* Driver code */
int main()  
{  int n;
   cout<<"enter the size of array: ";
   cin>>n;
   int arr[n];
   for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++ )
           {
              arr[i] = 1 + (rand()%10000);
           }
  
    clock_t a=clock();
    insertionSort(arr, n);
    clock_t b=clock();
    printArray(arr, n);
    cout<<"The time of execution is: "<<(float)(b-a)/CLOCKS_PER_SEC<<endl;
  
    return 0;  
}  
  




