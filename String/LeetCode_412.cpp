//Fizz Buzz

/*Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.*/


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string a="Fizz";
        string b="Buzz";
        string c="FizzBuzz";
        vector<string>str;
        for(int i=1;i<=n;i++){
            if(i%15==0){
                str.push_back(c);
            }else if(i%3==0){
                str.push_back(a);
            }else if(i%5==0){
                str.push_back(b);
            }else{
                str.push_back(to_string(i));
            }
        }
        return str;
    }
};
