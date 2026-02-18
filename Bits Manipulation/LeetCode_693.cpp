//Binary Number with Alternating Bits

/*Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.*/



class Solution {
public:
    bool hasAlternatingBits(int n) {
     string bin=bitset<32>(n).to_string();
     bin=bin.substr(bin.find('1'));
     int m=bin.length();
     for(int i=0;i<m-1;i++){
        if(bin[i]==bin[i+1]) return false;
     }
     return true;
      
    }
};
