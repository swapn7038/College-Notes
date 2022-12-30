#include <iostream>
#include <map>

using namespace std;

// Function to sort the first array A1 such that the relative positions
// of the elements are the same as the elements in the second array A2
void sortArray(int A1[], int A2[], int N, int M)
{
    // create a map to store the indices of the elements in A2 as the key
    // and the elements in A1 as the value
    map<int, int> indexMap;
    for (int i = 0; i < M; i++)
        indexMap[A2[i]] = A1[i];

    // create a new array to store the sorted elements from A1
    int A3[N];

    // iterate through the elements in A2 and use the indices as the keys
    // to retrieve the corresponding elements in A1 from the map
    for (int i = 0; i < M; i++)
        A3[i] = indexMap[A2[i]];

    // copy the elements from the new array back into A1
    for (int i = 0; i < N; i++)
        A1[i] = A3[i];
}

int main()
{
    // test the sortArray function
    int A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int A2[] = {2, 1, 8, 3};
    int N = sizeof(A1) / sizeof(A1[0]);
    int M = sizeof(A2) / sizeof(A2[0]);

    sortArray(A1, A2, N, M);

    for (int i = 0; i < N; i++)
        cout << A1[i] << " ";

    return 0;
}
