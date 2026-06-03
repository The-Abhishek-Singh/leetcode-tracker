class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
                int j=0;
            if(i<nums.size()-1){

                j = i+1;
            }
         
          if(nums[0]!=0){
                    return 0;
                }else if(nums[j] != nums[i]+1){

                return nums[i]+1;
            }else{
                if(i==nums.size()-1){

                    return nums[i]+1;
                }
            }



        }
           return 0;
    }
 
};
