#include <iostream>
#include <vector>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

// Function to generate and return a random number within a given range
int getRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (RAND_MAX + 1.0);  // static used for efficiency, so we only calculate this value once
    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Vector of fun phrases (replace these with your 400+ fun phrases)
    vector<string> funPhrases = {
        "മരവില്ലയുടെ പട്ടികയും തുണിപ്പാട്ടും കലിപ്പ് മറികടക്കുക.",
        "കൊല്ലം കോട്ടയത്തെ പെണ്ണ് കളിപ്പ് ചെയ്യുകയും പുതിയ വിവാഹം വിചാരിക്കുക.",
        "ട്രോളിയിലെ പട്ടികയും പ്രവർത്തിക്കാനുള്ള ശക്തിയും കൊച്ചിയിൽ തെരുക്കിയിൽ അടുക്കിക്കളിപ്പ് തുടരുക.",
        // Add more fun phrases here
    };

    // Additional 200+ fun phrases
    vector<string> additionalFunPhrases = {
        "പഴം വിൻ മാത്രമല്ല മൂന്ന് മൂലകം അംഗീകരിച്ചുകൊണ്ട് നടത്തൂ.",
        "കുരുക്ക് ചെയ്യരുത്; തനിക്ക് അടിപൊളി അറിയാം.",
        "അമ്മച്ചിയെ മടങ്ങാതെ കോളിച്ചിട്ട് വിട്ടുപോയി.",
        // Add more fun phrases here
    };

    // Combine both sets of phrases
    funPhrases.insert(funPhrases.end(), additionalFunPhrases.begin(), additionalFunPhrases.end());

    // Get the size of the vector
    int numPhrases = funPhrases.size();

    // Generate a random index
    int index = getRandomNumber(0, numPhrases - 1);

    // Display the randomly selected fun phrase
    cout << "Fun Phrase of the Day:\n";
    cout << funPhrases[index] << endl;

    return 0;
}
