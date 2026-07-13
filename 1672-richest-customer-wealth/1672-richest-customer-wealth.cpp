class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int totalWealth = 0;
        int maxWealth = 0;

        for(int i=0; i<accounts.size(); i++){
            totalWealth = 0;
            for(int j=0; j<accounts[i].size(); j++){
                totalWealth += accounts[i][j];
            }
            if(totalWealth > maxWealth){
                maxWealth = totalWealth;
            }
    }
    return maxWealth;
    }
};