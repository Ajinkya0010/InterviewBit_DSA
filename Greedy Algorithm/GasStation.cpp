#include <bits/stdc++.h>

int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int max_fill=A[0],cost_fill=B[0],m=0,i=0,n=A.size();

    if(accumulate(A.begin(), A.end(), 0) < accumulate(B.begin(), B.end(), 0)){
        return -1;
    } 
    
    
    while(m<n){
        if(max_fill>=cost_fill){
            ++m;
            if(i==n-1){i=0;}
            else{++i;}
            max_fill+=A[i];
            cost_fill+=B[i];
            //cout<<"1 "; 
        }
        else{
            m=0;if(i==n-1){i=0;}
            else{++i;}
            max_fill=A[i];
            cost_fill=B[i];
            //cout<<"0 ";
        }
    }
    return i;
    
}
