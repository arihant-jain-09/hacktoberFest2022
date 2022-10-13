class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices.size(),mn=prices[0],mx=0;
        for(int i=0;i<l;i++){
            if(prices[i]<mn){
                mn=prices[i];
            }
            else{
                mx=max(prices[i]-mn,mx);
            }
        }
        return mx;
    }
};