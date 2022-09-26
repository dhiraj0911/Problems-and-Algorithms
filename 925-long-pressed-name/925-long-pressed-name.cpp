class Solution {
public:
    bool isLongPressedName(string name, string typed) {
//         int n = name.length();
//         int m = typed.length();
//         int i = 0, j = 0;
//         if(name[i] != name[j])
//             return true;
//         vector<bool> test(n, 0);
//         while(i < n) {
//             while(j < m) {
//                 if(name[i] == typed[j]) {
//                     j++;
//                     if(test[i] == false)
//                         test[i] = true;
//                 }
//                 else
//                     i++;
                
//             }
//         }
//         for(int i = 0; i < test.size(); i++) {
//             if(test[i] == false)
//                 return false;
//         }
//         return true;
        int index = 0, i = 0;
        if(name[index] != typed[i])
            return 0;
        while(i < typed.size()) {
            if(name[index] == typed[i]) {
                index++;
                i++;
            }
            else if(name[index - 1] == typed[i])
                i++;
            else
                return 0;
        }
        return i == typed.size() && index == name.size();
    }
};