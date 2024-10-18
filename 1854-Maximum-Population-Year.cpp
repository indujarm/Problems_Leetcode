class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n = logs.size();
        map<int,int> freq;
        for(int i =0;i<n;i++)
        {
            freq[logs[i][0]]++;
            freq[logs[i][1]]--;
        }
        int sum=0;
        int maxP = INT_MIN;
        int index=0;
        for(auto i : freq)
        {
            sum+=i.second;

            if(sum>maxP)
            {
                maxP = sum;
                index=i.first;
            }
        }
    return index;
        
    }
};