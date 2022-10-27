# Insertion sort-->Python

def insertionSort(arr):

    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
       
        # For descending order --> key<array[j] to key>array[j].        
        while j >= 0 and i < arr[j]:
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key


d = [9, 5, 1, 4, 3]
insertionSort(d)
print('Sorted Array= ')
print(d)
