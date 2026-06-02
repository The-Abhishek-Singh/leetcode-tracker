class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

     for(int i=0;i<nums.size()-1;i++){


        int n = 0;
        int j = i+1 ;
        while(n<k){
                
            if((nums[i]==nums[j]) && (j-i<=k) && j <= nums.size()-1 ){

                return true;



            }else{
                if(j <= nums.size()-2){
                      j++;
                }
              
                n++;
            }


        }

        

     }

     return false;

        
    }
};
