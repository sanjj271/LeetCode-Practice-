class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        map<int,int>mp;
        vector<int>res;
        int count = k;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            pq.push({i.second , i.first});
            cout<<i.second<<endl;
        }
        int x;
        int y;
        while(!pq.empty() && count > 0){
            int x = pq.top().first;
            int y = pq.top().second;
            res.push_back(y);
            pq.pop();
            count--;
        }
        return res;




        
    }
};