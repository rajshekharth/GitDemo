#include "Movie.h"
#include <iostream>

Movie::Movie(std::string name, std:: string rating, int watched) 
    : name {name}, rating {rating}, watched {watched} {
}

Movie::Movie(const Movie &source)
    : Movie {source.name, source.rating, source.watched} {
        
}


void Movie::display_movie() {
    std::cout << name << ", \"" << rating << "\" , " << watched << std::endl;
}

Movie::~Movie()
{
}

