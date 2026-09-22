class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int> record;
        for(int i = 0; i < op.size(); i++){
            if(op[i] != "C" && op[i] != "D" && op[i] != "+"){
                int x = std::stoi(op[i]);
                record.push_back(x);
            }else if(op[i] == "C"){
                record.pop_back();
            }else if(op[i] == "D"){
                int n = record.back();
                record.push_back(2 * n);
            }else if(op[i] == "+"){
                int last = record[record.size() - 1];
                int slast = record[record.size() - 2];
                int z = last + slast;
                record.push_back(z);
            }
        }
        int sum = 0;
        for(int x : record) sum += x;
        return sum;
    }
};