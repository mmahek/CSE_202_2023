#include <iostream>

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}

    Distance(int ft, int in) : feet(ft), inches(in) {}

    void set_distance(int ft, int in)
    {
        feet = ft;
        inches = in;
    }

    Distance add_distance(const Distance &other)
    {
        int total_feet = feet + other.feet;
        int total_inches = inches + other.inches;
        if (total_inches >= 12)
        {
            total_feet += total_inches / 12;
            total_inches %= 12;
        }
        return Distance(total_feet, total_inches);
    }

    void display_distance()
    {
        std::cout << "distance = " << feet << "' " << inches << "''" << std::endl;
    }
};

int main()
{
    double feet1, inches1, feet2, inches2;

    std::cout << "Enter the first distance in feet and inches (e.g., 10.0 1.0): ";
    std::cin >> feet1 >> inches1;

    std::cout << "Enter the second distance in feet and inches (e.g., 3.5 5.5): ";
    std::cin >> feet2 >> inches2;

    int total_feet1 = static_cast<int>(feet1);
    int total_feet2 = static_cast<int>(feet2);
    int total_inches1 = static_cast<int>(inches1);
    int total_inches2 = static_cast<int>(inches2);

    Distance d1(total_feet1, total_inches1);
    Distance d2(total_feet2, total_inches2);

    Distance sum = d1.add_distance(d2);

    std::cout << "The total distance is ";
    sum.display_distance();

    return 0;
}
