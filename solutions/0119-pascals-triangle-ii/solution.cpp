class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<vector<int>> su( rowIndex +1 );
        
        for(int i=0; i<=rowIndex; i++ ){

         

            su[i].resize(i+1);

            for(int j=0;j<=i;j++){

                if(j==0 || j == i){
                    
                    su[i][j]=1;
                }else{


                    su[i][j]=su[i-1][j-1]+su[i-1][j];
                }
            }
            
        }

        return su[rowIndex];
        
    }
};
