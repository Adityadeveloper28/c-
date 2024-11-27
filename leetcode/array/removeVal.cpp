#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int removeElement(vector<int>&nums,int val){
            int index=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=val){
                    nums[index++]=nums[i];
                }
            }
            return index;
        }
};
int main(){
    Solution solution;
    vector<int> nums={0,1,2,2,3,0,4,2};
    int val=2;
    int newLength=solution.removeElement(nums,val);
    cout<<"New length: "<<newLength<<endl;
    return 0;
}