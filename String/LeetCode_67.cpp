/*Given two binary strings a and b, return their sum as a binary string.

*/


class Solution {
public:
    string addBinary(string a, string b) {
      
        int n=a.size();
        int m=b.size();

        string output;

        char carry='0';

        
        int i=n-1;
        int j=m-1;
        while(i>=0&&j>=0){
            if(a[i]=='0'&&b[j]=='0'){
                output.push_back(carry);
                carry='0';
            }
            else if(a[i]=='1'&&b[j]=='1'){
                output.push_back(carry);
                carry='1';
            }
            else if((a[i]=='0'&&b[j]=='1')||(a[i]=='1'&&b[j]=='0')){
                if(carry=='0'){
                    output.push_back('1');
                }
                else{
                    output.push_back('0');
                }
            }

            i--;
            j--;
        }

        while(i>=0){
            if(a[i]=='0'&&carry=='0'){
                output.push_back('0');
            }
            else if((a[i]=='0'&&carry=='1')||(a[i]=='1'&&carry=='0')){
                output.push_back('1');
                carry='0';
            }
            else if(a[i]=='1'&&carry=='1'){
                output.push_back('0');
                carry='1';
            }
            i--;
        }
        while(j>=0){
            if(b[j]=='0'&&carry=='0'){
                output.push_back('0');
            }
            else if((b[j]=='0'&&carry=='1')||(b[j]=='1'&&carry=='0')){
                output.push_back('1');
                carry='0';
            }
            else if(b[j]=='1'&&carry=='1'){
                output.push_back('0');
                carry='1';
            }
            j--;
        }
        if(carry=='1'){
            output.push_back(carry);
        }

        reverse(output.begin(),output.end());
        return output;
    }
};
