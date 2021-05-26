class Solution {
public:
    
    vector<string> letterCombinations(string digits) {
        static vector<vector<string>> numbers={
            {},
            {},
            {"a","b","c"},
            {"d","e","f"},
            {"g","h","i"},
            {"j","k","l"},
            {"m","n","o"},
            {"p","q","r","s"},
            {"t","u","v"},
            {"w","x","y","z"}
        };
        if(digits.size()==0){
            return {};
        }
        if(digits.size()==1){
            
            return numbers[digits[0] - '0'];
        }
        
        vector<string> temp = letterCombinations(digits.substr(1));
        vector<string> ans;
        int alpha=digits[0]-'0';
        for(int i=0;i<numbers[alpha].size();i++){
            for(int j=0;j<temp.size();j++){
                ans.push_back(numbers[alpha][i]+temp[j]);
            }
        }
        return ans;
    }
};