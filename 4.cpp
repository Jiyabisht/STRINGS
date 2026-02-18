class Solution {
public:
    bool validWordAbbreviation(string word, string abr) {
        int i=0,j=0;
        while(i<word.length() && j<abr.length()){
            if(isdigit(abr[j])){
                if(abr[j]=='0'){ //0 not allowed
                    return false;
                }
                int n=0;
                while(j<abr.length() && isdigit(abr[j])){
                    n=n*10+(abr[j]-'0');
                    j++;
                }
                i=i+n;
                if (i > word.length())   // important check
                    return false;
            }else{
                if(word[i]!=abr[j]){
                    return false;
                }
            i++;
            j++;
            }
        }
    return i == word.length() && j == abr.length();
    }
};
