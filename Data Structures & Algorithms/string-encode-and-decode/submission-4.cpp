class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        
        for (string str : strs) {
            encoded += to_string(str.length()) + "#" + str;
        }
        
        return encoded;
    }


    vector<string> decode(string s) {
        vector<string> result;
        int i = 0; 

        while (i < s.length()) {
    
            int delim_pos = s.find('#', i);
            
            // 2. Extract the integer part before the '#'
            // substr(start_index, length)
            int len = stoi(s.substr(i, delim_pos - i));
            
            // 3. Extract the actual string of that length 
            // It starts right after the '#' (which is delim_pos + 1)
            string str = s.substr(delim_pos + 1, len);
            
            // 4. Add to result array
            result.push_back(str);
            
            // 5. Move the pointer to the start of the next encoded string
            i = delim_pos + 1 + len;
        }

        return result;
    }
};
