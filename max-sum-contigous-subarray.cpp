int Solution::maxSubArray(const vector<int> &A) {
    
    int curr_max=A[0];
    int max_for_now=A[0];
    
    for(int i=1;i<A.size();++i){
        curr_max=max(A[i],curr_max+A[i]);
        max_for_now=max(curr_max,max_for_now);
    }
    
    return max_for_now;
}
