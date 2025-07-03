//Remove k Digits

/*Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.*/


class Solution {
public:
    string removeKdigits(string num, int k) {
        int c = 0;
        if (num.size() == 1 && k == 1) {
            return "0";
        }
        for (int i = 1; i < num.size(); i++) {
            if (num[i - 1] > num[i] && c<k) {
                num.erase(i - 1, 1);
                c++;
                i = 0; 
            }
        }
        while (c < k && !num.empty()) {
            num.pop_back();
            c++;
        }
        while (num.size() > 1 && num[0] == '0') {
            num.erase(0, 1);
        }

        if(num.empty()){
            return "0";
        }else{
            return num;
        }
    }
};
