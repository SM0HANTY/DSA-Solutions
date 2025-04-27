//Check Permutation

/*For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.

Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.*/

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int in1[26]={0};

    int in2[26]={0};
    int i=0;
    int index=0;
    while(input1[i]!='\0'){
        index=input1[i]-'a';
        in1[index]++;
        i++;
    }
    i=0;
    while(input2[i]!='\0'){
        index=input2[i]-'a';
        in2[index]++;
        i++;
    }
    for(int i=0;i<26;i++){
        if(in1[i]!=in2[i]){
            return false;
        }
    }
    return true;
}
