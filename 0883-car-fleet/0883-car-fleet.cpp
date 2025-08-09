class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars;
        cars.reserve(n);
        for (int i = 0; i < n; i++) {
            double time = double(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.begin(), cars.end(), [](const pair<int,double>& a, const pair<int,double>& b){
            return a.first > b.first;
        });

        int fleets = 0;
        double slowestTime = 0.0; 
        for (const auto& p : cars) {
            double t = p.second;
           
            if (t > slowestTime) {
                fleets++;
                slowestTime = t;
            }  
        }
        return fleets;
    }
};
