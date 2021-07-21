#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watched;
        
public:
    std::string get_name() const {return this->name;}
    std::string get_rating() const {return this->rating;}
    int get_watched() const {return this->watched;}
    void increment_watched() {++this->watched;}
    
    Movie(std::string name, std:: string rating, int watched);
    
    //Copy constructor
    Movie(const Movie &source);
    
    //Display movie details
    void display_movie();
    
    //Destructor
    ~Movie();

};

#endif // _MOVIE_H_
