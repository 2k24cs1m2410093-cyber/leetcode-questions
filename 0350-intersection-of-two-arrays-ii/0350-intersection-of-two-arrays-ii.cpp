class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int>ans;
        for(int num: nums1){
            freq[num]++;//full loop has making the freq of num1
        }
            for(int num : nums2){//checking elements of num2
                if(freq[num]>0){
                   ans.push_back(num);
                   freq[num]--; 
                }
            }
        return ans;
    }
};