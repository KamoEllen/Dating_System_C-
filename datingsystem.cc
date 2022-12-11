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

    // Create some profiles
    Profile* profile1 = new Profile("Alice", 20, "New York", "USA", "Reading, hiking, yoga");
    Profile* profile2 = new Profile("Bob", 25, "London", "UK", "Gym, running, music");
    Profile* profile3 = new Profile("Charlie", 30, "Paris", "France", "Painting, cooking, traveling");

    // Add the profiles to the system
    datingSystem.addProfile(profile1);
    datingSystem.addProfile(profile2);
    datingSystem.addProfile(profile3);

    // Get the profile for "Alice" and update her hobbies
    Profile* aliceProfile = datingSystem.getProfile("Alice");
    if (aliceProfile != NULL)
    {
        aliceProfile->setHobbies("Reading, hiking, yoga, dancing");
    }

    // Prompt the user for their name, age, city, country, and hobbies
    string name;
    int age;
    string city;
    string country;
    string hobbies;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your
