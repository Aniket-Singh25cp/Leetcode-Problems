class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> dict;
        for(const auto& pair : knowledge){
            dict[pair[0]] = pair[1];
        }
        string res = "", curr = "";
        bool bracket = false;
        
        for(char c : s){
            if(c == '('){
                bracket = true;
            }else if(c == ')'){
                bracket = false;
                if(dict.count(curr)){
                    res += dict[curr];
                }else{
                    res += '?';
                }
                curr.clear();
            }else if(bracket == true){
                curr += c;
            }else{
                res += c;
            }
        }
        return res;
    }
};