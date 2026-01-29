class Solution {
public:
    string largestOddNumber(string num) {
        int N = num.length();
        for(int i = N - 1; i >= 0 ; --i){
            int j = num[i] - '0';
            if(j % 2 == 1){
               return num.substr(0 , i + 1);
            }
        }
        return "";
    }
};