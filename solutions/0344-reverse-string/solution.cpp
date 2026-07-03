class Solution {
public:
    void reverseString(vector<char>& s) {

        int l = s.size()-1;
        int i = 0;

        while(i < l){
            swap(s[i],s[l]);
            i++;
            l--;
        }

        // return s;
        
    }
};
