class Solution {
public:
    string reverseWords(string s) {


        reverse(s.begin(),s.end());
        string final;

        for(int i=0;i<s.length();i++){

            string word = "";
            

            while(s[i]>' '){

                word += s[i];
                i++;

            }

            reverse(word.begin(),word.end());

            if(word.length()>0){

                final += " "+word;

            }

      



        }
        
        return final.substr(1);
    }
};
