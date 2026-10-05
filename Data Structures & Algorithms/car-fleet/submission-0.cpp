class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // create the pair  for the  beacuys eht e cxar contain the postion plus pseed
        vector <pair<int , int>>cars;
        // store the position plus speed
        for(int i = 0; i<position.size(); i++){
            cars.push_back({position[i],speed[i]});
        }
        // sor the element
        sort(cars.rbegin() ,cars.rend());
        // create the  stack
        stack<double>st;
        for(auto car: cars){
            int pos = car .first;
            int spd =  car.second;
             double time  =  (double) (target - pos) / (spd);
             if(st.empty() || time > st.top()){
                st.push(time);
             }
        }
        return  st.size();



        
    }
};
