// Problem Statement:
// Print the nodes visible when the binary tree is viewed from the right side.

// Input Format:
// - First line contains integer N
// - Second line contains level-order traversal (-1 indicates NULL)

// Output Format:
// - Print right view nodes

// Example:
// Input:
// 7
// 1 2 3 4 5 -1 6

// Output:
// 1 3 6

// Explanation:
// At each level, the rightmost node is visible from the right view.

#include <stdio.h>

// Function to check Min-Heap property
int isMinHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        // Check left child
        if (left < n && arr[i] > arr[left])
            return 0;   // Not a Min-Heap

        // Check right child
        if (right < n && arr[i] > arr[right])
            return 0;   // Not a Min-Heap
    }
    return 1;   // Valid Min-Heap
}

int main() {
    int n;

    // Input number of nodes
    scanf("%d", &n);

    int arr[n];

    // Input level-order elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check and print result
    if (isMinHeap(arr, n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}