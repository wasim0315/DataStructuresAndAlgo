//1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,wealth=0;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
                sum += accounts[i][j];
            }
            if(sum>wealth)
            {
                wealth=sum;
            }
            sum=0;
        }
        return wealth;
    }
};


