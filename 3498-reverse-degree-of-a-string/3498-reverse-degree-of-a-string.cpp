class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int rev_degree = 0;

        for(int i = 0; i < n; i++){
            int temp = 'z' - s[i] + 1;
            rev_degree += temp * (i+1);
        }
        return rev_degree;
    }
};