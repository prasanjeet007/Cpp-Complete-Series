#include <iostream>
#include <set>
using namespace std;
int main()
{
    int A[] = {3, 5, 6, 10, 14, 17, 20, 25, 30};
    int B[] = {2, 4, 7, 9, 12, 14, 19, 23, 29};
    int C[] = {9, 14, 15, 18, 21, 26, 27, 31};
    set<int> st;
    int i = 0, j = 0, k = 0;
    int size1 = sizeof(A) / sizeof(int);
    int size2 = sizeof(B) / sizeof(int);
    int size3 = sizeof(C) / sizeof(int);
    while ((i < size1) && (j < size2) && (k < size3))
    {
        if (A[i] == B[j] == C[k])
        {
            st.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (int val : st)
    {
        cout << "Value is " << val << endl;
    }
    return 0;
}