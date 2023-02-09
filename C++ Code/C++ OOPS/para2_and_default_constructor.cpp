#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend float Distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};
float Distance(Point p, Point q)
{
    int d;
    d = ((q.x - p.x) * (q.x - p.x)) + ((q.y - p.y) * (q.y - p.y));
    float sq = sqrt(float(d));
    cout << "Distance bwt These Two Point Is : "<<sq;
    return 0;
}
// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69
int main()
{
    Point p(23, 1);
    p.displayPoint();

    Point q(12, 6);
    q.displayPoint();

    float c = Distance(p, q);
    return 0;
}
