#include <iostream>
#include <cmath> // Include the cmath header for fmod function

using namespace std; // Use the entire std namespace

class Distance
{
private:
    int feet;
    float inches;

public:
    // Constructor
    Distance(int f = 0, float in = 0.0) : feet(f), inches(in) {}

    // Copy constructor
    Distance(const Distance &other) : feet(other.feet), inches(other.inches) {}

    // Set distance
    void setDistance(int f, float in)
    {
        feet = f;
        inches = in;
    }

    // Add distances
    void addDistance(const Distance &other)
    {
        feet += other.feet;
        inches += other.inches;
        if (inches >= 12.0)
        {
            feet += static_cast<int>(inches / 12.0);
            inches = fmod(inches, 12.0);
        }
    }

    // Display distance
    void displayDistance()
    {
        cout << "distance = " << feet << "'" << static_cast<int>(inches + 0.5) << "\"" << endl;
    }
};

int main()
{
    float feet1, inches1, feet2, inches2;

    cin >> feet1 >> inches1;
    cin >> feet2 >> inches2;

    // Create two Distance objects
    Distance d1(static_cast<int>(feet1), inches1);
    Distance d2(static_cast<int>(feet2), inches2);

    // Calculate the sum of d1 and d2
    d1.addDistance(d2);

    // Display the result
    d1.displayDistance();

    return 0;
}
