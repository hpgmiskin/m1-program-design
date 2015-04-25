#include <iostream>
#include <string>
#include <map>
using namespace std;

// Given Map Template
// ==================
template <typename K, typename V>
class Map {
    private:
        std::map<K, V> map;
    public:
        Map() {}
        void set(K key, V val) {
            this->map.insert(pair<K, V>(key, val));
        }
        V get(K key) const {
            typename std::map<K, V>::const_iterator it;
            it = this->map.find(key);
            return it->second;
        }
};

// Class Declarations
// ==================
class Player {

    private:
        bool is_cheater;
        string login;

    public:
        Player(string login);
        ~Player();
        string get_login();
        void set_is_cheater(bool);
        bool get_is_cheater() const;

};

class Game {

    private:
        string title;
        Player* best_player;
        Map<string, int> scores;

    public:
        Game(string title);
        ~Game();
        Player* get_best_player() const;
        int get_score(Player*) const;
        void increment_score(Player*);
        void play(Player* p1, Player* p2);
        
};

// Dummy Implementation of compete
// ===============================
bool compete(Game* g, Player* p1, Player* p2) {
    return true;
} 


// Function Implementations
// ========================

Player::Player(string l) : login(l) {}
bool Player::get_is_cheater() const {
    return this->is_cheater;
}
void Player::set_is_cheater(bool b) {
    this->is_cheater = b;
}
string Player::get_login() {
    return this->login;
}


// Game
// ----
Game::Game(string t) : title(t) {}
void Game::increment_score(Player* p) {
    if (!p->get_is_cheater()) {
        string login = p->get_login();
        int score = scores.get(login);
        scores.set(login, ++score);
        if (this->best_player == NULL) {
            this->best_player = p;
        } else {
            int max_score = scores.get(this->best_player->get_login());
            if (score > max_score) {
                this->best_player = p;
            }
        }
    }
}
void Game::play(Player* p1, Player* p2) {
    bool result = compete(this, p1, p2);
    Player * winner = result ? p1 : p2;
    this->increment_score(winner);
}
int Game::get_score(Player* p) const {
    return this->scores.get(p->get_login());
}
Player* Game::get_best_player() const {
    return this->best_player;
}


int main() {

    Game* nfs = new Game("NFS");
    Game* wow = new Game("WOW");
    Player* c = new Player("Cycl0n3");
    Player* t = new Player("Typh00n");
    Player* h = new Player("Hurr1c4ne");
    
    nfs->play(c, t);
    wow->play(t, h);
    c->set_is_cheater(true);
    int score = wow->get_score(t);
    Player* best = nfs->get_best_player();

    cout << "Typhoon's score in WOW is: " << score << endl;
    cout << "Best player in NFS is: " << best->get_login() << endl;
}
