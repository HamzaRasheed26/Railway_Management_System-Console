#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

//______________________ Data structure ____________________________________________________________________

string password;
string notice = "No_notice";

// array size default set
const int array_size = 20;

// array for train names
string train[array_size];

// all stations that syatem have built in
const int st_size = 50;
string stations[st_size];

// arrays for stations
string ts1[array_size]; // for station 1
string ts2[array_size]; // for station 2
string ts3[array_size]; // for station 3
string ts4[array_size]; // for station 4

// by default we have four routes
int routes = 0;
int st = 0;

// arrays for trains arrival times on stations
int ts1_ath[array_size]; // for station 1 arrival hour
int ts1_atm[array_size]; // for station 1 arrival minutes
int ts2_ath[array_size]; // for station 2 arrival hour
int ts2_atm[array_size]; // for station 2 arrival minutes
int ts3_ath[array_size]; // for station 3 arrival hour
int ts3_atm[array_size]; // for station 3 arrival minutes
int ts4_ath[array_size]; // for station 4 arrival hour
int ts4_atm[array_size]; // for station 4 arrival minutes

// arrays for trains departure times from stations
int ts1_dth[array_size]; // for station 1 departure hour
int ts1_dtm[array_size]; // for station 1 departure minutes
int ts2_dth[array_size]; // for station 2 departure hour
int ts2_dtm[array_size]; // for station 2 departure minutes
int ts3_dth[array_size]; // for station 3 departure hour
int ts3_dtm[array_size]; // for station 3 departure minutes
int ts4_dth[array_size]; // for station 4 departure hour
int ts4_dtm[array_size]; // for station 4 departure minutes

// array for prices of trains tickets
int tticket[array_size];
// array for prices of trains freight rate
int tcargo[array_size];

// t means tickets buy book means cargo booked
int t = 0, book = 0;

// tickets array user can only buy four tickets
const int ticket_a = 20;

// arrays that used for buying tickets
string t_name[ticket_a]; // for train name
string from[ticket_a];   // for departure station
string to[ticket_a];     // for arrival station
int quantity[ticket_a];  // for quantity of tickets
int ticket_no[ticket_a]; // for the number of ticket
int price[ticket_a];     // for price of tickets user have to pay

// arrays for time date of ticket
float day[ticket_a], month[ticket_a], year[ticket_a];
float date[ticket_a];

// arrays that used for booking cargo
string cargo_train[ticket_a]; // for storing the name of train in which cargo is booked
string book_from[ticket_a];   // for storing the name of departure station
string book_to[ticket_a];     // for storing the name of arrival station
int weight[ticket_a];         // for weight of cargo
int c_price[ticket_a];        // for cargo deleviring price user have to pay
int booking_no[ticket_a];     // for the number of booking

// arrays for date of booking
float book_day[ticket_a], book_month[ticket_a], book_year[ticket_a];
float book_date[ticket_a];

// ___________________________ Function Prototypes _________________________________________________

void head(void);
string login_page(void);
char Admin_Menu(void);
int list_of_trains(string name, string title);
void view_train_route_detail(string name, string title, int index);
void add_train_route(void);
void set_ticket_price(int index);
void set_freight_rate(int index);
int station_schedule_menu(string name);
void train_station_check(string name, int index);
void add_notice(void);
void view_employers_data(void);
string user_menu(void);
void view_tickets_price(void);
void buy_ticket(int index);
void buying_ticket_message(char flag);
void view_freight_rate(void);
void confirming_book_cargo(char flag);
void book_cargo(int index);
void view_notice(void);
void my_tickets(void);
void sort_my_tickets(void);
void swaping_ticket(int value, int index);
void print_tickets(void);
void my_booked_cargo(void);
void sort_my_cargo(void);
void swaping_cargo_booked_arrays(int value, int index);
void print_booked_cargo(void);
void developer(void);
char edit_route(void);
void delete_route(void);
void update_array(int idx);
char modify_route(void);
void change_train_name(void);
void change_train_stations(void);
void add_station_to_array(void);
string parse_data(string line, int field);
void store_data(void);
void load_data();

// ___________________________ Main Function _______________________________________________________

main()
{
    load_data();
    string user;

    while (true) // loop for main menu
    {

        // calling login function
        user = login_page();

        // __________________________ Admin Portion ________________________
        if (user == "admin")
        {
            char option;

            while (true) // loop for admin option
            {
                system("cls");
                head();
                // calling admin menu
                option = Admin_Menu();
                system("cls");
                int sub_op;

                if (option == '1')
                {
                    // admin menu option 1 starts

                    // calling function for printing list of trains
                    sub_op = list_of_trains("Admin", "View Train Route");
                    // calling function for further train detail
                    view_train_route_detail("Admin", "View Train Route", sub_op);

                    // admin menu option 1 ends
                }
                else if (option == '2')
                {
                    // admin menu option 2 starts

                    if (routes < array_size) // if the added train is less than array size
                    {
                        // function for adding train
                        add_train_route();
                    }
                    else // if added train becomes greater than array size
                    {
                        head();
                        cout << " Admin >> Add new Train Route" << endl;
                        cout << "_____________________________________________________________" << endl;
                        cout << endl;
                        cout << " Sorry! Our system has limit of only 10 routes." << endl;
                        cout << "Press any key for continue....";
                        getch();
                        cout << endl;
                    }

                    // admin menu option 2 ends
                }
                else if (option == '3')
                {
                    // admin menu option 3 starts

                    sub_op = edit_route(); // menu of edit route

                    if (sub_op == '1') // for option 1
                    {
                        delete_route(); // deleting route
                    }
                    else if (sub_op == '2') // for option 2
                    {
                        sub_op = modify_route(); // modifying route

                        if (sub_op == '1')
                        {
                            change_train_name(); // changing train name
                        }
                        else if (sub_op == '2')
                        {
                            change_train_stations(); // changing train station
                        }
                    }

                    // admin menu option 3 ends
                }
                else if (option == '4')
                {
                    // admin menu option 3 starts

                    sub_op = list_of_trains("Admin", "View Train Route");
                    set_ticket_price(sub_op);

                    // admin menu option 3 ends
                }
                else if (option == '5')
                {
                    // admin menu option 4 starts

                    sub_op = list_of_trains("Admin", "View Train Route");
                    set_freight_rate(sub_op);

                    // admin menu option 4 ends
                }
                else if (option == '6')
                {
                    // admin menu option 5 starts

                    sub_op = station_schedule_menu("Admin");
                    train_station_check("Admin", sub_op);

                    // admin menu option 5 ends
                }
                else if (option == '7')
                {
                    // admin menu option 6 starts

                    add_notice();

                    // admin menu option 6 ends
                }
                else if (option == '8')
                {
                    // admin menu option 7 starts

                    view_employers_data();

                    // admin menu option 7 ends
                }
                else if (option == '9')
                {
                    // admin menu exit point
                    break;
                }
                else
                {
                    cout << "Invalid Input !" << endl;
                    cout << "Press any key for continue....";
                    getch();
                    cout << endl;
                }
            }
        }
        // ________________________ User Portion ______________________________________
        else if (user == "user")
        {
            string option;
            while (true)
            {
                system("cls");
                head();
                option = user_menu();
                system("cls");
                int sub_op;

                if (option == "1")
                {
                    // user menu option 1 starts

                    sub_op = list_of_trains("User", "View Train Route");
                    view_train_route_detail("User", "View Train Route", sub_op);

                    // user menu option 1 ends
                }
                else if (option == "2")
                {
                    // user menu option 2 starts

                    sub_op = station_schedule_menu("User");
                    train_station_check("User", sub_op);

                    // user menu option 2 ends
                }
                else if (option == "3")
                {
                    // user menu option 3 starts

                    view_tickets_price();

                    // user menu option 3 ends
                }
                else if (option == "4")
                {
                    // user menu option 4 starts

                    if (t == ticket_a)
                    {
                        head();
                        cout << " User >> Buy Tickets " << endl;
                        cout << "_____________________________________________________________" << endl;
                        cout << endl;
                        cout << "You cannot buy more than " << ticket_a << " tickets ! " << endl;
                        cout << "Press any key for continue....";
                        getch();
                        cout << endl;
                    }
                    else
                    {
                        sub_op = list_of_trains("User", "Buy Ticket");
                        buy_ticket(sub_op);
                    }

                    // user menu option 4 ends
                }
                else if (option == "5")
                {
                    // user menu option 5 starts

                    my_tickets();

                    // user menu option 5 ends
                }
                else if (option == "6")
                {
                    // user menu option 6 starts

                    view_freight_rate();

                    // user menu option 6 ends
                }
                else if (option == "7")
                {
                    // user menu option 7 starts

                    if (book == ticket_a)
                    {
                        head();
                        cout << " User >> Book Cargo " << endl;
                        cout << "_____________________________________________________________" << endl;
                        cout << endl;
                        cout << "You cannot book cargo  more than " << ticket_a << " times ! " << endl;
                        cout << "Press any key for continue....";
                        getch();
                        cout << endl;
                    }
                    else
                    {
                        sub_op = list_of_trains("User", "Book Cargo");
                        book_cargo(sub_op);
                    }
                    // user menu option 7 ends
                }
                else if (option == "8")
                {
                    // user menu option 8 starts

                    my_booked_cargo();

                    // user menu option 8 ends
                }
                else if (option == "9")
                {
                    // user menu option 9 starts

                    view_notice();

                    // user menu option 9 ends
                }
                else if (option == "10")
                {
                    // user menu exit point
                    break;
                }
                else
                {
                    cout << "Invalid Input !" << endl;
                    cout << "Press any key for continue....";
                    getch();
                    cout << endl;
                }
            }
        }
        // _____________________________ Logout statement ___________________________
        else if (user == "logout")
        {
            break;
        }
        // if invalid input
        else
        {
            cout << "Invalid Input!" << endl;
        }
    }
    store_data();
    developer();
}

// ________________________________ Function Definitions _____________________________________________________________________

// Railway management system head function
void head(void)
{
    cout << "*************************************************************" << endl;
    cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
    cout << "*************************************************************" << endl;
    cout << endl;
}

// login page function
string login_page(void)
{
    while (true) // loop run until user enter wrong value
    {
        system("cls");
        head();

        string login;

        cout << " Login Page >>" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << endl;
        cout << " 1- Admin " << endl;
        cout << " 2- User " << endl;
        cout << " 3- Exit " << endl;
        cout << "Your Option.....";
        cin >> login;

        if (login == "1") // if user press 1
        {
            // lines for taking password input
            cout << "Enter Password.........(123)..........:";
            string pwd;
            cin >> pwd;
            if (password == pwd) // if password is correct
            {
                return "admin";
            }
            else // if password is wrong
            {
                cout << "Invalid Password!" << endl;
                cout << "Press any key for continue....";
                getch();
                cout << endl;
            }
        }
        else if (login == "2") // if user press 2 it return user
        {
            return "user";
        }
        else if (login == "3") // if user press 3 it return logout
        {
            return "logout";
        }
        else // for wrong input
        {
            cout << "Invalid Input!";
        }
    }
}

// Admin menu page function
char Admin_Menu(void)
{
    char option;
    cout << " Admin >> Menu" << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << "Select one of the following options........" << endl;
    cout << endl;
    cout << " 1. View of all routes of trains" << endl;
    cout << " 2. Add new route of train" << endl;
    cout << " 3. Edit Route " << endl;
    cout << " 4. Set tickets prices" << endl;
    cout << " 5. Set Freight rates" << endl;
    cout << " 6. View schedule of stations" << endl;
    cout << " 7. Add important notices" << endl;
    cout << " 8. View employers data" << endl;
    cout << " 9. EXit" << endl;
    cout << endl;
    cout << "Select any option........:";
    cin >> option;
    return option;
}

// List of trains for selection of only one train from list function
int list_of_trains(string name, string title)
{

    int a = 1, op;

    head();
    // in place of "name" there we pass "user/admin" from function call
    // or in place of "title" we pass the title accordimg to our need in program
    cout << " " << name << " >> " << title << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << " Select any Train from the following....." << endl;
    cout << endl;
    cout << "Train names:" << endl;
    cout << endl;

    for (int idx = 0; idx < routes; idx++) // for printing train names from array
    {
        cout << " " << a << ". " << train[idx] << endl;
        a++;
    }

    while (true) // loop run until user eneter correct value
    {
        cout << endl;
        cout << "Select one option.....:";
        cin >> op;

        if (op > a - 1 || op <= 0) // if user enter wrong value
        {
            cout << "\nInvalid Option !" << endl;
            cout << "Again Input " << endl;
        }
        else // if correct value than break
        {
            break;
        }
    }

    return op;
}

// view train routes station name and arrival departure times function
void view_train_route_detail(string name, string title, int index)
{
    system("cls");
    index = index - 1;
    head();
    // in place of "name" there we pass "user/admin" from function call
    // or in place of "title" we pass the title accordimg to our need in program
    cout << " " << name << " >> " << title << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << " Train Name : " << train[index] << endl;
    cout << endl;

    // printing the stations name their arrival times and departure time
    cout << " Stations\tArrival\t\tDeparture " << endl;
    cout << endl;
    cout << " " << ts1[index] << "\t" << ts1_ath[index] << ":" << ts1_atm[index] << "\t\t" << ts1_dth[index] << ":" << ts1_dtm[index] << endl;
    cout << " " << ts2[index] << " \t" << ts2_ath[index] << ":" << ts2_atm[index] << "\t\t" << ts2_dth[index] << ":" << ts2_dtm[index] << endl;
    cout << " " << ts3[index] << " \t" << ts3_ath[index] << ":" << ts3_atm[index] << "\t\t" << ts3_dth[index] << ":" << ts3_dtm[index] << endl;
    cout << " " << ts4[index] << "\t" << ts4_ath[index] << ":" << ts4_atm[index] << "\t\t" << ts4_dth[index] << ":" << ts4_dtm[index] << endl;
    cout << endl;
    cout << " Press any key for continue....";
    getch();
    cout << endl;
}

// Add new train route function
void add_train_route(void)
{
    char flag = '1';
    while (flag == '1') // loop run until user want to add routes
    {
        system("cls");
        head();
        cout << " Admin >> Add new Train Route" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << endl;
        cout << " Enter train name :"; // train name
        cin >> train[routes];
        cout << "\n Station-1 name :"; // station 1 name
        cin >> ts1[routes];
        cout << " Note : use 24 hours format for input time " << endl;

        while (true) // validation on correcrt time
        {
            cout << " Arrival Time( hh:mm ) :"; // arrival time station 1
            cin >> ts1_ath[routes];             // hour
            cin >> ts1_atm[routes];             // minute
            if (ts1_ath[routes] >= 1 && ts1_ath[routes] <= 24 && ts1_atm[routes] >= 0 && ts1_atm[routes] <= 59)
            {
                break;
            }
            cout << " Invalid Time ! " << endl;
        }
        while (true) // validation on correcrt time
        {
            cout << " Departure Time( hh:mm ) :"; // arrival time station 1
            cin >> ts1_dth[routes];               // hour
            cin >> ts1_dtm[routes];               // minute
            if (ts1_dth[routes] >= 1 && ts1_dth[routes] <= 24 && ts1_dtm[routes] >= 0 && ts1_dtm[routes] <= 59)
            {
                break;
            }
            cout << " Invalid Time ! " << endl;
        }

        cout << "\n Station-2 name :"; // station 2 name
        cin >> ts2[routes];
        while (true) // validation on correcrt time
        {
            cout << " Arrival Time( hh:mm ) :"; // arrival time station 2
            cin >> ts2_ath[routes];             // hour
            cin >> ts2_atm[routes];             // minute
            if (ts2_ath[routes] >= 1 && ts2_ath[routes] <= 24 && ts2_atm[routes] >= 0 && ts2_atm[routes] <= 59)
            {
                break;
            }
            cout << " Invalid Time ! " << endl;
        }
        while (true) // validation on correcrt time
        {
            cout << " Departure Time( hh:mm ) :"; // arrival time station 2
            cin >> ts2_dth[routes];               // hour
            cin >> ts2_dtm[routes];               // minute
            if (ts2_dth[routes] >= 1 && ts2_dth[routes] <= 24 && ts2_dtm[routes] >= 0 && ts2_dtm[routes] <= 59)
            {
                break;
            }
            cout << " Invalid Time ! " << endl;
        }

        cout << "\n Station-3 name :"; // station 3 name
        cin >> ts3[routes];
        while (true) // validation on correcrt time
        {
            cout << " Arrival Time( hh:mm ) :"; // arrival time station 3
            cin >> ts3_ath[routes];             // hour
            cin >> ts3_atm[routes];             // minute
            if (ts3_ath[routes] >= 1 && ts3_ath[routes] <= 24 && ts3_atm[routes] >= 0 && ts3_atm[routes] <= 59)
            {
                break;
            }
            cout << " Invalid Time ! " << endl;
        }
        while (true) // validation on correcrt time
        {
            cout << " Departure Time( hh:mm ) :"; // arrival time station 3
            cin >> ts3_dth[routes];               // hour
            cin >> ts3_dtm[routes];               // minute
            if (ts3_dth[routes] >= 1 && ts3_dth[routes] <= 24 && ts3_dtm[routes] >= 0 && ts3_dtm[routes] <= 59)
            {
                break;
            }
            cout << " Invalid Time ! " << endl;
        }

        cout << "\n Station-4 name :"; // station 4 name
        cin >> ts4[routes];
        while (true) // validation on correcrt time
        {
            cout << " Arrival Time( hh:mm ) :"; // arrival time station 2
            cin >> ts4_ath[routes];             // hour
            cin >> ts4_atm[routes];             // minute
            if (ts4_ath[routes] >= 1 && ts4_ath[routes] <= 24 && ts4_atm[routes] >= 0 && ts4_atm[routes] <= 59)
            {
                break;
            }
            cout << " Invalid Time ! " << endl;
        }
        while (true) // validation on correcrt time
        {
            cout << " Departure Time( hh:mm ) :"; // arrival time station 2
            cin >> ts4_dth[routes];               // hour
            cin >> ts4_dtm[routes];               // minute
            if (ts4_dth[routes] >= 1 && ts4_dth[routes] <= 24 && ts4_dtm[routes] >= 0 && ts4_dtm[routes] <= 59)
            {
                break;
            }
            cout << " Invalid Time ! " << endl;
        }

        while (true) // validation on correcrt ticket price
        {
            cout << " Set Ticket Price :"; // ticket price for train
            cin >> tticket[routes];

            if (tticket[routes] <= 2000 && tticket[routes] > 100) // must be less than 2000 and greater than 100
            {
                break;
            }
            cout << " Train Ticket Price Cannot be greater than 2000 Rs and cannot be less than 100 Rs. " << endl;
        }

        while (true) // validation on correcrt cargo price
        {
            cout << " Set cargo rate per kg :"; // cargo rate for that train
            cin >> tcargo[routes];

            if (tcargo[routes] <= 500 && tcargo[routes] > 0) // must be less than 500 and greater than 0
            {
                break;
            }
            cout << " Price must be less than 500 per kg and greater than 0." << endl;
        }

        cout << endl;
        cout << "*** New Route Successfully Added ***" << endl;
        add_station_to_array(); // calling an functin for adding station to stations array

        routes++; // increament in route counter

        cout << " Press 1 for adding another route or any other for exit : ";
        cin >> flag;
    }
}

// set ticket prices function
void set_ticket_price(int index)
{
    index--;
    system("cls");
    head();
    cout << " Admin >> Set Ticket Prices" << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << "Train Name : " << train[index] << endl;
    cout << "Old ticket price is : " << tticket[index] << endl; // old price of ticket
    while (true)
    {
        cout << "Enter new ticket price :"; // taking input new price of ticket
        cin >> tticket[index];

        if (tticket[index] <= 2000 && tticket[index] >= 100) // must be less than 2000 and greater than 100
        {

            break;
        }
        cout << "You can not enter price more than 2000 and less than 100. " << endl;
    }
}

// set freight prices of trains function
void set_freight_rate(int index)
{
    index--;
    system("cls");
    head();
    cout << " Admin >> Set Freight Rate " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << "Train Name : " << train[index] << endl;
    cout << endl;
    cout << "Old cargo rate of train : " << tcargo[index] << endl; // old price of cargo
    while (true)
    {
        cout << "Enter new cargo rate per kg :"; // taking input new price of cargo
        cin >> tcargo[index];
        if (tcargo[index] <= 500 && tcargo[index] > 0) // must be less than 500 and greater than 0
        {
            break;
        }
        cout << "You cannot enter rate more than 500 per kg and less than 0." << endl;
    }
}

// view station schedule that wich trains come on station function
int station_schedule_menu(string name)
{

    head();
    // in place of "name" there we pass "user/admin" from function call
    cout << " " << name << " >> View Station Schedule  " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "Select any from available stations......" << endl;
    // stations name available
    int a = 1;

    // loop for showing all stations name from array
    for (int idx = 0; idx < st; idx++)
    {
        cout << " " << a << ". " << stations[idx] << endl;
        a++;
    }
    char sub_op;

    while (true) // loop run until user enter correct option
    {
        cout << "Your Option.....:";
        cin >> sub_op;

        if (sub_op >= '1' && sub_op <= a + 47) // if option is correct than break
        {
            break;
        }
        else // if option is incorrect than take input again
        {
            cout << "\nInvalid option ! " << endl;
            cout << "Again select the option " << endl;
        }
    }
    int op = sub_op - 48;
    return op;
}

// function for serching the given stations in the stations of trains
void train_station_check(string name, int index)
{
    index--;
    system("cls");
    head();
    // in place of "name" there we pass "user/admin" from function call
    cout << " " << name << " >> View Station Schedule " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << "Station Name : " << stations[index] << endl;
    cout << endl;
    cout << "Train Name\t\tArrival\tDeparture " << endl;

    for (int idx = 0; idx < array_size; idx++) // loop run for all train station array
    {
        if (stations[index] == ts1[idx]) // it search the required station in ts1 array
        {
            cout << train[idx] << "\t\t" << ts1_ath[idx] << ":" << ts1_atm[idx] << "\t" << ts1_dth[idx] << ":" << ts1_dtm[idx] << endl;
        }
        if (stations[index] == ts2[idx]) // it search the required station in ts2 array
        {
            cout << train[idx] << "\t\t" << ts1_ath[idx] << ":" << ts1_atm[idx] << "\t" << ts1_dth[idx] << ":" << ts1_dtm[idx] << endl;
        }
        if (stations[index] == ts3[idx]) // it search the required station in ts3 array
        {
            cout << train[idx] << "\t\t" << ts1_ath[idx] << ":" << ts1_atm[idx] << "\t" << ts1_dth[idx] << ":" << ts1_dtm[idx] << endl;
        }
        if (stations[index] == ts4[idx]) // it search the required station in ts4 array
        {
            cout << train[idx] << "\t\t" << ts1_ath[idx] << ":" << ts1_atm[idx] << "\t" << ts1_dth[idx] << ":" << ts1_dtm[idx] << endl;
        }
    }
    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// Function for posting notices for user
void add_notice(void)
{

    head();

    cout << " Admin >> Add Notice " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "Write your notice here.....:" << endl;
    cout << endl;
    cin.ignore();
    getline(cin, notice); // string varaible for taking  notice as input

    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// this function is hardcode its only print data of employers
// we cannot edit this data
void view_employers_data(void)
{
    head();

    cout << " Admin >> View Employers Data " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "      Train Drivers  " << endl;
    cout << " 1. Ahmed       2. Sajid   " << endl;
    cout << " 3. Ali         4. Akhtar  " << endl;
    cout << " 5. Hamid       6. Asif    " << endl;
    cout << endl;
    cout << "      Train Police" << endl;
    cout << " 1. Inspector Hassan" << endl;
    cout << " 2. Sub Inspector Faheem" << endl;
    cout << " 3. Sub Inspector Qasim" << endl;
    cout << " 4. Sub Inspector Umar" << endl;
    cout << " 5. Sub Inspector Taha" << endl;
    cout << endl;
    cout << "     Station Incharge" << endl;
    cout << " 1. Babar" << endl;
    cout << " 2. Rizwan" << endl;
    cout << " 3. Fakhar" << endl;
    cout << " 4. Asim" << endl;
    cout << " 5. Zia" << endl;
    cout << " 6. Zohaib" << endl;
    cout << " 7. Talha" << endl;

    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// function for showing user menu on screen
string user_menu(void)
{
    string option;
    cout << " User >> Menu" << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "Select one of the following options........" << endl;
    cout << endl;
    cout << " 1. View of all routes of trains" << endl;
    cout << " 2. View Stations Schedule" << endl;
    cout << " 3. View tickets prices" << endl;
    cout << " 4. Buy Tickets" << endl;
    cout << " 5. View My Tickets" << endl;
    cout << " 6. View Freight Rates" << endl;
    cout << " 7. Book Cargo" << endl;
    cout << " 8. View My Booked Cargo" << endl;
    cout << " 9. View Notices" << endl;
    cout << " 10. EXit" << endl;
    cout << endl;
    cout << "Select any option........:";
    cin >> option;
    return option;
}

// function for viewing tickets pries of trains
void view_tickets_price(void)
{
    head();

    cout << " User >> View Tickets Price " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "Train Name\t\tTicket Price" << endl;
    cout << endl;

    int a = 1;
    // prints all train names with their tickets prices
    for (int idx = 0; idx < routes; idx++)
    {
        cout << " " << a << ". " << train[idx] << "\t\t" << tticket[idx] << endl;
        a++;
    }
    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// function for buying ticket of train
void buy_ticket(int index)
{
    index--;
    t_name[t] = train[index];

    system("cls");
    head();

    cout << " User >> Buy Tickets " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << "Train Name :" << t_name[t] << endl;

    // this line print the stations name that are available on this train route
    cout << "_____________________________________________________________" << endl;
    cout << "Stations available :" << endl;
    cout << " 1." << ts1[index] << "\t 2." << ts2[index] << endl;
    cout << " 3." << ts3[index] << "\t 4." << ts4[index] << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << " Select the station from above...\n"
         << endl;

    while (true) // this loop run until user enter correct value
    {
        cout << " From Station :";
        cin >> from[t];
        // check station name entered by user is valid or not
        if (from[t] == ts1[index] || from[t] == ts2[index] || from[t] == ts3[index] || from[t] == ts4[index])
        {
            break;
        }
        else // if station name does not match
        {
            cout << " Invalid Station Name !" << endl;
            cout << " Again Input " << endl;
        }
    }
    while (true) // this loop run until user enter correct value
    {
        cout << " To Station :";
        cin >> to[t];
        // check station name entered by user is valid or not
        if (to[t] == ts1[index] || to[t] == ts2[index] || to[t] == ts3[index] || to[t] == ts4[index])
        {
            break;
        }
        else // if station name does not match
        {
            cout << " Invalid Station Name !" << endl;
            cout << " Again Input " << endl;
        }
    }

    while (true) // validation for date
    {
        cout << " Enter date ( dd mm yyyy):";
        cin >> day[t];
        cin >> month[t];
        cin >> year[t];

        // check on year
        if (year[t] == 2022)
        {
            // check on month
            if (month[t] == 1 || month[t] == 3 || month[t] == 5 || month[t] == 7 || month[t] == 8 || month[t] == 10 || month[t] == 12)
            {
                // check on day range from 1 to 31
                if (day[t] >= 1 && day[t] <= 31)
                {
                    break;
                }
            }
            // check on month
            else if (month[t] == 4 || month[t] == 6 || month[t] == 9 || month[t] == 11)
            {
                // check on  day range from 1 to 30
                if (day[t] >= 1 && day[t] <= 30)
                {
                    break;
                }
            }
            // check on month of febuary
            else if (month[t] == 2)
            {
                // check on day range from 1 to 28
                if (day[t] >= 1 && day[t] <= 28)
                {
                    break;
                }
            }
        }
        cout << "\n Invalid Date ! " << endl;
        cout << " Again enter date please." << endl;
    }

    cout << " Ticket price is :" << tticket[index] << endl;

    while (true) // validation for quantity
    {
        cout << " Enter quantity of tickets :";
        cin >> quantity[t];

        if (quantity[t] > 12 || quantity[t] <= 0) // quantity cannot be greater than 12
        {
            cout << " Error You cannot buy more than 12 quantity ! " << endl;
        }
        else
        {
            break;
        }
    }

    price[t] = tticket[index] * quantity[t];

    cout << "Total price for " << quantity[t] << " tickets :" << price[t] << endl;
    // confirming for buying ticket
    cout << "You want to buy Ticket (1 for yes, 0 for not) :";
    char op;
    cin >> op;

    buying_ticket_message(op);
}

// function for printing on screen that ticket buyed
void buying_ticket_message(char flag)
{
    if (flag == '1') // message of buying ticket
    {
        system("cls");
        head();
        cout << " User >> Buy Tickets " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << endl;
        cout << " You buy Ticket Succesfully ***" << endl;
        cout << endl;
        cout << "  Train Name :" << t_name[t] << endl;
        cout << "  From station :" << from[t] << endl;
        cout << "  To station :" << to[t] << endl;
        cout << "  Date  :" << day[t] << "-" << month[t] << "-" << year[t] << endl;
        cout << "  Quantity :" << quantity[t] << endl;
        cout << "  Price :" << price[t] << endl;
        cout << endl;
        cout << " ****Thanks for buying Ticket****" << endl;
        date[t] = day[t] + (month[t] * 30.417);

        ticket_no[t] = t + 1;

        t++;
    }
    else // if not buyed creating arrays values null
    {
        t_name[t] = " ";
        from[t] = " ", to[t] = " ";
        day[t] = 0, month[t] = 0, year[t] = 0;
        date[t] = 0;
        cout << endl;
        cout << " Ticket not Buyed !" << endl;
    }

    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// function for displaying prices of freight/cargo
void view_freight_rate(void)
{
    head();
    cout << " User >> View Freight Rates " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << "Train Name\t\tRate/kg   " << endl;
    cout << endl;

    int a = 1;
    // prints all train names with their tickets prices
    for (int idx = 0; idx < routes; idx++)
    {
        cout << " " << a << ". " << train[idx] << "\t" << tcargo[idx] << endl;
        a++;
    }

    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// function for booking cargo
void book_cargo(int index)
{
    index--;
    system("cls");
    head();
    cout << " User >> Book Cargo " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << "Train Name :" << train[index] << endl;
    cargo_train[book] = train[index];

    // this line print the stations name that are available on this train route
    cout << "_____________________________________________________________" << endl;
    cout << "Stations available :" << endl;
    cout << " 1." << ts1[index] << "\t 2." << ts2[index] << endl;
    cout << " 3." << ts3[index] << "\t 4." << ts4[index] << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << " Select the station from above...\n"
         << endl;

    while (true) // this loop run until user enter correct value
    {
        cout << " From Station :";
        cin >> book_from[book];
        // check station name entered by user is valid or not
        if (book_from[book] == ts1[index] || book_from[book] == ts2[index] || book_from[book] == ts3[index] || book_from[book] == ts4[index])
        {
            break;
        }
        else // if station name does not match
        {
            cout << " Invalid Station Name !" << endl;
            cout << " Again Input " << endl;
        }
    }
    while (true) // this loop run until user enter correct value
    {
        cout << " To Station :";
        cin >> book_to[book];
        // check station name entered by user is valid or not
        if (book_to[book] == ts1[index] || book_to[book] == ts2[index] || book_to[book] == ts3[index] || book_to[book] == ts4[index])
        {
            break;
        }
        else // if station name does not match
        {
            cout << " Invalid Station Name !" << endl;
            cout << " Again Input " << endl;
        }
    }

    while (true) // validation for date
    {
        cout << " Enter date ( dd mm yyyy):";
        cin >> book_day[book];
        cin >> book_month[book];
        cin >> book_year[book];

        int d = book_day[book];
        int m = book_month[book];
        int y = book_year[book];

        // check on year
        if (y == 2022)
        {
            // check on month
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            {
                // check on day range from 1 to 31
                if (d >= 1 && d <= 31)
                {
                    break;
                }
            }
            // check on month
            else if (m == 4 || m == 6 || m == 9 || m == 11)
            {
                // check on  day range from 1 to 30
                if (d >= 1 && d <= 30)
                {
                    break;
                }
            }
            // check on month of febuary
            else if (m == 2)
            {
                // check on day range from 1 to 28
                if (d >= 1 && d <= 28)
                {
                    break;
                }
            }
        }
        cout << "\n Invalid Date ! " << endl;
        cout << " Again enter date please." << endl;
    }
    cout << endl;
    cout << "Price per kg :" << tcargo[index] << endl;

    while (true) // validation on weight
    {
        cout << "Enter the cargo weight (kg) :";
        cin >> weight[book];

        if (weight[book] > 500 || weight[book] <= 0) // user canot enter more than 500 kg weight
        {
            cout << "You can not add weight more than 500 kg ! " << endl;
            cout << "Again Input " << endl;
        }
        else // if less than 500
        {
            break;
        }
    }

    // calculkating cargo price by formula
    c_price[book] = tcargo[index] * weight[book];

    cout << endl;
    cout << "You have to pay :" << c_price[book] << endl;
    cout << "You want to book cargo (1 for yes, 0 for not) :";
    char op;
    cin >> op;
    confirming_book_cargo(op);
}

// function for printing on screen that cargo booked or not
void confirming_book_cargo(char flag)
{
    if (flag == '1') // message of cargo booked
    {
        cout << endl;
        system("cls");
        head();
        cout << " User >> Booked cargo " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << endl;
        cout << " Your Cargo Booked Succesfully ***" << endl;
        cout << endl;
        cout << "  Train Name   :" << cargo_train[book] << endl;
        cout << "  From station :" << book_from[book] << endl;
        cout << "  To station   :" << book_to[book] << endl;
        cout << "  Date         :" << book_day[book] << "-" << book_month[book] << "-" << book_year[book] << endl;
        cout << "  Weight       :" << weight[book] << endl;
        cout << "  Price        :" << c_price[book] << endl;
        cout << endl;
        cout << " **** Your cargo succesfully booked ***" << endl;
        book_date[book] = book_day[book] + (book_month[book] * 30.417);
        booking_no[book] = book + 1;

        cout << endl;
        book++;
    }
    else // if not booked creating arrays index null
    {
        weight[book] = 0;
        c_price[book] = 0;
        cout << endl;
        cout << " Your cargo not booked ! " << endl;
        cout << endl;
    }

    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// function for viewing notice
void view_notice(void)
{
    head();
    cout << " User >> View Notice " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << "Notice Board......" << endl;
    cout << endl;
    cout << notice; // string notice variable

    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// function for viewing my tickets
void my_tickets(void)
{
    head();
    cout << " User >> My Tickets " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;

    sort_my_tickets(); // calling function for sorting

    print_tickets(); // calling function for displaying tickets

    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// this function sort the tickets according to the date which comes first
void sort_my_tickets(void)
{
    int min;
    int index = 0;
    for (int idx = 0; idx < t; idx++) // it takes value from array and compare with inner loop value
    {
        min = 112122221; // imaginary minimum vlue
        for (int x = idx; x < t; x++)
        {
            if (min > date[x]) // if the selected array value is minimum
            {
                min = date[x];
                index = x; // storing the index at which we find minimum
            }
        }

        swaping_ticket(idx, index); // calling function for swaping
    }
}

// function for swaping the values of parallel arrays
void swaping_ticket(int value, int idx)
{
    // temporary variables
    float temp;
    string change;

    // swaping date
    temp = date[idx];
    date[idx] = date[value];
    date[value] = temp;

    // swaping train name
    change = t_name[idx];
    t_name[idx] = t_name[value];
    t_name[value] = change;

    // swaping departure station
    change = from[idx];
    from[idx] = from[value];
    from[value] = change;

    // swaping arrival station
    change = to[idx];
    to[idx] = to[value];
    to[value] = change;

    // swaping day
    temp = day[idx];
    day[idx] = day[value];
    day[value] = temp;

    // swaping month
    temp = month[idx];
    month[idx] = month[value];
    month[value] = temp;

    // swaping year
    temp = year[idx];
    year[idx] = year[value];
    year[value] = temp;

    // swaping quantity
    temp = quantity[idx];
    quantity[idx] = quantity[value];
    quantity[value] = temp;

    // swaping price
    temp = price[idx];
    price[idx] = price[value];
    price[value] = temp;

    // swaping ticket number
    temp = ticket_no[idx];
    ticket_no[idx] = ticket_no[value];
    ticket_no[value] = temp;
}

// function for displaying tickets on screen
void print_tickets(void)
{
    int flag = 0;
    for (int idx = 0; idx < ticket_a; idx++) // loop run for booked cargo
    {
        // if ticket is buyed
        if (date[idx] != 0) // if date is not equal to zero
        {
            cout << "  *** Ticket no. " << ticket_no[idx] << " ***" << endl;
            cout << "   Train    : " << t_name[idx] << endl;
            cout << "   From     : " << from[idx] << endl;
            cout << "   To       : " << to[idx] << endl;
            cout << "   Date     : " << day[idx] << "-" << month[idx] << "-" << year[idx] << endl;
            cout << "   Quantity : " << quantity[idx] << endl;
            cout << "   Price    : " << price[idx] << endl;
            cout << endl;
            cout << endl;
            flag++;
        }
    }

    // if no ticket is buyed
    if (flag == 0)
    {
        cout << "  You Have No Tickets ! " << endl;
    }
}

void my_booked_cargo(void)
{
    head();
    cout << " User >> My Booked Cargo " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;

    sort_my_cargo(); // calling function for sorting

    print_booked_cargo(); // calling function for displaying tickets

    cout << endl;
    cout << "  Press any key for continue....";
    getch();
    cout << endl;
}

void sort_my_cargo(void)
{
    int min;
    int index = 0;
    for (int idx = 0; idx < t; idx++) // it takes value from array and compare with inner loop value
    {
        min = 112122221; // imaginary minimum value
        for (int x = idx; x < 4; x++)
        {
            if (min > book_date[x]) // if the selected array value is minimum
            {
                min = book_date[x];
                index = x; // storing the index at which we find minimum
            }
        }

        swaping_cargo_booked_arrays(idx, index); // calling function for swaping
    }
}

void swaping_cargo_booked_arrays(int value, int index)
{
    // temporary variables
    float temp;
    string change;

    // swaping date
    temp = book_date[index];
    book_date[index] = book_date[value];
    book_date[value] = temp;

    // swaping train name
    change = cargo_train[index];
    cargo_train[index] = cargo_train[value];
    cargo_train[value] = change;

    // swaping departure station
    change = book_from[index];
    book_from[index] = book_from[value];
    book_from[value] = change;

    // swaping arrival station
    change = book_to[index];
    book_to[index] = book_to[value];
    book_to[value] = change;

    // swaping day
    temp = book_day[index];
    book_day[index] = book_day[value];
    book_day[value] = temp;

    // swaping month
    temp = book_month[index];
    book_month[index] = book_month[value];
    book_month[value] = temp;

    // swaping year
    temp = book_year[index];
    book_year[index] = book_year[value];
    book_year[value] = temp;

    // swaping quantity
    temp = weight[index];
    weight[index] = weight[value];
    weight[value] = temp;

    // swaping price
    temp = c_price[index];
    c_price[index] = c_price[value];
    c_price[value] = temp;
}

// function for displaying booked cargo on screen
void print_booked_cargo(void)
{
    int flag = 0;
    for (int idx = 0; idx < ticket_a; idx++) // loop run for booked cargo
    {
        // if ticket is buyed
        if (book_date[idx] != 0) // if date is not equal to zero
        {
            cout << "  *** Booking no. " << booking_no[idx] << " ***" << endl;
            cout << "   Train  : " << cargo_train[idx] << endl;
            cout << "   From   : " << book_from[idx] << endl;
            cout << "   To     : " << book_to[idx] << endl;
            cout << "   Date   : " << book_day[idx] << "-" << book_month[idx] << "-" << book_year[idx] << endl;
            cout << "   Weight : " << weight[idx] << endl;
            cout << "   Price  : " << c_price[idx] << endl;
            cout << endl;
            cout << endl;
            flag++;
        }
    }

    // if no ticket is buyed
    if (flag == 0)
    {
        cout << "  You Have No Cargo Booked ! " << endl;
    }
}

// functoin for developer name
void developer(void)
{
    system("cls");
    cout << endl
         << endl
         << endl;
    cout << "************** THANKS FOR USING RAILWAY MANAGEMENT SYSTEM ***************" << endl;
    cout << "*                                                                       *" << endl;
    cout << "*            Developer : *** Hamza Rasheed 2021-CS-26  ***              *" << endl;
    cout << "*                                                                       *" << endl;
    cout << "*************************************************************************";
    cout << endl;
}

// function for edit already exist route
char edit_route(void)
{
    char option;
    head();
    cout << " Admin >> Edit Route " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;

    cout << " 1. Delete Route " << endl;
    cout << " 2. Modify Route " << endl;
    cout << " 3. Exit " << endl;

    while (true) // validation on option
    {
        cout << "\n Your Option : ";
        cin >> option;

        if (option >= '1' && option <= '3')
        {
            return option; // return option selected
        }
        cout << " Invalid Option! " << endl;
        cout << " Again Input " << endl;
    }
}

// function for daleting already exist route
void delete_route(void)
{
    system("cls");
    int op;
    char flag;

    // calling lists of routes
    op = list_of_trains("Admin", "Delete Route");

    op = op - 1;

    cout << endl;
    // asking are you sure
    cout << "Are you sure you want to delete the route! " << endl;
    cout << "Press 1 for Yes or Press any key for Not " << endl;
    cin >> flag;

    if (flag == '1') // if he want to delete route
    {
        cout << "\n Route : " << train[op] << endl;
        cout << " *** Deleted Successfully *** " << endl;
        train[op] = "\0"; // making train name null

        // making stations name null
        ts1[op] = "\0";
        ts2[op] = "\0";
        ts3[op] = "\0";
        ts4[op] = "\0";

        // making station 1 times zero
        ts1_ath[op] = 0;
        ts1_atm[op] = 0;
        ts1_dth[op] = 0;
        ts1_dtm[op] = 0;

        // making station 2 times zero
        ts2_ath[op] = 0;
        ts2_atm[op] = 0;
        ts2_dth[op] = 0;
        ts2_dtm[op] = 0;

        // making station 3 times zero
        ts3_ath[op] = 0;
        ts3_atm[op] = 0;
        ts3_dth[op] = 0;
        ts3_dtm[op] = 0;

        // making station 4 times zero
        ts4_ath[op] = 0;
        ts4_atm[op] = 0;
        ts4_dth[op] = 0;
        ts4_dtm[op] = 0;

        // making prices null
        tticket[op] = 0;
        tcargo[op] = 0;

        update_array(op); // and updating all arrays
    }
    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// function for updating all arrays after deleting one route
void update_array(int op)
{
    for (int x = op; x < routes - 1; x++)
    {
        // intializing deleted index route with its next index route

        // train names
        train[op] = train[op + 1];

        // stations names
        ts1[op] = ts1[op + 1];
        ts2[op] = ts2[op + 1];
        ts3[op] = ts3[op + 1];
        ts4[op] = ts4[op + 1];

        // station 1 times
        ts1_ath[op] = ts1_ath[op + 1];
        ts1_atm[op] = ts1_atm[op + 1];
        ts1_dth[op] = ts1_dth[op + 1];
        ts1_dtm[op] = ts1_dtm[op + 1];

        // station 2 times
        ts2_ath[op] = ts2_ath[op + 1];
        ts2_atm[op] = ts2_atm[op + 1];
        ts2_dth[op] = ts2_dth[op + 1];
        ts2_dtm[op] = ts2_dtm[op + 1];

        // station 3 times
        ts3_ath[op] = ts3_ath[op + 1];
        ts3_atm[op] = ts3_atm[op + 1];
        ts3_dth[op] = ts3_dth[op + 1];
        ts3_dtm[op] = ts3_dtm[op + 1];

        // station 4 times
        ts4_ath[op] = ts4_ath[op + 1];
        ts4_atm[op] = ts4_atm[op + 1];
        ts4_dth[op] = ts4_dth[op + 1];
        ts4_dtm[op] = ts4_dtm[op + 1];

        // prices
        tticket[op] = tticket[op + 1];
        tcargo[op] = tcargo[op + 1];
    }
    routes--;
}

// function for mofdify all ready exist train route
char modify_route(void)
{
    system("cls");
    head();
    cout << " Admin >> Modify Route " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << endl;
    cout << " 1. Change Train Name " << endl;
    cout << " 2. Change Stations " << endl;
    cout << " 3. Exit " << endl;
    char op;
    while (true) // validation on option
    {
        cout << " Your Option... : ";
        cin >> op;

        if (op >= '1' && op <= '3')
        {
            return op;
        }
    }
}

// Function for changing already exist Train name
void change_train_name(void)
{
    system("cls");
    int idx, a = 1;
    idx = list_of_trains("Admin", "Moify Route");

    idx--;
    cout << "\n\n";
    cout << " Old Train Name " << train[idx] << endl; // old train name

    while (true)
    {
        a = 1;
        cout << " Enter New train name ";
        cin >> train[idx]; // taking input of new trin name

        for (int x = 0; x < routes; x++)
        {
            if (x == idx) // if user input same old name than continue
            {
                break;
            }
            if (train[x] == train[idx]) // if the name alredy exist in array give error
            {
                cout << endl;
                cout << " This Train already exist !" << endl;
                cout << " Enter another name " << endl;
                a = 0;
            }
        }

        if (a == 1) // if name met all conditions than change name
        {
            break;
        }
    }

    cout << " Train name changed Succesfully." << endl;
    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// function for changing stations of alraedy exist train route
void change_train_stations(void)
{
    system("cls");
    int idx;
    idx = list_of_trains("Admin", "Moify Route");
    idx = idx - 1;

    cout << endl;
    cout << "Train Name : " << train[idx] << endl;

    cout << "Old Station 1 Name : " << ts1[idx] << endl;
    cout << "New Station-1 name :"; // station 1 name
    cin >> ts1[idx];
    cout << "Note : use 24 hours format for input time " << endl;

    while (true)
    {
        cout << "Arrival Time( hh:mm ) :"; // arrival time station 1
        cin >> ts1_ath[idx];               // hour
        cin >> ts1_atm[idx];               // minute
        if (ts1_ath[idx] >= 1 && ts1_ath[idx] <= 24 && ts1_atm[idx] >= 0 && ts1_atm[idx] <= 59)
        {
            break;
        }
        cout << " Invalid Time ! " << endl;
    }

    while (true)
    {
        cout << "Departure Time( hh:mm ) :"; // arrival time station 1
        cin >> ts1_dth[idx];                 // hour
        cin >> ts1_dtm[idx];                 // minute
        if (ts1_dth[idx] >= 1 && ts1_dth[idx] <= 24 && ts1_dtm[idx] >= 0 && ts1_dtm[idx] <= 59)
        {
            break;
        }
        cout << " Invalid Time ! " << endl;
    }

    cout << "Old Station 2 Name : " << ts2[idx] << endl;
    cout << "New Station-2 name :"; // station 2 name
    cin >> ts2[idx];

    while (true)
    {
        cout << "Arrival Time( hh:mm ) :"; // arrival time station 1
        cin >> ts2_ath[idx];               // hour
        cin >> ts2_atm[idx];               // minute
        if (ts2_ath[idx] >= 1 && ts2_ath[idx] <= 24 && ts2_atm[idx] >= 0 && ts2_atm[idx] <= 59)
        {
            break;
        }
        cout << " Invalid Time ! " << endl;
    }

    while (true)
    {
        cout << "Departure Time( hh:mm ) :"; // arrival time station 1
        cin >> ts2_dth[idx];                 // hour
        cin >> ts2_dtm[idx];                 // minute
        if (ts2_dth[idx] >= 1 && ts2_dth[idx] <= 24 && ts2_dtm[idx] >= 0 && ts2_dtm[idx] <= 59)
        {
            break;
        }
        cout << " Invalid Time ! " << endl;
    }

    cout << "Old Station 3 Name : " << ts2[idx];
    cout << "New Station-3 name :"; // station 3 name
    cin >> ts3[routes];

    while (true)
    {
        cout << "Arrival Time( hh:mm ) :"; // arrival time station 1
        cin >> ts3_ath[idx];               // hour
        cin >> ts3_atm[idx];               // minute
        if (ts3_ath[idx] >= 1 && ts3_ath[idx] <= 24 && ts3_atm[idx] >= 0 && ts3_atm[idx] <= 59)
        {
            break;
        }
        cout << " Invalid Time ! " << endl;
    }

    while (true)
    {
        cout << "Departure Time( hh:mm ) :"; // arrival time station 1
        cin >> ts2_dth[idx];                 // hour
        cin >> ts2_dtm[idx];                 // minute
        if (ts2_dth[idx] >= 1 && ts2_dth[idx] <= 24 && ts2_dtm[idx] >= 0 && ts2_dtm[idx] <= 59)
        {
            break;
        }
        cout << " Invalid Time ! " << endl;
    }

    cout << "Old Station 4 Name : " << ts2[idx];
    cout << "Station-4 name :"; // station 4 name
    cin >> ts4[routes];

    while (true)
    {
        cout << "Arrival Time( hh:mm ) :"; // arrival time station 1
        cin >> ts4_ath[idx];               // hour
        cin >> ts4_atm[idx];               // minute
        if (ts4_ath[idx] >= 1 && ts4_ath[idx] <= 24 && ts4_atm[idx] >= 0 && ts4_atm[idx] <= 59)
        {
            break;
        }
        cout << " Invalid Time ! " << endl;
    }

    while (true)
    {
        cout << "Departure Time( hh:mm ) :"; // arrival time station 1
        cin >> ts2_dth[idx];                 // hour
        cin >> ts2_dtm[idx];                 // minute
        if (ts2_dth[idx] >= 1 && ts2_dth[idx] <= 24 && ts2_dtm[idx] >= 0 && ts2_dtm[idx] <= 59)
        {
            break;
        }
        cout << " Invalid Time ! " << endl;
    }
    add_station_to_array();
    cout << " Train Stations changed Succesfully." << endl;
    cout << endl;
    cout << "Press any key for continue....";
    getch();
    cout << endl;
}

// function for adding new station in array
void add_station_to_array(void)
{
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    for (int i = 0; i < st; i++) // loop for checking is name already exist or not
    {
        if (stations[i] != ts1[routes]) // checking name in station 1 array
        {
            n1++;
            if (n1 == st) // if name does not find
            {
                stations[st] = ts1[routes]; // than add it in array
                st++;
                break;
            }
        }
        if (stations[i] != ts2[routes]) // checking name in station 2 array
        {
            n2++;
            if (n2 == st) // if name does not find
            {
                stations[st] = ts1[routes]; // than add it in array
                st++;
                break;
            }
        }
        if (stations[i] != ts3[routes]) // checking name in station 3 array
        {
            n3++;
            if (n3 == st) // if name does not find
            {
                stations[st] = ts1[routes]; // than add it in array
                st++;
                break;
            }
        }
        if (stations[i] != ts4[routes]) // checking name in station 4 array
        {
            n4++;
            if (n4 == st) // if name does not find
            {
                stations[st] = ts1[routes]; // than add it in array
                st++;
                break;
            }
        }
    }
}

// function for loading data from file to arrays and variables
void load_data()
{
    string line;
    int temp;

    fstream file; // variable for file

    // reading routes data
    file.open("Train_Routes_Data.txt", ios::in); // opening file for reading data

    while (!file.eof()) // reading file until file ends
    {
        getline(file, line); // reading line by line from file

        train[routes] = parse_data(line, 1); // reading train names

        ts1[routes] = parse_data(line, 2); // reading trains station 1 name
        ts2[routes] = parse_data(line, 3); // reading trains station 2 name
        ts3[routes] = parse_data(line, 4); // reading trains station 3 name
        ts4[routes] = parse_data(line, 5); // reading trains station 4 name

        ts1_ath[routes] = stoi(parse_data(line, 6)); // reading station 1 arrival time hour
        ts1_atm[routes] = stoi(parse_data(line, 7)); // reading station 1 arrival time minutes
        ts1_dth[routes] = stoi(parse_data(line, 8)); // reading station 1 departure time hour
        ts1_dtm[routes] = stoi(parse_data(line, 9)); // reading station 1 departure time minutes

        ts2_ath[routes] = stoi(parse_data(line, 10)); // reading station 2 arrival time hour
        ts2_atm[routes] = stoi(parse_data(line, 11)); // reading station 2 arrival time minutes
        ts2_dth[routes] = stoi(parse_data(line, 12)); // reading station 2 departure time hour
        ts2_dtm[routes] = stoi(parse_data(line, 13)); // reading station 2 departure time minutes

        ts3_ath[routes] = stoi(parse_data(line, 14)); // reading station 3 arrival time hour
        ts3_atm[routes] = stoi(parse_data(line, 15)); // reading station 3 arrival time minutes
        ts3_dth[routes] = stoi(parse_data(line, 16)); // reading station 3 departure time hour
        ts3_dtm[routes] = stoi(parse_data(line, 17)); // reading station 3 departure time minutes

        ts4_ath[routes] = stoi(parse_data(line, 18)); // reading station 4 arrival time hour
        ts4_atm[routes] = stoi(parse_data(line, 19)); // reading station 4 arrival time minutes
        ts4_dth[routes] = stoi(parse_data(line, 20)); // reading station 4 departure time hour
        ts4_dtm[routes] = stoi(parse_data(line, 21)); // reading station 4 departure time minutes

        tticket[routes] = stoi(parse_data(line, 22)); // raeding trains tickets prices
        tcargo[routes] = stoi(parse_data(line, 23));  // reading cargo routes of trains
        routes++;
    }
    file.close(); // closing file after reading data

    // readibg password from file
    fstream pwd;                            // variable for reading data
    pwd.open("user_password.txt", ios::in); // opening file
    pwd >> password;
    pwd.close(); // closing file

    // rading stations names from file
    fstream st_file;                       // variable for reading stations name
    st_file.open("stations.txt", ios::in); // opening file
    while (!st_file.eof())                 // redaing until end of file
    {
        getline(st_file, line); // reading line by line
        stations[st] = line;
        st++; // increment in stations count
    }
    st_file.close(); // closing file

    // reading tickets data from files
    fstream newFile;
    newFile.open("tickets_data.txt", ios::in); // opening file
    while (!newFile.eof())                     // reading until end of file
    {
        getline(newFile, line); // reading line by line

        t_name[t] = parse_data(line, 1);          // ticket train name
        from[t] = parse_data(line, 2);            // departure station
        to[t] = parse_data(line, 3);              // arrival station
        quantity[t] = stoi(parse_data(line, 4));  // quantity of tickets
        ticket_no[t] = stoi(parse_data(line, 5)); // ticket number
        price[t] = stoi(parse_data(line, 6));     // price of tickets
        day[t] = stof(parse_data(line, 7));       // day of ticket
        month[t] = stof(parse_data(line, 8));     // month of ticket
        year[t] = stof(parse_data(line, 9));      // year of ticket
        date[t] = stof(parse_data(line, 10));     // calculated date for applying conditions
        t++;                                      // increment in tickets count
    }
    newFile.close(); // closing file

    // reding cargo booked data from file
    fstream cargo_File;
    cargo_File.open("booked_cargo_data.txt", ios::in); // opening file
    while (!cargo_File.eof())                          // until end of file
    {
        getline(cargo_File, line); // reading line by line

        cargo_train[book] = parse_data(line, 1);      // cargo booked train name
        book_from[book] = parse_data(line, 2);        // departure station
        book_to[book] = parse_data(line, 3);          // arrival station
        weight[book] = stoi(parse_data(line, 4));     // weight of cargo
        c_price[book] = stoi(parse_data(line, 5));    // cargo booking price
        booking_no[book] = stoi(parse_data(line, 6)); // booking number
        book_day[book] = stof(parse_data(line, 7));   // booking day
        book_month[book] = stof(parse_data(line, 8)); // booking month
        book_year[book] = stof(parse_data(line, 9));  // booking year
        book_date[book] = stof(parse_data(line, 10)); // calculated date for applying conditions

        book++; // increment in cargo booked
    }
    cargo_File.close(); // closing file
}

// function for separarting data readed from file one by one as required
string parse_data(string line, int field)
{
    int commaCount = 1; // initial comma count
    string item;
    for (int x = 0; x < line.length(); x++)
    {
        if (line[x] == ',') // if find comma in file
        {
            commaCount++; // increment
        }
        else if (commaCount == field) // if comma Count and field required become same
        {
            item = item + line[x]; // than read data character by character
        }
    }
    return item; // and returning readed item
}

// function for storing data into file
void store_data(void)
{
    // writing data of train routes into file
    fstream file;
    file.open("Train_Routes_Data.txt", ios::out); // opening file for writing
    for (int idx = 0; idx < routes; idx++)        // changing index of arrays
    {
        file << train[idx] << "," << ts1[idx] << "," << ts2[idx] << "," << ts3[idx] << "," << ts4[idx] << ",";
        file << ts1_ath[idx] << "," << ts1_atm[idx] << "," << ts1_dth[idx] << "," << ts1_dtm[idx] << ",";
        file << ts2_ath[idx] << "," << ts2_atm[idx] << "," << ts2_dth[idx] << "," << ts2_dtm[idx] << ",";
        file << ts3_ath[idx] << "," << ts3_atm[idx] << "," << ts3_dth[idx] << "," << ts3_dtm[idx] << ",";
        file << ts4_ath[idx] << "," << ts4_atm[idx] << "," << ts4_dth[idx] << "," << ts4_dtm[idx] << ",";
        file << tticket[idx] << "," << tcargo[idx] << ",";

        if (idx < routes - 1)
        {
            file << endl;
        }
    }
    file.close(); // closing file

    // writing password into file
    fstream pwd;
    pwd.open("user_password.txt", ios::out);
    pwd << password;
    pwd.close();

    // writing stations names into file
    fstream st_file;
    st_file.open("stations.txt", ios::out);
    for (int idx = 0; idx < st; idx++)
    {
        st_file << stations[idx];
        if (idx < st - 1)
        {
            st_file << endl;
        }
    }
    st_file.close();

    // writing tickets data into file
    fstream newFile;
    newFile.open("tickets_data.txt", ios::out); // opening file
    for (int idx = 0; idx < t; idx++)
    {
        newFile << t_name[idx] << "," << from[idx] << "," << to[idx] << ",";
        newFile << quantity[idx] << "," << ticket_no[idx] << "," << price[idx] << ",";
        newFile << day[idx] << "," << month[idx] << "," << year[idx] << "," << date[idx] << ",";
        if (idx < t - 1)
        {
            newFile << endl;
        }
    }
    newFile.close(); // closing file

    // writing cargo booking data into file
    fstream cargo_File;
    cargo_File.open("booked_cargo_data.txt", ios::out); // opening file
    for (int idx = 0; idx < book; idx++)
    {
        cargo_File << cargo_train[idx] << "," << book_from[idx] << "," << book_to[idx] << ",";
        cargo_File << weight[idx] << "," << c_price[idx] << "," << booking_no[idx] << ",";
        cargo_File << book_day[idx] << "," << book_month[idx] << "," << book_year[idx] << "," << book_date[idx] << ",";

        if (idx < book - 1)
        {
            cargo_File << endl;
        }
    }
    cargo_File.close(); // closing file
}