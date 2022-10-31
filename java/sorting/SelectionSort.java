// ---------------- Selection Sort ----------------
class SelectionSort
{
	void sort(int arr[])
	{
		int n = arr.length;

		// moving to subarray
		for (int i = 0; i < n-1; i++)
		{
			// Finding the minimum from the array
			int min_idx = i;
			for (int j = i+1; j < n; j++)
				if (arr[j] < arr[min_idx])
					min_idx = j;

			// Swap first element
			int temp = arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = temp;
		}
	}

	// Printing the array
	void printArray(int arr[])
	{
		int n = arr.length;
		for (int i=0; i<n; ++i)
			System.out.print(arr[i]+" ");
		System.out.println();
	}

	// Mian func.
	public static void main(String args[])
	{
		SelectionSort ob = new SelectionSort();
		int arr[] = {55,49,6,39,88};
		ob.sort(arr);
		System.out.println("Sorted array");
		ob.printArray(arr);
	}
}

// output will be as below //
//Sorted array
//6 39 49 55 88 
