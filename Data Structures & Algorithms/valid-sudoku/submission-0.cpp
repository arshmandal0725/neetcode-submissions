class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, vector<vector<int>>> mapp;

        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[i].size(); j++) {
                char current_char = board[i][j];
                
                if(current_char == '.') {
                    continue;
                }

                int box_index = (i / 3) * 3 + (j / 3);

                if(mapp.find(current_char) != mapp.end()) {
                    for(const auto& pos : mapp[current_char]) {
                        
                        if(pos[0] == i || pos[1] == j || pos[2] == box_index) {
                            return false;
                        }
                    }
                }
                mapp[current_char].push_back({i, j, box_index});
            }
        }
        return true;
    }
};