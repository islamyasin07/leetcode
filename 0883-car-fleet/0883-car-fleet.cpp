class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,double>> cars(n);
        for (int i = 0; i < n; ++i) {
            double t = (double)(target - position[i]) / speed[i];
            cars[i] = {position[i], t};
        }
        sort(cars.begin(), cars.end(), [](const auto& a, const auto& b){
            return a.first > b.first; 
        });

        int fleets = 0;
        double slowest = 0.0; 
        for (auto& [pos, time] : cars) {
            if (time > slowest) {    
                ++fleets;
                slowest = time;
            } 
        }
        return fleets;
    }
};
