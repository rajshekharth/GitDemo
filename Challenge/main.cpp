#include <iostream>
#include "Movies.h"

//Function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

/*Helper function
 * Expects 
 *  
 * 
 * 
 * 
 * 
 * */
void increment_watched(Movies &movies, std::string name) {
     if(movies.increment_watched(name)) {
         std::cout << name << " watch incremented" << std::endl;
     }
     else {
         std::cout << name << " not found" << std::endl;
     }
 }
 
 
/*Helper function
  * 
  * 
  * */
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
      if (movies.add_movie(name, rating, watched)) {
          std::cout << name << " added" << std::endl;
      } else {
          std::cout << name << " already exists" << std::endl;
      }
  }



int main() {
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Cinderella", "PG", 7);
    
    increment_watched(my_movies, "Big");
    
    increment_watched(my_movies, "Cinderella");
    my_movies.display();
    
    
    return 0;
}