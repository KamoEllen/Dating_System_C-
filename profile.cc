#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Profile class representing a single profile in the dating system
class Profile
{
    public:
        Profile(string name, int age, string city, string country, string hobbies)
        {
            this->name = name;
            this->age = age;
            this->city = city;
            this->country = country;
            this->hobbies = hobbies;
        }

    
        string getName()
        {
            return name;
        }

        int getAge()
        {
            return age;
        }

        string getCity()
        {
            return city;
        }

        string getCountry()
        {
            return country;
        }

        string getHobbies()
        {
            return hobbies;
        }

        void setHobbies(string hobbies)
        {
            this->hobbies = hobbies;
        }

    private:
        string name; // Name of the user
        int age; // Age of the user
        string city; // City of the user
        string country; // Country of the user
        string hobbies; // Hobbies of the user
};

// DatingSystem class representing the entire dating system
class DatingSystem
{
    public:
        // Add a new profile to the system
        void addProfile(Profile* profile)
        {
            profiles.push_back(profile);
        }

        // Get the profile with the given name
        Profile* getProfile(string name)
        {
            for (int i = 0; i < profiles.size(); i++)
            {
                if (profiles[i]->getName() == name)
                {
                    return profiles[i];
                }
            }

            return NULL; // Profile not found
        }

    private:
        vector<Profile*> profiles; // Vector of profiles in the system
};

int main()
{
    DatingSystem datingSystem;

    // Input user information
    string name;
    int age;
    string city;
    string country;
    string hobbies;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your city: ";
    cin >> city;
    cout << "Enter your country: ";
    cin >> country;
    cout << "Enter your hobbies (comma-separated): ";
    cin >> hobbies;

    // Create a new profile with the user information
    Profile* profile = new Profile(name, age, city, country, hobbies);

    // Add the profile to the system
    datingSystem.addProfile(profile);

    // Get the profile for the user and display their information
    Profile* userProfile = datingSystem.getProfile(name);
    if (userProfile != NULL)
    {
        cout << "Name: " << userProfile->getName() << endl;
        cout << "Age: " << userProfile->getAge() << endl;
        cout << "City: " <<
