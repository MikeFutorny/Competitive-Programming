#include <vector>
#include <queue>
class Solution {
public:
    int jump(vector<int>& nums) {
        int i, j;
        vector <int> visited(nums.size(), 100000);
        visited[0]=0;

        for(i=0;i<nums.size();i++){
            for(j=i+1;j<=i+nums[i];j++){
                if(j>=nums.size()){
                    break;
                }
                if(visited[i]+1 < visited[j]){
                    visited[j]=visited[i]+1;
                }
            }
        }
        for(i=0;i<visited.size();i++){
            cout << visited[i] << endl;
        }
        return visited[visited.size()-1];
    }

};
