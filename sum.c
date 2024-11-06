#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
               
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
     printf("enter the element : \n");   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arrBubble[n];
    for (int i = 0; i < n; i++) 
   arrBubble[i] = arr[i];

    bubbleSort(arrBubble, n);
    printf("Sorted array using Bubble Sort: ");
    print(arrBubble, n);
    int arrSelection[n];
    for (int i = 0; i < n; i++) 
    arrSelection[i] = arr[i];
    selectionSort(arrSelection, n);
    printf("Sorted array using Selection Sort: ");
    print(arrSelection, n);

    return 0;
}
