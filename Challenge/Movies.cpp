#include "Movies.h"
#include <iostream>

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for(Movie movie: movies) {
        if(movie.get_name() == name)
            return false;
    }
    
    Movie temp {name, rating, watched};
    this->movies.push_back(temp);
    return true;
}

bool Movies::increment_watched(std::string name) {
    for (Movie movie: movies) {
        if(movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() {
    if (movies.size() == 0) {
        std::cout << "\nNo movies to display\n" << std::endl;
    }
    else {
    std::cout << "\n================================" << std::endl;
    for(Movie movie: movies)
        movie.display_movie();
    std::cout << "================================\n" << std::endl;
    }
}

Movies::Movies()
{
}

Movies::~Movies()
{
}

