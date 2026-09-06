class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        // to go through every elements
        for(string token : tokens){
            // chekc wherter it is anumnber or not
            if(token != "+" && token != "-"&& token !="*" && token !="/"){
                // conver the string in to the integer the stoi is use 
                st.push(stoi(token));
            }
            else{
                // if there is an operator we need two number intot he tack then pop it and then pop it and perform the operation 
                int a  =  st.top();
                st.pop();
                int b = st.top();
                st.pop();
                 // chekc wheter  which opperator is now  used 
            if(token == "+"){
                st.push(b + a);
            }
            else if(token == "-"){
                st.push(b-a);

            }
            else if(token == "*"){
                st.push(b*a);
            }
            else{
                st.push(b/a);
            }
        }
            }
           
        return st.top();
        
    }
};
