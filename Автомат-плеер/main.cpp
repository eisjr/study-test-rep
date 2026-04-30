#include <iostream>
#include <unordered_map>
#include <string>

class MusicPlayer {
public:
    std::string state = "stopped";

    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> transitions = {
        {"stopped", {
            {"play", "buffering"}
        }},
        {"buffering", {
            {"buffer_ready", "playing"},
            {"stop", "stopped"}
        }},
        {"playing", {
            {"pause", "paused"},
            {"stop", "stopped"},
            {"buffer", "buffering"}
        }},
        {"paused", {
            {"play", "playing"},
            {"stop", "stopped"}
        }}
    };

    void dispatch(const std::string& action) {
        if (transitions[state].count(action)) {
            state = transitions[state][action];
            std::cout << "State -> " << state << std::endl;
        } else {
            std::cout << "Invalid transition from '" << state 
                      << "' using action '" << action << "'" << std::endl;
        }
    }
};

int main() {
    MusicPlayer player;

    player.dispatch("play");          // stopped → buffering
    player.dispatch("buffer_ready"); // buffering → playing
    player.dispatch("pause");        // playing → paused
    player.dispatch("play");         // paused → playing
    player.dispatch("buffer");       // playing → buffering
    player.dispatch("buffer_ready"); // buffering → playing
    player.dispatch("stop");         // playing → stopped

    return 0;
}