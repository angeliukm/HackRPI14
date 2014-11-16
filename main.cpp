//
//  main.cpp
//  HackRPI
//
//  Created by Katelyn Angeliu on 11/16/14.
//  Copyright (c) 2014 Katelyn Angeliu. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <set>


// Helper function to parse numbers into sets of (phonemes)
void num_to_letters (std::string number, std::vector<std::set<std::string> >& letters){
    
    std::set<std::string> let;
    for (int i = 0; i < number.length(); i++){
        if (number[i] == '1'){
            let.insert("t");
            let.insert("d");
            let.insert("th");
        }else if (number[i] == '2'){
            let.insert("n");
        }else if (number[i] == '3'){
            let.insert("m");
        }else if (number[i] == '4'){
            let.insert("r");
        }else if (number[i] == '5'){
            let.insert("l");
        }else if (number[i] == '6'){
            let.insert("j");
            let.insert("sh");
            let.insert("ch");
            //let.insert("g s"); //soft g
        }else if (number[i] == '7'){
            let.insert("k");
            let.insert("c h"); //hard c   assuming hard sound for now
            let.insert("q");
            let.insert("g h"); //hard g   assuming hard sound for now
            let.insert("x");
        }else if (number[i] == '8'){
            let.insert("f");
            let.insert("v");
            let.insert("ph");
        }else if (number[i] == '9'){
            let.insert("b");
            let.insert("p");
        }else if (number[i] == '0'){
            let.insert("z");
            let.insert("s");
            //let.insert("c s");  //soft c
        }
    }
    letters.push_back(let);
}

// Helper function to see if a word is valid for this number
bool is_valid(std::string word, const std::vector<std::set<std::string> >& letters){
    
    bool is_valid = true;
    
    int i = 0; // valid letter iterator
    
    for (int j = 0; j < word.size(); j++){
        if (i >= letters.size()){ // more phonemes than the number requires
            return false;
        }
        std::set<std::string> let = letters[i];
        std::set<std::string>::iterator itr = let.begin();
        if (word[j] != 'a' || word[j] != 'e' || word[j] != 'h' || word[j] != 'i' || word[j] != 'o' || word[j] != 'u' || word[j] != 'w' || word[j] != 'y'){ // we can skip these letters
            std::cout << word[j] <<std::endl;
            while (itr != let.end()){
                if (itr->size() == 2){  // double letter phoneme
                    if (j < word.size()-1){ // not at end of word
                        if(*itr != "ph" && ((word[j] == 's' || word[j] == 'c' ) && word[j+1] == 'h')){ // matching ch, sh
                            i++;
                            std::cout << *itr << " " << word << " " << i << std::endl;
                            break;
                        }else if (*itr == "ph" && word[j] == 'p'  && word[j+1] == 'h'){ // matching ph
                            i++;
                            std::cout << *itr << " " << word << " " << i << std::endl;
                            break;
                        }else{ // no double letter match, try next phoneme
                            itr++;
                        }
                    }else {  // at end of word, double letter not possible, try next phoneme
                        itr++;
                    }
                }else{
                    std::string chars = *itr;
                    if (chars[0] == word[j]){ // matching single letter
                        i++;
                        break;
                    }else{ //no match, try next phoneme
                        itr++;
                    }
                }
            }
            if (let == letters[i] && itr == let.end()){ // didn't find a match and out of phonemes to try
                return false;
            }
            
        }else{
            
        }
    }
    
    // old way... got too confused and switched tack
//    for (int i = 0; i < letters.size(); i++){
//        int j = 0; // place in the word
//        std::set<std::string> let = letters[i];
//        std::set<std::string>::iterator itr; // place in a set of letters
//        while (itr != let.end()){
//            std::string chars = *itr;
//            while (j < word.size()){
//                if (chars.size() == 3 ){ // c or g
//                    if (j > 0){
//                        if (word[j-1] == 'a' || word[j-1] == 'o' || word[j-1] == 'u'){ //hard
//                            if(chars[2] == 'h' && word [j] == chars[0]){
//                                itr++;
//                            }else{
//                                j++;
//                            }
//                        }else if (word[j-1] == 'e' || word[j-1] == 'i' || word[j-1] == 'y'){ // soft
//                            if (chars[2] == 'h' && word [j] == chars[0]){
//                                itr++;
//                            }else{
//                                j++;
//                            }
//                        }else{
//                            j++;
//                        }
//                    }else{
//                        j++;
//                    }
//                }else if (chars.size() == 2){ // sh, ch, ph
//                    
//                }
//                
//                if(chars[0] == word[j]){
//                    itr++;
//                }else{
//                    j++;
//                }
//                
//            }
//            if (j == word.size()){
//                break;
//            }
//        }
//        is_valid = itr == let.end();
//    }
    
    
    return is_valid;
}

///////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, const char * argv[]) {
    
    // Set the input and output files
    std::ifstream in_file(argv[1]);
    std::string number(argv[2]);
    std::string word;
    std::vector<std::set<std::string> > letters;
    
    // Is the number of arguments provided correct?
    if (argc != 3){
        std::cerr << "Usage: " << argv[0] << " words_file number\n";
        return 1;
    }
    // Can the input file be read?
    if (!in_file.good()){
        std::cerr << "Can't open the words file " << argv[1] << "\n";
        return 1;
    }
    // Is the given number actually a number?
    std::string::const_iterator it = number.begin();
    while (it != number.end() && std::isdigit(*it)) ++it;
    bool is_num = !number.empty() && it == number.end();
    if (!is_num){
        std::cerr << "Input " << argv[2] << " is not a number\n";
        return 1;
    }
    
    num_to_letters(number, letters);
    std::vector <std::string> answers;
    
    while (in_file >> word){
        
        for (int i = 0; i < word.size(); i++){
            if (is_valid(word, letters)){
                answers.push_back(word);
            }
        }
        
    }
    
    if (answers.size() == 0){
        std::cout << "No possible words for this number. Sorry :(\n";
    }else{
        std::cout << "Possible words: \n";
    }
    
    for (int i = 0; i < answers.size(); i++){
        std::cout << answers[i] << std::endl;
    }
    
}


/* 
 To do:
  - hard vs soft g and c
  - phrases
 
 
 */



