#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "nlohmann/json.hpp"

int main() {
    std::map<std::string, std::string> cast;

    nlohmann::json movie = {
            {"Name",                 "Lesbian Vampire Killers"},
            {"Year",                 "2009"},
            {"Country",              "United Kingdom"},
            {"Production companies", "Alliance Films, Momentum Pictures, Velvet Bite"},
            {"Writers",              "Stewart Williams, Paul Hupfield"},
            {"Director",             "Phil Claydon"},
            {"Producer",             "Steve Clark-Hall"},
            {"James Corden", "Fletch"},
            {"Travis Oliver", "Steve"},
            {"Emma Clifford", "Ms Rossi"},
            {"Louise Dylan", "Anke"},
    };
    std::ofstream file("movie.json");
    movie >> file;

    return 0;
}