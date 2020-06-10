class Solution {
public:
    
    vector <double> probabilitiesArr;
    
    Solution(vector<int>& w) {
        
        probabilitiesArr.resize(w.size());
        int totalWeight = 0;
        totalWeight = accumulate(w.begin(),w.end(),totalWeight);
        for(int i=1;i<w.size();i++){
            w[i] += w[i-1];
        }
        for(int i=1;i<w.size();i++){
            probabilitiesArr[i] = totalWeight/w[i];
        }
    }
    
    int pickIndex() {
        random_device rd;
        std::mt19937 mt(rd());
        std::uniform_real_distribution<double> dist(0.0, 1.0);
        double prob = dist(mt);
        auto it = upper_bound(probabilitiesArr.begin(), probabilitiesArr.end(), prob);
        return it - probabilitiesArr.begin();
            
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */