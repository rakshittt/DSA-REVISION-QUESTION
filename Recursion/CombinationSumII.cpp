#include <bits/stdc++.h>
using namespace std;

void findCombinationII(int ind , int target , int arr[] , vector <vector<int>> &ans, vector <int> &ds, int n){

    if(target ==0){
        ans.push_back(ds);
        return ;
    }

    for(int i= ind ;i < n ; i++){
        if(i > ind && arr[i]==arr[i-1])continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        findCombinationII(i+1 , target -arr[i] ,arr ,ans ,ds, n);
        ds.pop_back();
    }
}

int main(){

    // Sorted Array
    int arr[5]= {1 , 1 , 1 , 2 ,2 };
    // Is Arr/ Vector ko sort krna haii

    int n=4;
    int target;
    cin >>target ;
    vector <int> ds;
    // Vector stores the Vector 
    vector <vector <int> > ans ;

    findCombinationII(0, target , arr , ans , ds ,n );
     for( auto list : ans ){
        for( auto ele :list ){
            cout << ele <<" ";
        }
    }
 
    cout << endl;
    return 0 ;
}