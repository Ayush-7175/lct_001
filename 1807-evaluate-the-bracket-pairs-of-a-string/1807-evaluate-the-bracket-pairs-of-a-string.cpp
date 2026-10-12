class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> ans;
        for (size_t i = 0; i < knowledge.size(); ++i) {
        ans[knowledge[i][0]] = knowledge[i][1];
}
string result;
 for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                int j = s.find(")", i + 1);
                auto t = s.substr(i + 1, j - i - 1);
                result+=ans.count(t)?ans[t]:"?";
                i=j;
            }
            else
            result+=s[i];
 }
 return result;

    

    }
};