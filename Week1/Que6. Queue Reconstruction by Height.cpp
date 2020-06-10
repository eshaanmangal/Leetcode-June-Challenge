class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
       
        
        for(int i=0;i<people.size();i++){
            //swap(people[i][0],people[i][1]);
        }
        
        sort(people.begin(),people.end(), [](vector<int>&a,vector<int>&b){
            return (a[0]>b[0] || ( a[0]==b[0] && a[1]<b[1]));
        });
            
        vector<vector<int> > vec;
        
        for(int i=0;i<people.size();i++){
            auto p = people[i];
            vec.insert(vec.begin()+p[1],p);
        }
        
        
        return vec;
    }
};