namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
    public:
        int x_coordinate;
        int y_coordinate;
    
    Alien(int x, int y) : x_coordinate{x}, y_coordinate{y}, health{3} {};

    private:
        int health{3};

    public:
        int get_health() {
            return health;
        }
        
        bool hit() {
            if (health > 0) {
                health -= 1;
                return true;
            }
            return false;
        }
        
        bool is_alive() {
            if (health > 0) {
                return true;
            } else {
                return false;
            }
        }
        
        bool teleport(int x_new, int y_new) {
            x_coordinate = x_new;
            y_coordinate = y_new;
            return true;
        }
    
        bool collision_detection(Alien other_alien) {
            return x_coordinate == other_alien.x_coordinate && y_coordinate == other_alien.y_coordinate;
        }
};
}  // namespace targets
