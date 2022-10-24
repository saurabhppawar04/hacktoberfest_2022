#include <stdio.h>

int binarySearch(int arr[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (arr[mid] == x)
      return mid;

    // Search the left half
    if (arr[mid] > x)
      return binarySearch(arr, x, low, mid - 1);

    // Search the right half
    return binarySearch(arr, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 6, 9, 12, 15, 21};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  int final = binarySearch(array, x, 0, n - 1);
  if (final == -1)
    printf("Not found");
  else
    printf("Element founded at index= %d", final);
}
