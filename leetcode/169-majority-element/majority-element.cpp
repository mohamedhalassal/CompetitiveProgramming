class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int mx=0,tec=-1;
        for(auto [key,val]:mp){
            if(tec<=val){
                tec=val;
                mx=key;
            }
        }
        return mx;
    }
};