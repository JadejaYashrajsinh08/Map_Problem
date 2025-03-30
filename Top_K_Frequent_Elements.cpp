class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int,int> m;
            for(int ele : nums)m[ele]++;
            vector<int> ans;
            
            vector<pair<int,int>> a;
            for(auto x:m){
                a.push_back({x.second,x.first});
            }
            sort(a.begin(),a.end());
            reverse(a.begin(),a.end());
    
            for(int i=0;i<k;i++){
                ans.push_back(a[i].second);
            }
            return ans;
        }
    };