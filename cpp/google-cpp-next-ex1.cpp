// google-cpp-next-ex1.cpp: Eren Pinaz
// Description: Google cpp next steps Example#1

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

const double kVelocity = 200.0;
const double kGravity = 32.2;
int killed = 0;

void StartUp()
{
    cout << "Welcome to Artillery." << endl;
    cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
    cout << "You have one cannon, which you can shoot at any angle." << endl;
    cout << "You only have 10 cannonballs for this target.." << endl;
    cout << "Let's begin..." << endl;
}

double SpawnEnemy()
{
    srand(time(0));
    double distance = rand() % 1000 + 100;
    cout << "The enemy is " << distance << " feet away!!!" << endl;
    return distance;
}

double CalculateHit(double angle, int target_distance)
{
    angle = angle * 3.1415 / 180.0;

    double time_in_air = (2.0 * kVelocity * sin(angle)) / kGravity;
    double distance = round((kVelocity * cos(angle)) * time_in_air);

    return (distance - target_distance);
}

void Fire()
{
    int ammo = 10, shots = 0;
    double angle, result;
    double target_distance = SpawnEnemy();

    do
    {
        if (ammo == 0)
        {
            cout << "You are out of ammo!!!" << endl;
            break;
        }

        cout << "What angle? ";
        cin >> angle;

        ammo--;
        shots++;

        result = CalculateHit(angle, target_distance);
        if (abs(result) <= 1)
        {
            cout << "You hit him!!!" << endl;
            cout << "It took you " << shots << "shots." << endl;
            killed++;
            break;
        }
        else if (result > 0)
        {
            cout << "You under shot by " << abs(result) << endl;
        }
        else
        {
            cout << "You over shot by " << result << endl;
        }
    } while (ammo > 0);
}

int main(int argc, char const *argv[])
{
    char done;

    StartUp();
    do
    {
        Fire();
        cout << "I see another one, care to shoot again? (Y/N) " << endl;
        cin >> done;
    } while (done != 'N');

    cout << "You killed " << killed << " of the enemy." << endl;
    return 0;
}