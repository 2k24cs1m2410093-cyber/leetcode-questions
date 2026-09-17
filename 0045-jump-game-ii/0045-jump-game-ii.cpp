class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int CurrentEnd = 0;
        int farthest = 0;
        for(int i = 0; i < nums.size()-1; i++){
            farthest =  max(farthest, i + nums[i]);
            if(i ==  CurrentEnd){
                jumps++;
                CurrentEnd = farthest;
            }
        }
        return jumps;
    }
};