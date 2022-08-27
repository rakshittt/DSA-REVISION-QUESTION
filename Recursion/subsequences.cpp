#include <bits/stdc++.h>
using namespace std;

void Subsequences(int ind, vector<int> &ds, int arr[], int n)
{

    if (ind == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        // Similar to
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }
        // The auto keyword specifies that the type of the variable that is being declared will be automatically deducted 
        // from its initializer. So here it takes the references of a[i] and works instead of a[i] as it.
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // Take the particular index into the subsequence
    ds.push_back(arr[ind]);
    Subsequences(ind + 1, ds, arr, n);
    ds.pop_back();

    // Not take / not pick index into the subsequences
    Subsequences(ind + 1, ds, arr, n);
}

int main()
{

    int n;
    cin >> n;
    int arr[1000];
    vector<int> ds;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };

    Subsequences(0, ds, arr, n);

    return 0;
}