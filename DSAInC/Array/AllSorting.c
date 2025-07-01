#include <stdio.h>

// Function to print array
void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}


void BubbleSort(int arr[], int n) {
   int pass;
   for (pass = 0; pass< n-1; pass++)
   {
     for (int i = 0; i < n-1-pass; i++)
     {
      if (arr[i]>arr[i+1])
      {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    
     } 
   }
    
}

// Insertion Sort (Ascending)
void InsertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort (Ascending)
void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Merge function for Merge Sort
void Merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }
}

// Merge Sort (Recursive)
void MergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }
}

// Utility function to copy arrays
void CopyArray(int dest[], int src[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

// Main function
int main() {
    int original[10] = {10, 30, 40, 20, 50, 60, 80, 100, 90, 70};
    int arr[10];
    int size = 10;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Merge Sort\n5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        // Reset array before each sort
        CopyArray(arr, original, size);

        printf("Original Array:");
        PrintArray(arr, size);

        switch (choice) {
            case 1:
                BubbleSort(arr, size);
                printf("Array after Bubble Sort:");
                PrintArray(arr, size);
                break;
            case 2:
                InsertionSort(arr, size);
                printf("Array after Insertion Sort:");
                PrintArray(arr, size);
                break;
            case 3:
                SelectionSort(arr, size);
                printf("Array after Selection Sort:");
                PrintArray(arr, size);
                break;
            case 4:
                MergeSort(arr, 0, size - 1);
                printf("Array after Merge Sort:");
                PrintArray(arr, size);
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid input\n");
        }
    } while (choice != 5);

    return 0;
}
