class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        unordered_map<string, vector<string> > m;
        for(int i=0; i<string_list.size(); i++)
        {
            string s= string_list[i];
            sort(s.begin(), s.end());
            m[s].push_back(string_list[i]);
        }
        
        vector<vector<string>> vec(m.size());
        int idx=0;
        for(auto it: m)
        {
            auto v = it.second;
            for(int i=0;i< v.size();i++)
            {
                vec[idx].push_back(v[i]);
            }
            idx++;
        }
        return vec;
        //code here
    }
};