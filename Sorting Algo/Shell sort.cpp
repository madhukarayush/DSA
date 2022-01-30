// C++ implementation of Shell Sort 
#include <iostream> 
#include<time.h>
using namespace std; 


int shellSort(int arr[], int n) 
{ 
	for (int gap = n/2; gap > 0; gap /= 2) 
	{ 
		for (int i = gap; i < n; i += 1) 
		{ 
			int temp = arr[i]; 
			int j;			 
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
				arr[j] = arr[j - gap]; 
			arr[j] = temp; 
		} 
	} 
	return 0; 
} 

void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; i++) 
		cout << arr[i] << " "; 
		cout<<endl;
} 

int main() 
{  int n;
   cout<<"enter the size of array: ";
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++ )
           {
              arr[i] = 1 + (rand()%10000);
           }
  
    clock_t a=clock();
	shellSort(arr, n); 
    clock_t b=clock();
	cout << "Array after sorting: \n"; 
	printArray(arr, n); 
    cout<<"The time of execution is: "<<(float)(b-a)/CLOCKS_PER_SEC<<endl;
	return 0; 
} 
 



