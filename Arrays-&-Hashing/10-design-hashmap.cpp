#include <vector>
using std::vector, std::pair, std::make_pair;

class MyHashMap {
private:
    int Size = 1000;
    vector<vector<pair<int, int>>> save;
    int hash(int key) { return key % Size; }

public:
    MyHashMap() { save.resize(Size); }

    void put(int key, int value) {
        int index = hash(key);
        for (auto& x : save[index]) {
            if (x.first == key) {
                x.second = value;
                return;
            }
        }
        save[index].push_back(make_pair(key, value));
    }

    int get(int key) {
        int index = hash(key);
        for (auto x : save[index]) {
            if (x.first == key)
                return x.second;
        }
        return -1;
    }

    void remove(int key) {
        int index = hash(key);
        for (auto x = save[index].begin(); x != save[index].end(); x++) {
            if (x->first == key) {
                save[index].erase(x);
                return;
            }
        }
    }
};