class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        std::multiset<char> sChars;
        std::multiset<char> tChars;


        if(s.length() == t.length())
        {
            for(int i = 0; i < s.length(); i++)
            {
                sChars.insert(s[i]);
                tChars.insert(t[i]);
            }

            if(sChars == tChars)
            {
                return true;
            }
            else 
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
