bool is_palindrome(string s){
    string m=s;
    reverse(m.begin(),m.end());
    return m==s;
}

int Solution::solve(string A) {
    int start=0;int end=A.size()-1;
    int mid=(start+end)/2;
    for(;start<=mid;++start){
        if(A[start]==A[end]){
            end--;
        }
        else if(A[start+1]==A[end]){
            A.erase(start,1);
            break;
        }
        else if(A[start]==A[end-1]){
            A.erase(end,1);
            break;
        }
    }
    
    if (is_palindrome(A)){
        return 1;
    }
    return 0;

}