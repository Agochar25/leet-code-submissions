class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string& str:strs){
            result += to_string(str.length()) + "#" + str ;
        }
        return result;

    }

    vector<string> decode(string s) {
        vector<string>result;
        int i = 0;
        while(i<s.length()){
            int j = i;
        while(s[j]!='#'){
            j++;
        }
        int length = stoi(s.substr(i,j-i));
        i = j+1;
        string str = s.substr(i,length);
        result.push_back(str);
        i = i+length;

    }
    return result;

}
        
};
