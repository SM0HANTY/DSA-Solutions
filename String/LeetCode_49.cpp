//Group Anagrams

/*Given an array of strings strs, group the anagrams together. You can return the answer in any order.*/


class Solution {
private:
    bool isAnagram(string& s1, string& s2) {
        if (s1.length() != s2.length()) return false;
        vector<int> count(26, 0);
        for(char c : s1) count[c - 'a']++;
        for(char c : s2) count[c - 'a']--;
        for(int i : count) {
            if (i != 0) return false;
        }
        return true;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<bool>visited(strs.size(), false);
        for(int i=0;i<strs.size();i++) {
            if(visited[i]) continue;
            vector<string>group;
            group.push_back(strs[i]);
            visited[i] = true;
            for (int j=i+1;j<strs.size();j++) {
                if(!visited[j] && isAnagram(strs[i],strs[j])) {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            ans.push_back(group);
        }
        return ans;
    }
};
