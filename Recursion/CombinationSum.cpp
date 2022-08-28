#include <bits/stdc++.h>
using namespace std;

// Combination sum Leetcode

void findCombination(int ind , int target , int arr[], vector <vector <int> > &ans , vector <int> &ds ,int n ){

    if ( ind == n){
        if(target ==0){
           ans.push_back(ds); 
        }
        return ;
    }

    // Pick 
    if(arr[ind]<= target ){

        ds.push_back(arr[ind]);
        findCombination(ind, target -arr[ind] , arr, ans, ds, n);
        ds.pop_back();
    }

    //Not Pick
    findCombination(ind+1, target , arr, ans, ds, n);


}



int main(){
    int arr[]= {2 ,3, 6 ,7 };
    int n=4;
    int target;
    cin >>target ;
    vector <int> ds;
    // Vector stores the Vector 
    vector <vector <int> > ans ;

    findCombination(0, target , arr , ans , ds ,n);
    // Print of vector < vector <int> > ans is remaining;
    for( auto list : ans ){
        for( auto ele :list ){
            cout << ele <<" ";
        }
    }
 
    cout << endl;

}