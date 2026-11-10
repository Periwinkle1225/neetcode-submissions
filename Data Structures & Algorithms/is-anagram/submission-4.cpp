class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        std::multiset<char> sChars;
        std::multiset<char> tChars;
        int sSize = s.length();
        int tSize = t.length();

        if(sSize == tSize)
        {
            for(int i = 0; i < sSize; i++)
            {
                sChars.insert(s[i]);
            }
            for(int i = 0; i < tSize; i++)
            {
                tChars.insert(t[i]);
            }

            if(sChars == tChars)
            {
                return true;
            }
            else if(sChars != tChars)
            {
                return false;
            }
        }

        else 
        {
            return false;
        }

    }
};
