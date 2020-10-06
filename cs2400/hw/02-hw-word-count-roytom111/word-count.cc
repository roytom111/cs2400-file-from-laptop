/**
 *   @file: word-count.cc
 * @author: Roy Frimpong    
 *   @date: 9/20/2020
 *  @brief: sentence and word counter for any text :)
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    string words;
    int word_count = 0;
    double total_words = word_count; // define all the varibles used
    int sentence_count = 0;
    double average_words;
    char last;
    int length;

    cout << "Enter a paragraph and to terminate it type @@@" << endl;
    do // making a do while because i want the code to go through once
    {

        word_count++; // go up once after input
        cin >> words;
        length = words.length();
        last = words.at(length - 1);

        if (last == '.' || last == '?' || last == '!') // define the last characters
        {
            sentence_count++; // work in the same way as word ++
        }

        if (words == "@@@")
        {
            total_words = word_count - 1; // not get it to count the @ sign when counting words
        }

    } while (words != "@@@");
    if (total_words == 0 && sentence_count == 0) //exit the loop when @@@ are done
    {
        cout << "you did not enter any text!" << endl;
    }
    if (sentence_count == 0 && total_words > 0)
    {
        cout << "you did not enter any sentences" << endl;
    }
    if (total_words > 0 && sentence_count > 0)
    {
        average_words = total_words / sentence_count;
        cout << "Average word per sentence  : " << average_words << endl;
    }

    cout << fixed << setprecision(2);
    average_words = total_words / sentence_count;
    cout << "word count :  " << total_words << endl;
    cout << "Sentence count : " << sentence_count << endl;

    return 0;
} /// main