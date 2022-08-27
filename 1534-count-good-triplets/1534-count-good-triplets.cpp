class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        // if(arr.size() < 3)
        //     return 1;
        for(int i = 0; i < arr.size() - 2; i++){
            for(int j = i + 1; j < arr.size() - 1; j++){
                for(int k = j + 1; k < arr.size(); k++){
                    int a1 = getMod(arr[i], arr[j]);
                    int b1 = getMod(arr[j], arr[k]);
                    int c1 = getMod(arr[i], arr[k]);
                    if(a1 <= a && b1 <= b && c1 <= c)
                        count++;
                }
            }
        }
        return count;
    }
    
    int getMod(int a, int b){
        if(a > b)
            return a - b;
        else
            return b - a;
    }
};