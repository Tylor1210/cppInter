// Goal: Learn how to implement friend functions.

// Assignment: You’re developing a feature for a social media app to compare two posts by popularity. A post's popularity is calculated as:

// likes + 10 × comments

// Where likes is the number of likes and comments is the number of comments.

// Define a class named SocialMediaPost with the following members:

// An int member variable named likes.
// An int member variable named comments.
// A constructor that accepts two int arguments. The first argument should be assigned to likes, and the second argument should be assigned to comments.
// The SocialMediaPost class should declare the function getSuggested as a friend.
// Outside of the SocialMediaPost class, write a function named getSuggested that takes two pointers to SocialMediaPost objects as arguments. The function should calculate the popularity of each post (using the formula above) and return a pointer to the SocialMediaPost object with the highest popularity. If both posts have the same popularity, the function should return nullptr.


#include <iostream>
#include <iomanip>

using namespace std;

class SocialMediaPost; 
SocialMediaPost* getSuggested(SocialMediaPost* postA, SocialMediaPost* postB);

class SocialMediaPost {
private:
    // Member variables to store post data
    int likes;
    int comments;

public:
    // Constructor to initialize likes and comments
    SocialMediaPost(int l, int c) : likes(l), comments(c) {}

    // Display function (for testing purposes)
    void displayStats() const {
        cout << "(Likes: " << likes << ", Comments: " << comments << ")";
    }

    friend SocialMediaPost* getSuggested(SocialMediaPost* postA, SocialMediaPost* postB);
};

SocialMediaPost* getSuggested(SocialMediaPost* postA, SocialMediaPost* postB) {
    if (!postA || !postB) {
        // Simple error check for null pointers passed to the function
        cerr << "Error: One or both post pointers are invalid." << endl;
        return nullptr;
    }

    long long popularityA = postA->likes + (10 * postA->comments);
    long long popularityB = postB->likes + (10 * postB->comments);

    cout << "\n--- Popularity Calculation ---" << endl;
    cout << "Post A Stats "; postA->displayStats();
    cout << " -> Popularity Score: " << popularityA << endl;

    cout << "Post B Stats "; postB->displayStats();
    cout << " -> Popularity Score: " << popularityB << endl;
    cout << "----------------------------" << endl;


    if (popularityA > popularityB) {
        return postA;
    } else if (popularityB > popularityA) {
        return postB;
    } else {
        // If scores are equal, return nullptr as per the requirement
        return nullptr;
    }
}

