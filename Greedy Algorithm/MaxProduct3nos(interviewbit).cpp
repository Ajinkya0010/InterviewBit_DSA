#include <bits/stdc++.h>

int Solution::maxp3(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
		
    if(A[0]*A[1]*A[n-1] > A[n-1]*A[n-2]*A[n-3]){
        return A[0]*A[1]*A[n-1];
    }

    return A[n-1]*A[n-2]*A[n-3];
    
}
