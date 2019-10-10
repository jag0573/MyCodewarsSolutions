#include <string>

std::string highestScoringWord(const std::string &str)
{
  int highest_value = 0;
  int temp = 0;
  std::string highest_word;
  // Used to split string around spaces. 
  std::istringstream ss(str); 
  
  // Traverse through all words 
  do 
  { 
    // Read a word 
    std::string word; 
    ss >> word;
    //std::cout << word << " "; //Checks if words are seperated
    for(int i = 0; i < word.length(); i++)
    {
      //std::cout << word[i] << " "<< static_cast<int>(word[i])<< " ";   //Checks if characters are seperated
      temp += (static_cast<int>(word[i]) - 96);  //increments the words value by letter
     
    }
    
    if(temp > highest_value)  //Test if current word is higher than the highest word 
    {
      highest_value = temp;  //update highest value word
      highest_word = word;  
      //std::cout << highest_value << " " << highest_word << std::endl;  //Prints highest word
    }
    
    temp = 0;  //temp gets the value of each word, once word is done reset temp
    std::cout << std::endl; 
  } while (ss);  // While there is more to read  
  return highest_word;
}