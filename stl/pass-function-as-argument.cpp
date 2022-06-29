#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> vec)
{
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
}

bool compare(int a, int b)
{
    /**
     * @brief compare function
     *
     *  return a < b for ascending order.
     *  return a > b for descending order.
     */
    return a < b;
}

/* pass function as parameter ret_type (&func_name) (arg1, arg2) */
vector<int> bubbleSort(vector<int> vec, bool (&comp)(int a, int b))
{
    int n = vec.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (comp(vec[j], vec[j + 1]))    /* here we use function as parameter */
            {
                swap(vec[j], vec[j + 1]);
            }
        }
    }

    return vec;
}

int main()
{
    vector<int> vec = {7, 1, 5, 2, 7, 8, 1, 3};
    vec = bubbleSort(vec, compare);

    printVector(vec);
}