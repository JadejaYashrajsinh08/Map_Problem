class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            unordered_map<int,int> mp;
            for(int i=0;i<nums.size();i++)mp[nums[i]]=1;
            int count=0;
            
            for(auto ele : mp){
                if(mp.find(ele.first-1)==mp.end()){
                    int length = 1;
                    int num = ele.first;
    
                    while(mp.find(num+1)!=mp.end()){
                        num++;
                        length++;
                    }
                    count = max(count,length);
                }
            }
            return count;
        }
    };