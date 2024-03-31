/*
Roll Number: 102215255
Name: Diya Goyal
Description: 1Given array A[] with sliding window of size w which is moving from the very left of the array to the very right. Assume that we can only see the w numbers in the window. Each time the sliding window moves rightwards by one position. For example: The array is [1 3 -1 -3 5 3 6 7], and w is 3.
Acknowledgement: GeeksforGeeks
*/
#include <bits/stdc++.h>
using namespace std;
void printKMax(int arr[], int N, int K)
{
    int j, max;
 
    for (int i = 0; i <= N - K; i++) {
        max = arr[i];
 
        for (j = 1; j < K; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        cout << "Max:" << max <<endl;
    }
} 
int main()
{
    int arr[] = { 1,3,-1,-3,5,3,6,7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 3;
    printKMax(arr, N, K);
    return 0;
}
