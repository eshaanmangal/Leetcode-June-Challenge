class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int totalCosttoCityA = 0;
        for(int i=0;i<costs.size();i++){
            totalCosttoCityA += costs[i][0];
        }
        
        int arr[costs.size()];
        for(int i=0;i<costs.size();i++){
            arr[i] = costs[i][1] - costs[i][0];
        }
        
        sort(arr,arr+costs.size());
        
        
        for(int i=0;i<costs.size()/2;i++){
            totalCosttoCityA += arr[i];
        }
        
        return totalCosttoCityA;
    }
};