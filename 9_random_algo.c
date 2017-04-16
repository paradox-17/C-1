quick sort
Worst case performance - n^2 - already sorted
best case performance - n log(n)

why n log(n)
     while dividing the array at each split we make n comparisons nd the length of tree is log(n)

why n^2
     when it is already sorted then pivot is compared with rest n-1 elements then n-2 then n-3 and so on till 1
   

Time complexity for quick sort will lie between O(n logn) and O(n^2)
To keep it more closer to n log n we will implement the code below

sort(int arr[], int left, int right)
{
  if(left < right)
  {
    int pivot = choose(left, right);
    // baki same
  }
}

int choose(int left, int right)
{
  int r = rand() % (right - left + 1);
  return left + r;
}

Quick sort Theorem
  For any array A of length n,
  running time of your algorithm is O(n log(n)) irrespective of quality of input
  if you choose random pivot

  omega (ohm vala) is called Sample Space ie set of all the possible outcomes
  
