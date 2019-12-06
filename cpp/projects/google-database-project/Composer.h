#ifndef COMPOSER_H_
#define COMPOSER_H_

#include <string>

using namespace std;

// composer.h, Maggie Johnson & Nejdet Eren Pinaz
// Description: The class for a Composer record.
// The default ranking is 10 which is the lowest possible.
// Notice we use const in C++ instead of #define.
const int kDefaultRanking = 10;

class Composer {
   public:
    // Constructor
    Composer();

    // Here is the destructor which has the same name as the class
    // and is preceded by ~. It is called when an object is destroyed
    // either by deletion, or when the object is on the stack and
    // the method ends.
    ~Composer();

    // Accessors and Mutotaros
    void set_first_name(string in_first_name);
    string first_name();
    void set_last_name(string in_last_name);
    string last_name();
    void set_composer_yob(int in_composer_yob);
    int composer_yob();
    void set_composer_genre(string in_composer_genre);
    string composer_genre();
    void set_ranking(int in_ranking);
    int ranking() const;
    void set_fact(string in_fact);
    string fact();

    // Methods
    // This method increases a composer's rank by increment.
    void Promote(int increment);
    // This method decreases a composer's rank by decrement.
    void Demote(int decrement);
    // This method displays all the attributes of a composer.
    void Display();

   private:
    string first_name_;
    string last_name_;
    int composer_yob_;       // year of birth
    string composer_genre_;  // baroque, classical, romantic, etc.
    string fact_;
    int ranking_;
};

Composer::Composer() {

}

Composer::~Composer() {
    
}

void Composer::set_first_name(string in_first_name) {
    this->first_name_ = in_first_name;
}

string Composer::first_name() {
    return this->first_name_;
}

void Composer::set_last_name(string in_last_name) {
    this->last_name_ = in_last_name;
}

string Composer::last_name() {
    return this->last_name_;
}

void Composer::set_composer_yob(int in_composer_yob) {
    this->composer_yob_ = in_composer_yob;
}

int Composer::composer_yob() {
    return this->composer_yob_;
}

void Composer::set_composer_genre(string in_composer_genre) {
    this->composer_genre_ = in_composer_genre;
}

string Composer::composer_genre() {
    return this->composer_genre_;
}

void Composer::set_ranking(int in_ranking) { 
    this->ranking_ = in_ranking; 
}

int Composer::ranking() const {
    return this->ranking_;
}

void Composer::set_fact(string in_fact) { 
    this->fact_ = in_fact; 
}

string Composer::fact() {
    return this->fact_;
}

void Composer::Promote(int increment){
    this->ranking_ += increment;
}

void Composer::Demote(int decrement){
    this->ranking_ -= decrement;
}

void Composer::Display(){
    cout << this->first_name_ << endl;
    cout << this->last_name_ << endl;
    cout << this->composer_yob_ << endl;
    cout << this->composer_genre_ << endl;
    cout << this->fact_ << endl;
    cout << this->ranking_ << endl;
}

#endif  // COMPOSER_H_