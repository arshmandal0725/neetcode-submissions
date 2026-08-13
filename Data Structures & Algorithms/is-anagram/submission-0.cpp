class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        return false;

        unordered_map<char,int> c;

        for(int i : s)
        {
           c[i]++;
        }

         for(int i : t)
        {
           c[i]--;
           if(c[i]<0)
           {
            return false;
           }
        }

        return true;
    }
};
