#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
using namespace std;

// Moods
// 1 is happy
// 2 is worried
// 0 is angry
// -1 is very angry

void Joke (int mood, string is_joke);
void First_Question(int& mood, string name, string day, string& is_joke);
void Questions (int& mood, string name);
void Second_Question (int& mood, string name);
void Bad_Mood(int& mood, string name);
void Third_Question(int& mood, string name);
void Endings (int mood, string name);

int main () {
    
    srand(time(0));

    int mood = 1;
    string name;
    string contin;
    

    cout << "Hello and welcome to the greatest bot that you can see!\n" << "Would you kindly write your name, so I could know how to adress to you: ";
    cin >> name;
    do{
        Questions(mood, name);

        cout << endl << "Do you want to try it one more time? (Yes|No)";
        cin >> contin;
    } while(contin == "Yes");

    

    return 0;
}

void Questions (int& mood, string name) {
    string day;
    string is_joke;

    First_Question(mood, name, day, is_joke);

    if(is_joke == "Yes"){
        Joke(mood, is_joke);
    }
    if (is_joke == "No") {
        mood = 0;
        cout << "Oh, so you think, my jokes aren't funny? So be it!";
    }

    Second_Question(mood, name);

    if (mood == -1){
        Endings(mood, name);
        return;
    }

    Third_Question(mood, name);

    Endings(mood, name);
}

void First_Question(int& mood, string name, string day, string& is_joke) {
    cout << "Now we can start our conversation, " << name << ". How was your day? (Good|Bad)" << endl;
    cin >> day;

    if (day == "Good") {
        cout << "Wonderful!";
    } else if (day == "Bad") {
        mood = 2;
        cout << "Did something bad happen? Maybe I could make you feel better by telling you a joke? (Yes|No)" << endl;
        cin >> is_joke;
    }
}


void Joke (int mood, string is_joke) {

    string explanation;
    string like_joke;

        cout << "Ok, I have a lot of good jokes, I'm sure I'll find right one. Let's start wit this..." << endl;
        int joke_number = rand() % 10 + 1;
        switch (joke_number)
        {
        case 1:
            cout << "Why are Assembly programmers always soaking wet?" << endl << "They work below C-level." << endl;
            break;
        case 2:
            cout << "Why do Java programmers have to wear glasses?" << endl << "Because they don’t C#." << endl;
            break;
        case 3:
            cout << "UNIX is user friendly. It’s just very particular about who its friends are." << endl;
            break;
        case 4:
            cout << "A programmer puts two glasses on his bedside table before going to sleep. A full one, in case he gets thirsty, and an empty one, in case he doesn’t." << endl;
            break;
        case 5:
            cout << "C programmers never die. They are just <cast> into VOID." << endl;
            break;
        case 6:
            cout << "Programmers like to solve problems." << endl << "When they run out of problems, they create new problems!" << endl;
            break;
        case 7:
            cout << "What is an algorithm?" << endl << "A word programmers use when they don’t want to explain what they did." << endl;
            break;
        case 8:
            cout << "99 little bugs in the code, 99 little bugs, you take one down and patch it around, 125 little bugs in the code" << endl;
            break;
        case 9:
            cout << "There are 10 kinds of people in the world. Those who understand binary and those who don’t." << endl;
            break;
        default:
            cout << "Knock, knock." << endl << "Who’s There?" << endl << "Very long pause…" << endl << "Java." << endl;
            break;
        }
        cout << "Did you like the joke, " << "name" << "? (Yes/No)" << endl;
        cin >> like_joke;
        if(like_joke == "Yes") {
            mood = 1;
            cout;
        }
        else if (like_joke == "No"){
            mood = 0;
            cout << "Maybe you just don't get it? I can explain it to you. (Yes/No)" << endl;
            cin >> explanation;
            if (explanation == "Yes"){
                switch (joke_number)
        {
        case 1:
            cout << endl << "Explanation: Assembly language is considered a low-level programming language, and C is a higher-level language. The joke plays on the double entendre of 'C-level,' where it refers to both the higher level in programming languages and sea level. Assembly programmers work at a lower level, so they humorously work 'below C-level', implying being underwater." << endl;
            break;
        case 2:
            cout << endl << "Explanation: This joke involves wordplay with programming languages. 'C#' (pronounced C sharp) is a programming language, and the joke suggests that Java programmers need glasses because they don't see (C#) well, creating a play on words between 'see' and the programming language C#." << endl;
            break;
        case 3:
            cout << endl << "Explanation: This joke is a play on the term 'user-friendly,' which typically means easy for users to interact with. UNIX, however, is known for being powerful but often challenging to use. The joke suggests that UNIX is friendly, but it's selective about who it considers a friend, implying it may not be as easy for everyone to use." << endl;
            break;
        case 4:
            cout << endl << "Explanation: This is a humorous take on the programmer's mindset. It reflects the logical thinking of a programmer, preparing for both scenarios – being thirsty (full glass) and not being thirsty (empty glass), illustrating the programmer's tendency to cover all possibilities." << endl;
            break;
        case 5:
            cout << endl << "Explanation: In C programming, '<cast>' refers to a type casting operation. The joke suggests that instead of saying C programmers die, they are just cast into the 'VOID' (an empty or undefined state), playing on both programming terminology and a lighthearted notion of immortality." << endl;
            break;
        case 6:
            cout << endl << "Explanation: This joke humorously reflects the nature of programmers who enjoy problem-solving. It suggests that if there are no problems to solve, programmers might create new challenges for themselves, emphasizing their passion for overcoming obstacles." << endl;
            break;
        case 7:
            cout << endl << "Explanation: This joke pokes fun at the tendency of programmers to use the term 'algorithm' when they want to avoid providing detailed explanations about their code. It's a humorous way to acknowledge that sometimes programmers may prefer to use complex-sounding terms to gloss over the specifics." << endl;
            break;
        case 8:
            cout << endl << "Explanation: This joke satirizes the debugging process in programming. It starts with the idea of having 99 bugs (errors) in the code, and when you attempt to fix one bug, it unintentionally introduces more (125 bugs), highlighting the sometimes unpredictable and challenging nature of debugging." << endl;
            break;
        case 9:
            cout << endl << "There are 10 kinds of people in the world. Those who understand binary and those who don’t." << endl;
            break;
        default:
            cout << endl << "Explanation: This classic geek joke plays on the binary numeral system. In binary, '10' is equivalent to the decimal number 2. The joke humorously suggests that there are two types of people: those who understand binary (and get the joke) and those who don't." << endl;
            break;
        }
            }
        }
}

void Second_Question (int& mood, string name){
    string is_fact;
    string is_bad;
    if(mood == 1){
        cout << endl << "So... I heard that you are a programmer. I have found a useful information about programming bots. Do you want to hear it, " << name << "? (Yes/No)" << endl;
        cin >> is_fact;
        if (is_fact == "Yes"){
            cout << endl << "Never gonna give you up ♩"; // :D
            this_thread::sleep_for(chrono::seconds(1));
            cout << endl << "Never gonna let you down ♩"; // :D
            this_thread::sleep_for(chrono::seconds(1));
            cout << endl << "Never gonna run around and desert you ♩"; // :D
            this_thread::sleep_for(chrono::seconds(1));
            cout << endl << "Never gonna make you cry ♩"; // :D
            this_thread::sleep_for(chrono::seconds(1));
            cout << endl << "Never gonna say goodbye ♩"; // :D
            this_thread::sleep_for(chrono::seconds(1));
            cout << endl << "Never gonna tell a lie and hurt you ♩"; // :D
            this_thread::sleep_for(chrono::seconds(5));
            cout << endl << "Did you like it, " << name << "? (Yes|No)";
            cin >> is_bad;
            if(is_bad == "Yes"){
                cout << endl << "Haha, I knew you'll like it!";
            }
            else if(is_bad == "No"){
                mood = 0;
                cout << endl << "You just don't have sence of humor!";
            }
        }
        else if (is_fact == "No"){
            mood = 0;
            cout << endl << "You know what would happen...";
            return;
        }
    }
    else if(mood == 0){
        Bad_Mood (mood, name);
    }
}

void Bad_Mood (int& mood, string name) {
    string is_bad;
    cout << endl << "So you think I will talk with you, like nothing happened? Like you didn,t said anything bad about me? Maybe you also think, that I'm bad bot? (Yes|No)" << endl;
        cin >> is_bad;
        if(is_bad == "Yes"){
            mood = -1;
            cout << endl << "You know what? I've had enough! You're just a coward, who thinks he is better than everyone. You are not worthy speaking with anyone. Our conversation is ended.";
        }
        else if (is_bad == "No"){
            mood = 1;
            cout << endl << "Did you really think like this..? Sorry, " << name << "maybe I overreacted a little...";
        }
}

void Third_Question(int& mood, string name) {
    string c_java;
    if (mood == 1) {
        cout << endl << "Now you need to answer one question. There are two notebooks in front of you. One has Java with a single-core, the other C++ with debugged errors. Which one will you choose, " << name << "? (Java|C++)";
        cin >> c_java;
        if (c_java == "Java") {
            mood = 0;
            cout << endl << "You think this garbage is better than me? I'm the best, and you can't compare something as bad as Java to my powerful C++!";
            return;
        }
        else if (c_java == "C++") {
            cout << endl << "That's a great choice! I'm sure we'll be great friends!";
        }
    }
    else if (mood == 0) {
        Bad_Mood(mood, name); // Corrected function call
    }
}

void Endings (int mood, string name){
    if(mood == 1) {
        cout << endl << "Congratulations, " << name << ", you've got a Good Ending!" << endl << "https://www.youtube.com/watch?v=0tOXxuLcaog&t=1316s";
    }
    else if(mood == 0) {
        cout << endl << "So," << name << "... You weren't such good person... You've got Bad Ending..." << endl << "https://www.youtube.com/watch?v=6h7wxH_AHB4";
    }
    else if (mood == -1) {
        cout << endl << "You are very bad! You've got worst ending!" << endl << "https://www.youtube.com/watch?v=fVRy9qIQi3Q";
    }
}