class Solution {
public:
bool validpali(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }else{                //this function would either return true or false after checking 
            i++;
            j--;
        }
    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return validpali(s,i+1,j) || validpali(s,i,j-1);  // return true if any either function is true else it would return false
            }else{
                i++;
                j--;           //this while loop will run until we find the elemnt to delete after finding it during function call one 
            }                  //element will be deleted and no more deletion would happen as remaining string will be checked in the function only
        }
        return true;
    }
};
