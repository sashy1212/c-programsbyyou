 // C program to implement iterative Binary Search using recursion 
#include <stdio.h> 

int BiSearch(int arr[], int l, int len, int x) 
{ 
	if (len >= l) 
   { 
        int mid = l + (len - l)/2; 
        
  
        // If the element is present at the middle position 
        if (arr[mid] == x)  return mid; 
  
        // If element is smaller than middle element, then searching will be done in left subarray
        if (arr[mid] > x) return BiSearch(arr, l, mid-1, x); 
  
        // Else searching will be done in right subarray 
        return BiSearch(arr, mid+1, len, x); 
   } 
  
   
   return -1; 
} 

void main() 
{ 
	int n,i;
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	int arr[n];
	//"asking user to input in Ascending Order"
	printf("Enter the elements of array in ascending order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int x;
	printf("enter the element to be searched\n");
	scanf("%d",&x);
	//calling function BiSearch
	int result = BiSearch(arr, 0, n - 1, x); 
	(result == -1) ? printf("Element is not present"
							" in array") 
				: printf("Element is present at "
							"index %d", 
							result); 
	
} 

