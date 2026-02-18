//Reverse Bits


/*Reverse bits of a given 32 bits signed integer.*/



class Solution {
public:
    int reverseBits(int n) {
        string bin=bitset<32>(n).to_string();
        string rev="";
        for(int i=bin.length()-1;i>=0;i--){
            rev+=bin[i];
        }
        int ans=stol(rev,nullptr,2);
        return ans;
    }
};
