#include<algorithm>
class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        vector<int>ans;
        if(arr.size()==0){
            return ans;
        }
        int c_max=0;
        int i=0;
        while(i<(arr.size()-(k-1))){
            int j=i;
            c_max=max(c_max,arr[j]);
            j+=1;
            while(j<i+(k)){
                c_max=max(c_max,arr[j]);
                j++;
            }
            ans.push_back(c_max);
            c_max=0;
            i++;
        }
        return ans; 
    }
};
