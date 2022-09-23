class Solution {
public:
    int concatenatedBinary(int n) {
//         string binary = "";
//         int mod = 1e9 + 7;
//         queue<string> q;
//         q.push("1");
//     	while (n--) {
//             string s1 = q.front();
//             q.pop();
//             binary += s1;
//     		string s2 = s1;
//         	q.push(s1.append("0"));
//             q.push(s2.append("1"));
//     	}

//         int num = stol(binary, nullptr, 2);
//         // int num = stoi(binary);
//         long long int dec_value = 0;
//         int base = 1;

//         long long temp = num;
//         while (temp) {
//             int last_digit = temp % 10;
//             temp = temp / 10;

//             dec_value += last_digit * base;

//             base = base * 2;
//         }

//         return dec_value % mod;
        // return num;
        long long mod = 1e9+7, ans = 0, len = 0 ; 
        for(int i = 1 ; i <= n ; i++) {
            if ((i & (i-1)) == 0)
                len++ ; 
            ans = (ans << len) % mod ; 
            ans += i%mod ; 
        }
        return ans ; 
    }
};