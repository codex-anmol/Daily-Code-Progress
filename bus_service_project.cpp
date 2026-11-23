#include <iostream>
using namespace std;

class Bus
{
public:
    int busNo;
    int seats[8];

    Bus()
    {
        for (int i = 0; i < 8; i++)
        {
            seats[i] = 0;
        }
    }

    void display()
    {
        cout << "\nBus Number: " << busNo;
        cout << "\nTotal Seats: 8\n";
    }

    void showSeats()
    {
        cout << "\nAvailable Seats:\n";

        for (int i = 0; i < 8; i++)
        {
            if (seats[i] == 0)
                cout << i + 1 << " ";
            else
                cout << "X ";

            if (i == 3)
                cout << endl;
        }

        cout << endl;
    }

    void bookSeat(int seat)
    {
        if (seat < 1 || seat > 8)
        {
            cout << "Invalid seat number!\n";
        }
        else if (seats[seat - 1] == 1)
        {
            cout << "Seat already booked!\n";
        }
        else
        {
            seats[seat - 1] = 1;
            cout << "\nSeat booked successfully!\n";
        }
    }
};

class Passenger
{
public:
    string name;
    string gender;
    int age;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Gender: ";
        cin >> gender;

        cout << "Enter Age: ";
        cin >> age;
    }

    void display()
    {
        cout << "\nPassenger Name: " << name;
        cout << "\nGender: " << gender;
        cout << "\nAge: " << age << endl;
    }
};

int main()
{
    Bus b[4];
    Passenger p;

    b[0].busNo = 1;
    b[1].busNo = 2;
    b[2].busNo = 3;
    b[3].busNo = 4;

    int choice, destination, busChoice, seat, n;

    do
    {
        cout << "\n============================\n";
        cout << "   WELCOME TO ARYA TRAVELS\n";
        cout << "============================\n";

        cout << "1. Book Ticket\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nPAGE 1: JOURNEY DETAILS\n";
            cout << "From: Jaipur\n";

            cout << "Where do you want to go?\n";
            cout << "1. Delhi\n";
            cout << "2. Mumbai\n";
            cout << "3. Sikar\n";
            cout << "4. Kota\n";

            cout << "Enter destination number: ";
            cin >> destination;

            if (destination < 1 || destination > 4)
            {
                cout << "Invalid destination!\n";
                continue;
            }

            cout << "\nPAGE 2: BUS SELECTION\n";

            for (int i = 0; i < 4; i++)
            {
                cout << "Press " << i + 1
                     << " to select Bus " << i + 1 << endl;
            }

            cout << "Enter bus number: ";
            cin >> busChoice;

            if (busChoice < 1 || busChoice > 4)
            {
                cout << "Invalid bus number!\n";
                continue;
            }

            cout << "\nSelected Bus: " << busChoice;

            cout << "\nRoute: Jaipur to ";

            if (destination == 1)
                cout << "Delhi";
            else if (destination == 2)
                cout << "Mumbai";
            else if (destination == 3)
                cout << "Sikar";
            else
                cout << "Kota";

            b[busChoice - 1].display();

            cout << "\nPAGE 3: SEAT BOOKING\n";

            b[busChoice - 1].showSeats();

            cout << "Number of passengers: ";
            cin >> n;

            if (n < 1 || n > 8)
            {
                cout << "Invalid passenger count!\n";
                continue;
            }

            for (int i = 0; i < n; i++)
            {
                cout << "\nPassenger " << i + 1 << endl;

                cout << "Enter seat number: ";
                cin >> seat;

                if (seat < 1 || seat > 8)
                {
                    cout << "Invalid seat! Try again.\n";
                    i--;
                    continue;
                }

                if (b[busChoice - 1].seats[seat - 1] == 1)
                {
                    cout << "Seat already booked! Try again.\n";
                    i--;
                    continue;
                }

                b[busChoice - 1].bookSeat(seat);

                p.input();
                cout <<"==================================================================================\n";
                cout << "\nBOOKING DETAILS\n";
                p.display();

                cout << "Bus Number: " << busChoice << endl;
                cout << "Seat Number: " << seat <<"\n"<< endl;
                cout <<"==================================================================================\n";

            }

            cout << "\nThank you! Your seat is booked.\n";
        }
        else if (choice == 0)
        {
            cout << "\nThank you for visiting Arya Travels!\n";
        }
        else
        {
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}

