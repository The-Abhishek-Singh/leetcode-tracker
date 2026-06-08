class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        set<int> s;

        for(int i=0;i<nums1.size();i++){

            int j=0;

            while(j<nums2.size()){

                if(nums1[i]==nums2[j]){

                    s.insert(nums1[i]);
                    
                }
                j++;
            }




        }

        vector<int> ans(s.begin(),s.end());


        return ans;
        
    }
};     
