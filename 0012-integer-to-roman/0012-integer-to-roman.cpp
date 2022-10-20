class Solution {
public:
    string intToRoman(int num) {
        vector<pair< int, string>>  v{{1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"}, {90, "XC"},{100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};
        reverse(v.begin(), v.end());
        string ans = "";
        for(int i = 0; i < v.size(); i++) {
            for(int j = 0; j < (num / v[i].first); j++) {
                ans += v[i].second;
            }
            num %= v[i].first;
        }
        return ans;
    }
};