class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *std::max_element(piles.begin(), piles.end());
        int result = high;
        while( low <= high){
            int mid = low + (high -low) /2;

            if( canEatAll(piles, h, mid)){
                result = mid;
                high = mid -1;
            
            } else{
                low = mid +1;
            }
        }
        return result;
    }
    bool canEatAll(vector<int>& piles, int h, int speed){
        int totalHours =0;

        for( int i : piles){
            totalHours+= (i + speed -1) / speed;

        }
        return totalHours <= h;
    }
};
