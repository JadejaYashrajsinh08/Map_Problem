class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            for(int i=0;i<9;i++){
                unordered_map<char,int> m;
                for(int j=0;j<9;j++)if(board[i][j]>='1' && board[i][j]<='9') m[board[i][j]]++;
                for(auto x:m) if(x.second>1)return false;
            }
            for(int i=0;i<9;i++){
                unordered_map<char,int> m;
                for(int j=0;j<9;j++)if(board[j][i]>='1' && board[j][i]<='9') m[board[j][i]]++;
                for(auto x:m) if(x.second>1)return false;
            }
    
            for(int i=0;i<9;i+=3){
                for(int j=0;j<9;j+=3){
                    unordered_map<char,int> m;
                    for(int p=i;p<i+3;p++){
                        for(int q=j;q<j+3;q++){
                            if(board[p][q]>='1'&& board[p][q]<='9') m[board[p][q]]++;
                        }
                    }
                    for(auto x:m) if(x.second>1)return false;
                }
            }
            return true;
        }
    };