#include<bits/stdc++.h>
using namespace std;

void subsetSum(int ind , int sum , vector < int> &arr ,int n,vector < int> &sumSubset ){
    if(ind == n){
        sumSubset.push_back(sum);
        return;
    }

    // Pick up the Element
    subsetSum(ind+1 , sum+arr[ind], arr, n ,sumSubset);

    // Do not Pick the Element
    subsetSum(ind+1 , sum , arr , n , sumSubset);

};

int main(){
    int n;
    cin>>n;
    vector <int> arr;
    arr= {3,1,2} ;
    vector <int> sumSubset;
    subsetSum(0,0,arr ,n,sumSubset);
    sort(sumSubset.begin(),sumSubset.end());
    for( auto list : sumSubset ){
        
            cout << list <<" ";
    }
    cout << endl;

}