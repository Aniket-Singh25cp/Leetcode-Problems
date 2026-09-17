class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxx = 0;
        for(int i = 0; i < sentences.size(); i++){
            int count = std::count(sentences[i].begin(), sentences[i].end(), ' ');
            maxx = max(maxx, count + 1);
        }
        return maxx;
    }
};