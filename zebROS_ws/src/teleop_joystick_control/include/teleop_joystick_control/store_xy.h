class store_xy {
    
    public: 
        double x;
        double y;

        store_xy(double input_x, double input_y) {
            x = input_x;
            y = input_y;
        }

        store_xy operator*(double scalar){
            store_xy multiplied;
            multiplied.x = scalar * x;
            multiplied.y = scalar * y;
            return multiplied;
        }

        store_xy operator+(store_xy lower) {
            store_xy added;
            added.x = x + lower.x;
            added.y = y + lower.y;
            return added; 
        }
};