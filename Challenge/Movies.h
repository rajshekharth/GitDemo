#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <string>
#include <vector>

class Movies
{
private:
    std::vector <Movie> movies;
public:
    bool add_movie(std::string name, std::string rating, int watched);
    bool increment_watched(std::string name);
    void display();
    Movies();
    ~Movies();

};

#endif // _MOVIES_H_
