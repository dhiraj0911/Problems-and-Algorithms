class Solution {
public:
    string pushDominoes(string dominoes) {
        string tmp = "L" + dominoes + "R";
        int n = tmp.size();
        int l, r;
        for(int i=0; i<n-1; i++){
           if(tmp[i] != '.')
               l = i;
           else {
               r = i+1;
               while(tmp[r] == '.')
                   r++;
               for(int j=l+1; j<r; j++){
                   if(tmp[l] == tmp[r])
                       tmp[j] = tmp[l];
                   else if(tmp[l] == 'R' && tmp[r] == 'L'){
                       if(j-l<r-j)
                           tmp[j] = 'R';
                       else if(j-l>r-j)
                           tmp[j] = 'L';
                   }
               }
               i=l=r;
           }
        }
        return tmp.substr(1, n-2);
    }
};