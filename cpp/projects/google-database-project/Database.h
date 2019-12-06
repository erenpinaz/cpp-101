#ifndef DATABASE_H_
#define DATABASE_H_

// database.h, Maggie Johnson & Nejdet Eren Pinaz
// Description: Class for a database of Composer records.
#include <algorithm>
#include <iostream>

#include "Composer.h"

// Our database holds 100 composers, and no more.
const int kMaxComposers = 100;

class Database {
   public:
    Database();
    ~Database();

    // Add a new composer using operations in the Composer class.
    // For convenience, we return a reference (pointer) to the new record.
    Composer& AddComposer(string in_first_name, string in_last_name,
                          string in_genre, int in_yob, string in_fact);
    // Search for a composer based on last name. Return a reference to the
    // found record.
    Composer* GetComposer(string in_last_name);
    // Display all composers in the database.
    void DisplayAll();
    // Sort database records by rank and then display all.
    void DisplayByRank();

   private:
    // Store the individual records in an array.
    Composer composers_[kMaxComposers];
    // Track the next slot in the array to place a new record.
    int next_slot_;
};

Database::Database() { this->next_slot_ = 0; }

Database::~Database() {}

Composer& Database::AddComposer(string in_first_name, string in_last_name,
                                string in_genre, int in_yob, string in_fact) {
    Composer& composer = composers_[next_slot_];

    composer.set_first_name(in_first_name);
    composer.set_last_name(in_last_name);
    composer.set_composer_yob(in_yob);
    composer.set_composer_genre(in_genre);
    composer.set_fact(in_fact);

    this->next_slot_ += 1;

    return composer;
}

Composer* Database::GetComposer(string in_last_name) {
    for (size_t i = 0; i < kMaxComposers; i++) {
        if (composers_[i].last_name() == in_last_name) return &composers_[i];
    }

    return nullptr;
}

void Database::DisplayAll() {
    for (size_t i = 0; i < next_slot_; i++) {
        cout << composers_[i].first_name() << endl;
    }
}

void Database::DisplayByRank() {
    Composer copy_composers[kMaxComposers];

    copy(composers_, composers_ + kMaxComposers, copy_composers);
    sort(copy_composers, copy_composers + next_slot_,
         [](const Composer& lhs, const Composer& rhs) {
             return lhs.ranking() < rhs.ranking();
         });

    for (size_t i = 0; i < next_slot_; i++) {
        cout << "Name: " << copy_composers[i].first_name()
             << ", Rank: " << copy_composers[i].ranking() << endl;
    }
}

#endif  // DATABASE_H_