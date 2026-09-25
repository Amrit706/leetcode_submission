class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int cpy = nums[i];
            int sum = 0;
            while(cpy > 0){
                int rem = cpy % 10;
                sum += rem;
                cpy /= 10;
            }
            if(sum == i){
                return i;
                break;
            }
        }
        return -1;
    }
};