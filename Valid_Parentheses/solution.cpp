class Solution {
public:
    bool isValid(string s) {
        vector<char> open;
        
        if(s.size()==0)
            return true;
        if(s.size()%2!=0)
            return false;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' ||s[i]=='{'||s[i]=='[')
                open.push_back(s[i]);
            
            else if(!open.empty()&&
                    ((s[i]==')' && open.back()=='(')||
                    (s[i]=='}' && open.back()=='{')||
                    (s[i]==']' && open.back()=='[')))
                open.pop_back();
            
            else
                return false;
        }
        if(open.empty())
            return true;
        else
            return false;
    }
};