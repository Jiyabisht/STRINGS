class Solution {
public:
    bool isStrobogrammatic(string num) {
        int i = 0;
        int j = num.length() - 1;

        while(i <= j) {
            if(num[i] == '0' && num[j] == '0') {
                i++;
                j--;
            }
            else if(num[i] == '1' && num[j] == '1') {
                i++;
                j--;
            }
            else if(num[i] == '8' && num[j] == '8') {
                i++;
                j--;
            }
            else if(num[i] == '6' && num[j] == '9') {
                i++;
                j--;
            }
            else if(num[i] == '9' && num[j] == '6') {
                i++;
                j--;
            }
            else {
                return false;
            }
        }

      //using hashmap
      class Solution {
public:
    bool isStrobogrammatic(string num) {

        unordered_map<char,char> mp;

        mp['0'] = '0';
        mp['1'] = '1';
        mp['8'] = '8';
        mp['6'] = '9';
        mp['9'] = '6';

        int i = 0;
        int j = num.length() - 1;

        while(i <= j) {

            if(mp.find(num[i]) == mp.end())
                return false;

            if(mp[num[i]] != num[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};

        return true;
    }
};
