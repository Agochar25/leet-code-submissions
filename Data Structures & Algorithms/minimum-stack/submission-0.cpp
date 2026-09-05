class MinStack {
    // creted the two stack so that the  time complexity is o(1)
    stack<int>st;// stores the actual value 
    stack<int>minst;// stores the min value  at evry l;evel
public:
    MinStack() {
        
    }
    // sotres the  current element that need ti be add
    void push(int val) {
        // element  that are added int he stack
        st.push(val);
        // now cgekc ther coneduition that ther minst stack is ermpty or not 
        // and checking for the first eleemtn fir ther  minst
        if(minst.empty()){
            minst.push(val);
        }
        // if  condition is false
        // here the  val is the cureent  elent and  mins.top is the previosu valeu
        else{
            minst.push(min(val , minst.top()));
        }

        
    }
    
    void pop() {
        // if both the element are eual in ther stack and same  pop 
        st.pop();
        minst.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return minst.top();
        
    }
};
