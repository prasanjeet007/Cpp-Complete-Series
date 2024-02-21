#include <iostream>
#include <set>
using namespace std;
int main()
{
    int A[] = {30, 29, 28, 27, 26, 25};
    int B[] = {31, 29, 28, 24, 21};
    int C[] = {29, 31, 29, 28, 21};
    set<int> st;
    int i = 0;
    int j = 0;
    int k = 0;
    int sizea = sizeof(A) / sizeof(int);
    int sizeb = sizeof(B) / sizeof(int);
    int sizec = sizeof(C) / sizeof(int);
    while (i < sizea && j < sizeb && k < sizec)
    {
        if (A[i] == B[j] && B[j] == C[k] && C[k] == A[i])
        {
            st.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] > B[j])
        {
            i++;
        }
        else if (B[j] > C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto val : st)
    {
        cout << val << " ";
    }
    return 0;
}