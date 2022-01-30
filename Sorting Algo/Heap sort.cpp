// C++ program for implementation of Heap Sort 
#include <iostream>
using namespace std;

void
heapify (int arr[], int n, int i)
{
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;

  // If left child is larger than root 
  if (l < n && arr[l] > arr[largest])
    largest = l;

  // If right child is larger than largest so far 
  if (r < n && arr[r] > arr[largest])
    largest = r;

  // If largest is not root 
  if (largest != i)
    {
      swap (arr[i], arr[largest]);

      // Recursively heapify the affected sub-tree 
      heapify (arr, n, largest);
    }
}


void
heapSort (int arr[], int n)
{

  for (int i = n / 2 - 1; i >= 0; i--)
    heapify (arr, n, i);

  for (int i = n - 1; i >= 0; i--)
    {
      swap (arr[0], arr[i]);
      heapify (arr, i, 0);
    }
}

/* A utility function to print array of size n */
void
printArray (int arr[], int n)
{
  for (int i = 0; i < n; ++i)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver program 
int
main ()
{
  int n;
  cout << "enter the size of array: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++)
    {
      arr[i] = 1 + (rand () % 10000);
    }
  clock_t a = clock ();
  heapSort (arr, n);
  clock_t b = clock ();
  cout << "Sorted array is:";
  printArray (arr, n);
  cout << "The time of execution is: " << (float) (b -
						   a) /
    CLOCKS_PER_SEC << endl;
  return 0;
}


