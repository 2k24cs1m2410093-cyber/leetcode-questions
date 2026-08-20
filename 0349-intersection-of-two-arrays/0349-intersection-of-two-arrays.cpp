class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(),nums1.end());
        vector<int>ans;
        for(int num : nums2){//+to checkfor the number
            if(st.count(num)){//to check number in the set
                ans.push_back(num);
                st.erase(num);//to remove dublicate
            }
        } 
        return ans;       
    }
};