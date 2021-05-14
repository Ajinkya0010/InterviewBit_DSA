int Solution::isPalindrome(int a) {
    string s=to_string(a);
    string s1="";
    for(int i=s.size()-1;i>=0;i--){
       s1+=s[i];
    }
    if(s1==s){
       return 1;
    }
    else {return 0;}
 
}
