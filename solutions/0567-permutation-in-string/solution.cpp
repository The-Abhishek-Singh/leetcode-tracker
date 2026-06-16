class Solution {
public:

    bool isfreqsame(int arr1[],int arr2[]){

        for(int i =0; i<26; i++){


            if(arr1[i] != arr2[i]){
                return false;
            }
        }

        return true;


    }


    bool checkInclusion(string s1, string s2) {

        int frearr[26] = {0};

        for(int i =0;i<s1.length();i++){

            frearr[s1[i]-'a']++;
        }

        
        int winlength = s1.length();
        for(int i=0;i<s2.length();i++){

            int start = 0;
            int indx = i;
            int frearr2[26] ={0};

            while(start < winlength && indx < s2.length()){

                frearr2[s2[indx]-'a']++;
                start++;
                indx++;



            }

            if(isfreqsame(frearr,frearr2)){

                return true;
            }




        }


        return false;


        
    }
};
