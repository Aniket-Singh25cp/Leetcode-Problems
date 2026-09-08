class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> m;
        for(int i=0;i<deck.size();i++){
            m[deck[i]]++;
        }
        int g = -1;
        for(auto &pair : m){
            if(g==-1) g = pair.second;
            else g = gcd(g,pair.second);
        }
        return g >= 2;
    }
};