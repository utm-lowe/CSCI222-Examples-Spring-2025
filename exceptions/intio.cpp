#include "intio.h"
#include <iostream>
#include <exception>

using namespace std;

static void clearLine()
{
    cin.clear();

    // consume up until the newline
    while(cin && cin.peek() != '\n') cin.get();
}

/**
 * @brief Get an integer from the user after display prompt.
 * 
 * @param prompt 
 * @return int 
 */
int promptInt(const std::string &prompt)
{
    int x;

    cout << prompt;
    cin >> x;

    // handle disconnection
    if(cin.eof()) {
        throw runtime_error("Standard input is disconnected.");
    }

    // handle our more...creative... users
    if(!cin) {
        throw domain_error("Unexpected Input Format");
    }

    return x;
}

/**
 * @brief Force the user to give us an integer in this range.
 * 
 * @param prompt 
 * @param min 
 * @param max 
 * @return int 
 */
int promptInt(const std::string &prompt, int min, int max)
{
    bool valid;
    int x;

    do {
        try {
            x = promptInt(prompt);
            valid = x >= min and x <= max;
        } catch(domain_error &ex) {
            // clear out the invalid string
            valid = false;
            clearLine();
        }

        if(not valid) {
            cout << "Invalid entry. Please try again." << endl;
        }
    } while(not valid);

    return x;
}