class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp1;
        for(char ch : s){
            mp1[ch]++;
        }
          vector<pair<char, int>> v;

        for (auto it : mp1) {
            v.push_back({it.first, it.second});
        }

       
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        
        string ans = "";

        for (auto p : v) {
            for (int i = 0; i < p.second; i++) {
                ans += p.first;
            }
        }

        return ans;
    }
};