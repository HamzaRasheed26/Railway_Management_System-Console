#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

// Global Variables
string password;
string notice = " No Notice Available!  ";
int option, sub_op;
char c;

string t, ts1, ts2, ts3, ts4;
int ts1_ath, ts1_atm, ts2_ath, ts2_atm;
int ts3_ath, ts3_atm, ts4_ath, ts4_atm;
int ts1_dth, ts1_dtm, ts2_dth, ts2_dtm;
int ts3_dth, ts3_dtm, ts4_dth, ts4_dtm;
int tticket, tcargo;

// GLOBAL ticket buying  variables
string from, to, t_name;
int quantity, price, op;
int weight, c_price;
float day, month, year;
float date;

// function prototypes
void head(void);
int login_page(void);
int Admin_Menu(void);
int list_of_trains(string name, string title, string t1, string t2, string t3, string t4);
void menu_route_sub_op(string t);
void view_train_route_detail(string ts, int ts_ath, int ts_atm, int ts_dth, int ts_dtm);
void add_train_route(void);
int set_ticket_price(string t);
int set_freight_rate(string t);
int station_schedule_menu1(string name);
void station_schedule_menu2(string name, string station);
void train_station_check(string station, string t, string ts1, int ts1_ath, int ts1_atm, int ts1_dth, int ts1_dtm, string ts2, int ts2_ath, int ts2_atm, int ts2_dth, int ts2_dtm, string ts3, int ts3_ath, int ts3_atm, int ts3_dth, int ts3_dtm, string ts4, int ts4_ath, int ts4_atm, int ts4_dth, int ts4_dtm);
void add_notice(void);
void view_employers_data(void);
int user_menu(void);
void view_tickets_price(string t1, string t2, string t3, string t4, int t1ticket, int t2ticket, int t3ticket, int t4ticket);
int buy_ticket(string t, string ts1, string ts2, string ts3, string ts4, int ticket);
void view_freight_rate(string t1, string t2, string t3, string t4, int t1cargo, int t2cargo, int t3cargo, int t4cargo);
int book_cargo(string t, int tcargo);
void view_notice(string notice);
void display_ticket(int n, string t_name, string from, string to, int day, int month, int year, int quantity, int price);
void my_tickets_sorting(int date1, int date2, int date3, int date4, string t_name1, string t_name2, string t_name3, string t_name4, string from1, string from2, string from3, string from4, string to1, string to2, string to3, string to4, int day1, int day2, int day3, int day4, int month1, int month2, int month3, int month4, int year1, int year2, int year3, int year4, int price1, int price2, int price3, int price4, int quantity1, int quantity2, int quantity3, int quantity4);

//********************** MAIN FUNCTION *******************************************************************************
main()
{
  // ********************************************* VARIABLES ******************************************************
  // *********** variables for train 1 ***********
  string t1 = "Allma_Iqbal";
  // stations of train 1
  string t1s1 = "Lahore", t1s2 = "Sahiwal", t1s3 = "Multan", t1s4 = "Sadiqabad";
  // arrival times train 1 stations
  int t1s1_ath = 8, t1s1_atm = 00, t1s2_ath = 10, t1s2_atm = 30;
  int t1s3_ath = 12, t1s3_atm = 00, t1s4_ath = 14, t1s4_atm = 00;
  // departure  times train 1 stations
  int t1s1_dth = 8, t1s1_dtm = 20, t1s2_dth = 10, t1s2_dtm = 40;
  int t1s3_dth = 12, t1s3_dtm = 10, t1s4_dth = 14, t1s4_dtm = 30;
  // ticket train 1
  int t1ticket = 400, t1cargo = 45;

  // *********** variables for train 2 ***********
  string t2 = "Awami_Express";
  // stations of train 2
  string t2s1 = "Gujrat", t2s2 = "Lahore", t2s3 = "Multan", t2s4 = "Sadiqabad";
  // arrival times train 2 stations
  int t2s1_ath = 12, t2s1_atm = 00, t2s2_ath = 14, t2s2_atm = 30;
  int t2s3_ath = 16, t2s3_atm = 00, t2s4_ath = 20, t2s4_atm = 00;
  // departure  times train 2 stations
  int t2s1_dth = 12, t2s1_dtm = 20, t2s2_dth = 14, t2s2_dtm = 40;
  int t2s3_dth = 16, t2s3_dtm = 10, t2s4_dth = 20, t2s4_dtm = 30;
  // ticket train 2
  int t2ticket = 450, t2cargo = 50;

  // *********** variables for train 3 ***********
  string t3 = "Pakistan_Express";
  // stations of train 3
  string t3s1 = "Rawalpindi", t3s2 = "Gujrat", t3s3 = "Multan", t3s4 = "Faislabad";
  // arrival times train 3 stations
  int t3s1_ath = 6, t3s1_atm = 00, t3s2_ath = 9, t3s2_atm = 20;
  int t3s3_ath = 13, t3s3_atm = 00, t3s4_ath = 17, t3s4_atm = 00;
  // departure  times train 3 stations
  int t3s1_dth = 6, t3s1_dtm = 20, t3s2_dth = 9, t3s2_dtm = 40;
  int t3s3_dth = 13, t3s3_dtm = 30, t3s4_dth = 17, t3s4_dtm = 40;
  // ticket train 3
  int t3ticket = 350, t3cargo = 40;

  // *********** variables for train 4 ***********
  string t4 = "Khyber_Mail";
  // stations of train 4
  string t4s1 = "Rawalpindi", t4s2 = "Lahore", t4s3 = "Sahiwal", t4s4 = "Faislabad";
  // arrival times train 4 stations
  int t4s1_ath = 3, t4s1_atm = 25, t4s2_ath = 7, t4s2_atm = 10;
  int t4s3_ath = 11, t4s3_atm = 5, t4s4_ath = 13, t4s4_atm = 00;
  // departure  times train 4 stations
  int t4s1_dth = 3, t4s1_dtm = 50, t4s2_dth = 7, t4s2_dtm = 45;
  int t4s3_dth = 11, t4s3_dtm = 20, t4s4_dth = 13, t4s4_dtm = 30;
  // ticket train 4
  int t4ticket = 400, t4cargo = 45;

  // *********** variables for train 5 ***********
  string t5 = " ";
  // stations of train 5
  string t5s1 = "", t5s2 = "", t5s3 = "", t5s4 = "";
  // arrival times train 5 stations
  int t5s1_ath = 0, t5s1_atm = 0, t5s2_ath = 0, t5s2_atm = 0;
  int t5s3_ath = 0, t5s3_atm = 0, t5s4_ath = 0, t5s4_atm = 0;
  // departure  times train 5 stations
  int t5s1_dth = 0, t5s1_dtm = 0, t5s2_dth = 0, t5s2_dtm = 0;
  int t5s3_dth = 0, t5s3_dtm = 0, t5s4_dth = 0, t5s4_dtm = 0;
  // ticket train 5
  int t5ticket = 0, t5cargo = 5;

  // ticket buy 1 variables
  string from1, to1, t_name1;
  int quantity1 = 0, price1 = 0, op1;
  int weight1 = 0, c_price1 = 0;
  float day1 = 0, month1 = 0, year1 = 0;
  float date1 = 0;

  // ticket buy 2 variables
  string from2, to2, t_name2;
  int quantity2 = 0, price2 = 0;
  int weight2 = 0, c_price2 = 0;
  float day2 = 0, month2 = 0, year2 = 0;
  float date2 = 0;

  // ticket buy 3 variables
  string from3, to3, t_name3;
  int quantity3 = 0, price3 = 0;
  int weight3 = 0, c_price3 = 0;
  float day3 = 0, month3 = 0, year3 = 0;
  float date3 = 0;

  // ticket buy 4 variables
  string from4, to4, t_name4;
  int quantity4 = 0, price4 = 0;
  int weight4 = 0, c_price4 = 0;
  float day4 = 0, month4 = 0, year4 = 0;
  float date4 = 0;

  // ticket buy 4 variables
  string from5, to5, t_name5;
  int quantity5 = 0, price5 = 0;
  int weight5 = 0, c_price5 = 0;
  float day5 = 0, month5 = 0, year5 = 0;
  float date5 = 0;

  int login = 0;

  //*********************************************************************************************************

  // program start from here

  while (login != 3)
  {
    system("cls");

    head();
    login = login_page();

    system("cls");

    if (login == 1 && password == "123")
    {
      // Admin portion starts

      while (option != 8)
      {
        system("cls");

        head();
        option = Admin_Menu();
        system("cls");

        if (option == 1)
        {
          // Admin menu op1 start
          head();
          sub_op = list_of_trains("Admin", "View Train Route", t1, t2, t3, t4);
          system("cls");

          if (sub_op = 1)
          {
            // train 1  route
            head();
            menu_route_sub_op(t1);
            view_train_route_detail(t1s1, t1s1_ath, t1s1_atm, t1s1_ath, t1s1_dtm); // station 1
            view_train_route_detail(t1s2, t1s2_ath, t1s2_atm, t1s2_ath, t1s2_dtm); // station 2
            view_train_route_detail(t1s3, t1s3_ath, t1s3_atm, t1s3_ath, t1s3_dtm); // station 3
            view_train_route_detail(t1s4, t1s4_ath, t1s4_atm, t1s4_ath, t1s4_dtm); // station 4
          }
          else if (sub_op = 2)
          {
            // train 2  route
            head();
            menu_route_sub_op(t2);
            view_train_route_detail(t2s1, t2s1_ath, t2s1_atm, t2s1_ath, t2s1_dtm); // station 1
            view_train_route_detail(t2s2, t2s2_ath, t2s2_atm, t2s2_ath, t2s2_dtm); // station 2
            view_train_route_detail(t2s3, t2s3_ath, t2s3_atm, t2s3_ath, t2s3_dtm); // station 3
            view_train_route_detail(t2s4, t2s4_ath, t2s4_atm, t2s4_ath, t2s4_dtm); // station 4
          }
          else if (sub_op = 3)
          {
            // train 3  route
            head();
            menu_route_sub_op(t3);
            view_train_route_detail(t3s1, t3s1_ath, t3s1_atm, t3s1_ath, t3s1_dtm); // station 1
            view_train_route_detail(t3s2, t3s2_ath, t3s2_atm, t3s2_ath, t3s2_dtm); // station 2
            view_train_route_detail(t3s3, t3s3_ath, t3s3_atm, t3s3_ath, t3s3_dtm); // station 3
            view_train_route_detail(t3s4, t3s4_ath, t3s4_atm, t3s4_ath, t3s4_dtm); // station 4
          }
          else if (sub_op = 4)
          {
            // train 4  route
            head();
            menu_route_sub_op(t4);
            view_train_route_detail(t4s1, t4s1_ath, t4s1_atm, t4s1_ath, t4s1_dtm); // station 1
            view_train_route_detail(t4s2, t4s2_ath, t4s2_atm, t4s2_ath, t4s2_dtm); // station 2
            view_train_route_detail(t4s3, t4s3_ath, t4s3_atm, t4s3_ath, t4s3_dtm); // station 3
            view_train_route_detail(t4s4, t4s4_ath, t4s4_atm, t4s4_ath, t4s4_dtm); // station 4
          }
          else
          {
            head();
            cout << endl
                 << "Invalid Option!" << endl;
          }
          cout << "Enter any key for continue :";
          getch();

          // Admin menu op1 ends
        }
        else if (option == 2)
        {
          int n;
          // Admin menu op2 starts
          head();
          cout << " Admin >> Add new Train Route" << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "We have capacity for 4 trains..";
          cout << "Enter your option : ";
          cin >> n;
          system("cls");

          head();
          add_train_route();

          if (n == 1)
          {
            // exchanging values of global variables to local variables
            t1 = t;
            // station names
            t1s1 = ts1;
            t1s2 = ts2;
            t1s3 = ts3;
            t1s4 = ts4;
            // station 1 times
            t1s1_ath = ts1_ath;
            t1s1_atm = ts1_atm;
            t1s1_dth = ts1_dth;
            t1s1_dtm = ts1_dtm;
            // station 2 times
            t1s2_ath = ts2_ath;
            t1s2_atm = ts2_atm;
            t1s2_dth = ts2_dth;
            t1s2_dtm = ts2_dtm;
            // station 3 times
            t1s3_ath = ts3_ath;
            t1s3_atm = ts3_atm;
            t1s3_dth = ts3_dth;
            t1s3_dtm = ts3_dtm;
            // station 4 times
            t1s4_ath = ts4_ath;
            t1s4_atm = ts4_atm;
            t1s4_dth = ts4_dth;
            t1s4_dtm = ts4_dtm;
          }
          else if (n == 2)
          {
            // exchanging values of global variables to local variables
            t2 = t;
            // station names
            t2s1 = ts1;
            t2s2 = ts2;
            t2s3 = ts3;
            t2s4 = ts4;
            // station 1 times
            t2s1_ath = ts1_ath;
            t2s1_atm = ts1_atm;
            t2s1_dth = ts1_dth;
            t2s1_dtm = ts1_dtm;
            // station 2 times
            t2s2_ath = ts2_ath;
            t2s2_atm = ts2_atm;
            t2s2_dth = ts2_dth;
            t2s2_dtm = ts2_dtm;
            // station 3 times
            t2s3_ath = ts3_ath;
            t2s3_atm = ts3_atm;
            t2s3_dth = ts3_dth;
            t2s3_dtm = ts3_dtm;
            // station 4 times
            t2s4_ath = ts4_ath;
            t2s4_atm = ts4_atm;
            t2s4_dth = ts4_dth;
            t2s4_dtm = ts4_dtm;
          }
          else if (n == 3)
          {
            // exchanging values of global variables to local variables
            t3 = t;
            // station names
            t3s1 = ts1;
            t3s2 = ts2;
            t3s3 = ts3;
            t3s4 = ts4;
            // station 1 times
            t3s1_ath = ts1_ath;
            t3s1_atm = ts1_atm;
            t3s1_dth = ts1_dth;
            t3s1_dtm = ts1_dtm;
            // station 2 times
            t3s2_ath = ts2_ath;
            t3s2_atm = ts2_atm;
            t3s2_dth = ts2_dth;
            t3s2_dtm = ts2_dtm;
            // station 3 times
            t3s3_ath = ts3_ath;
            t3s3_atm = ts3_atm;
            t3s3_dth = ts3_dth;
            t3s3_dtm = ts3_dtm;
            // station 4 times
            t3s4_ath = ts4_ath;
            t3s4_atm = ts4_atm;
            t3s4_dth = ts4_dth;
            t3s4_dtm = ts4_dtm;
          }
          else if (n == 4)
          {
            // exchanging values of global variables to local variables
            t4 = t;
            // station names
            t4s1 = ts1;
            t4s2 = ts2;
            t4s3 = ts3;
            t4s4 = ts4;
            // station 1 times
            t4s1_ath = ts1_ath;
            t4s1_atm = ts1_atm;
            t4s1_dth = ts1_dth;
            t4s1_dtm = ts1_dtm;
            // station 2 times
            t4s2_ath = ts2_ath;
            t4s2_atm = ts2_atm;
            t4s2_dth = ts2_dth;
            t4s2_dtm = ts2_dtm;
            // station 3 times
            t4s3_ath = ts3_ath;
            t4s3_atm = ts3_atm;
            t4s3_dth = ts3_dth;
            t4s3_dtm = ts3_dtm;
            // station 4 times
            t4s4_ath = ts4_ath;
            t4s4_atm = ts4_atm;
            t4s4_dth = ts4_dth;
            t4s4_dtm = ts4_dtm;
          }
          else
          {
            cout << "Invalid Option ! ";
          }

          cout << "Enter any key for continue :";
          getch();
          // Admin menu op2 ends
        }
        else if (option == 3)
        {
          // Admin menu op3 starts
          head();
          sub_op = list_of_trains("Admin", "Set Ticket Price", t1, t2, t3, t4); // set ticket price option function
          system("cls");
          if (sub_op == 1)
          {
            t1ticket = set_ticket_price(t1); // set ticket price train 1
          }
          else if (sub_op == 2)
          {
            t2ticket = set_ticket_price(t2); // set ticket price train 2
          }
          else if (sub_op == 3)
          {
            t3ticket = set_ticket_price(t3); // set ticket price train 3
          }
          else if (sub_op == 4)
          {
            t4ticket = set_ticket_price(t4); // set ticket price train 4
          }
          else
          {
            cout << "Invalid Option!" << endl;
          }

          cout << "Enter any key for continue :";
          getch();

          // Admin menu op3 ends
        }
        else if (option == 4)
        {
          // Admin menu1 op4 starts

          head();
          sub_op = list_of_trains("Admin", "Set Freight Rate", t1, t2, t3, t4);
          system("cls");
          if (sub_op == 1)
          {
            t1cargo = set_freight_rate(t1); // set cargo/freight price train 1
          }
          else if (sub_op == 2)
          {
            t2cargo = set_freight_rate(t2); // set cargo/freight price train 2
          }
          else if (sub_op == 3)
          {
            t3cargo = set_freight_rate(t3); // set cargo/freight price train 3
          }
          else if (sub_op == 4)
          {
            t4cargo = set_freight_rate(t4); // set cargo/freight price train 4
          }
          else
          {
            cout << "Invalid Option!" << endl;
          }
          cout << "Enter any key for continue :";
          getch();

          // Admin menu1 op4 ends
        }
        else if (option == 5)
        {
          // Admin menu1 op5 starts

          sub_op = station_schedule_menu1("Admin");
          system("cls");

          if (sub_op == 1)
          {
            station_schedule_menu2("Admin", "Rawalpindi");
            train_station_check("Rawalpindi", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
            train_station_check("Rawalpindi", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
            train_station_check("Rawalpindi", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
            train_station_check("Rawalpindi", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
          }
          else if (sub_op == 2)
          {
            station_schedule_menu2("Admin", "Gujrat");
            train_station_check("Gujrat", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
            train_station_check("Gujrat", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
            train_station_check("Gujrat", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
            train_station_check("Gujrat", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
          }
          else if (sub_op == 3)
          {
            station_schedule_menu2("Admin", "Lahore");
            train_station_check("Lahore", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
            train_station_check("Lahore", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
            train_station_check("Lahore", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
            train_station_check("Lahore", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
          }
          else if (sub_op == 4)
          {
            station_schedule_menu2("Admin", "Sahiwal");
            train_station_check("Sahiwal", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
            train_station_check("Sahiwal", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
            train_station_check("Sahiwal", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
            train_station_check("Sahiwal", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
          }
          else if (sub_op == 5)
          {
            station_schedule_menu2("Admin", "Faislabad");
            train_station_check("Faislabad", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
            train_station_check("Faislabad", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
            train_station_check("Faislabad", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
            train_station_check("Faislabad", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
          }
          else if (sub_op == 6)
          {
            station_schedule_menu2("Admin", "Multan");
            train_station_check("Multan", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
            train_station_check("Multan", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
            train_station_check("Multan", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
            train_station_check("Multan", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
          }
          else if (sub_op == 7)
          {
            station_schedule_menu2("Admin", "Sadiqabad");
            train_station_check("Sadiqabad", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
            train_station_check("Sadiqabad", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
            train_station_check("Sadiqabad", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
            train_station_check("Sadiqabad", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
          }
          else
          {
            cout << " Invalid Option! " << endl;
          }
          cout << "Enter any key for continue :";
          getch();

          // Admin menu op5 ends
        }
        else if (option == 6)
        {
          // Admin menu op6 starts

          // calling function for adding notice
          add_notice();

          cout << "Enter any key for continue :";
          getch();

          // Admin menu op6 ends
        }
        else if (option == 7)
        {
          // Admin menu op7 starts

          view_employers_data();

          cout << "Enter any key for continue :";
          getch();

          // Admin menu op7 ends
        }
        else if (option != 8)
        {
          // in admin menu if user enter wrong value
          cout << "Invalid Option!";
        }
      }
    }

    // Admin portion ends

    //*********************************************** USER PORTION  *******************************************************

    else if (login == 2)
    {
      // User portion start

      // User menu starts
      head();
      option = user_menu();
      system("cls");

      if (option == 1)
      {
        // User menu op1 start
        head();
        sub_op = list_of_trains("User", "View Train Route", t1, t2, t3, t4);
        system("cls");

        if (sub_op = 1)
        {
          // train 1  route
          head();
          menu_route_sub_op(t1);
          view_train_route_detail(t1s1, t1s1_ath, t1s1_atm, t1s1_ath, t1s1_dtm); // station 1
          view_train_route_detail(t1s2, t1s2_ath, t1s2_atm, t1s2_ath, t1s2_dtm); // station 2
          view_train_route_detail(t1s3, t1s3_ath, t1s3_atm, t1s3_ath, t1s3_dtm); // station 3
          view_train_route_detail(t1s4, t1s4_ath, t1s4_atm, t1s4_ath, t1s4_dtm); // station 4
        }
        else if (sub_op = 2)
        {
          // train 2  route
          head();
          menu_route_sub_op(t2);
          view_train_route_detail(t2s1, t2s1_ath, t2s1_atm, t2s1_ath, t2s1_dtm); // station 1
          view_train_route_detail(t2s2, t2s2_ath, t2s2_atm, t2s2_ath, t2s2_dtm); // station 2
          view_train_route_detail(t2s3, t2s3_ath, t2s3_atm, t2s3_ath, t2s3_dtm); // station 3
          view_train_route_detail(t2s4, t2s4_ath, t2s4_atm, t2s4_ath, t2s4_dtm); // station 4
        }
        else if (sub_op = 3)
        {
          // train 3  route
          head();
          menu_route_sub_op(t3);
          view_train_route_detail(t3s1, t3s1_ath, t3s1_atm, t3s1_ath, t3s1_dtm); // station 1
          view_train_route_detail(t3s2, t3s2_ath, t3s2_atm, t3s2_ath, t3s2_dtm); // station 2
          view_train_route_detail(t3s3, t3s3_ath, t3s3_atm, t3s3_ath, t3s3_dtm); // station 3
          view_train_route_detail(t3s4, t3s4_ath, t3s4_atm, t3s4_ath, t3s4_dtm); // station 4
        }
        else if (sub_op = 4)
        {
          // train 4  route
          head();
          menu_route_sub_op(t4);
          view_train_route_detail(t4s1, t4s1_ath, t4s1_atm, t4s1_ath, t4s1_dtm); // station 1
          view_train_route_detail(t4s2, t4s2_ath, t4s2_atm, t4s2_ath, t4s2_dtm); // station 2
          view_train_route_detail(t4s3, t4s3_ath, t4s3_atm, t4s3_ath, t4s3_dtm); // station 3
          view_train_route_detail(t4s4, t4s4_ath, t4s4_atm, t4s4_ath, t4s4_dtm); // station 4
        }
        else
        {
          head();
          cout << endl
               << "Invalid Option!" << endl;
        }
        cout << "Enter any key for continue :";
        getch();

        // User menu op1 ends
      }
      else if (option == 2)
      {
        // User menu op2 starts

        sub_op = station_schedule_menu1("User");
        system("cls");

        if (sub_op == 1)
        {
          station_schedule_menu2("User", "Rawalpindi");
          // these functions search the required station in the train stations and then print it on the screen
          // this function search in 'train 1" station
          train_station_check("Rawalpindi", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
          // this function search in "train 2" station
          train_station_check("Rawalpindi", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
          // this function search in "train 3" station
          train_station_check("Rawalpindi", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
          // this function search in "train 4" station
          train_station_check("Rawalpindi", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
        }
        else if (sub_op == 2)
        {
          station_schedule_menu2("User", "Gujrat");
          // these functions search the required station in the train stations and then print it on the screen
          // this function search in "train 1" station
          train_station_check("Gujrat", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
          // this function search in "train 2" station
          train_station_check("Gujrat", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
          // this function search in "train 3" station
          train_station_check("Gujrat", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
          // this function search in "train 4" station
          train_station_check("Gujrat", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
        }
        else if (sub_op == 3)
        {
          station_schedule_menu2("User", "Lahore");
          // these functions search the required station in the train stations and then print it on the screen
          // this function search in "train 1" station
          train_station_check("Lahore", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
          // this function search in "train 2" station
          train_station_check("Lahore", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
          // this function search in "train 3" station
          train_station_check("Lahore", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
          // this function search in "train 4" station
          train_station_check("Lahore", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
        }
        else if (sub_op == 4)
        {
          station_schedule_menu2("User", "Sahiwal");
          // these functions search the required station in the train stations and then print it on the screen
          // this function search in "train 1" station
          train_station_check("Sahiwal", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
          // this function search in "train 2" station
          train_station_check("Sahiwal", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
          // this function search in "train 3" station
          train_station_check("Sahiwal", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
          // this function search in "train 4" station
          train_station_check("Sahiwal", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
        }
        else if (sub_op == 5)
        {
          station_schedule_menu2("User", "Faislabad");
          // these functions search the required station in the train stations and then print it on the screen
          // for "train 1" station
          train_station_check("Faislabad", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
          // for "train 2" station
          train_station_check("Faislabad", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
          // for "train 3" station
          train_station_check("Faislabad", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
          // for "train 4" station
          train_station_check("Faislabad", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
        }
        else if (sub_op == 6)
        {
          station_schedule_menu2("User", "Multan");
          // these functions search the required station in the train stations and then print it on the screen
          // for "train 1" station
          train_station_check("Multan", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
          // for "train 2" station
          train_station_check("Multan", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
          // for "train 3" station
          train_station_check("Multan", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
          // for "train 42" station
          train_station_check("Multan", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
        }
        else if (sub_op == 7)
        {
          station_schedule_menu2("User", "Sadiqabad");
          // these functions search the required station in the train stations and then print it on the screen
          // for train 1 stations
          train_station_check("Sadiqabad", t1, t1s1, t1s1_ath, t1s1_atm, t1s1_dth, t1s1_dtm, t1s2, t1s2_ath, t1s2_atm, t1s2_dth, t1s2_dtm, t1s3, t1s3_ath, t1s3_atm, t1s3_dth, t1s3_dtm, t1s4, t1s4_ath, t1s4_atm, t1s4_dth, t1s4_dtm);
          // for train 2 stations
          train_station_check("Sadiqabad", t2, t2s1, t2s1_ath, t2s1_atm, t2s1_dth, t2s1_dtm, t2s2, t2s2_ath, t2s2_atm, t2s2_dth, t2s2_dtm, t2s3, t2s3_ath, t2s3_atm, t2s3_dth, t2s3_dtm, t2s4, t2s4_ath, t2s4_atm, t2s4_dth, t2s4_dtm);
          // for train 3 stations
          train_station_check("Sadiqabad", t3, t3s1, t3s1_ath, t3s1_atm, t3s1_dth, t3s1_dtm, t3s2, t3s2_ath, t3s2_atm, t3s2_dth, t3s2_dtm, t3s3, t3s3_ath, t3s3_atm, t3s3_dth, t3s3_dtm, t3s4, t3s4_ath, t3s4_atm, t3s4_dth, t3s4_dtm);
          // for train 4 stations
          train_station_check("Sadiqabad", t4, t4s1, t4s1_ath, t4s1_atm, t4s1_dth, t4s1_dtm, t4s2, t4s2_ath, t4s2_atm, t4s2_dth, t4s2_dtm, t4s3, t4s3_ath, t4s3_atm, t4s3_dth, t4s3_dtm, t4s4, t4s4_ath, t4s4_atm, t4s4_dth, t4s4_dtm);
        }
        else
        {
          cout << " Invalid Option! " << endl;
        }
        cout << "Enter any key for continue :";
        getch();

        // User menu op2 ends
      }
      else if (option == 3)
      {
        // User menu op3 starts
        head();

        view_tickets_price(t1, t2, t3, t4, t1ticket, t2ticket, t3ticket, t4ticket);

        cout << "Enter any key for continue :";
        getch();
        // User menu op3 ends
      }

      else if (option == 4)
      {
        // User menu1 op4 starts
        head();
        sub_op = list_of_trains("User", "Buy Tickets", t1, t2, t3, t4);
        system("cls");

        int count = 0;
        int flag = 0;

        if (count < 4)
        {
          // for train 1
          if (sub_op == 1)
          {
            head();
            flag = buy_ticket(t1, t1s1, t1s2, t1s3, t1s4, t1ticket);
          }
          // for train 2
          else if (sub_op == 2)
          {
            head();
            flag = buy_ticket(t2, t2s1, t2s2, t2s3, t2s4, t2ticket);
          }
          // for train 3
          else if (sub_op == 3)
          {
            head();
            flag = buy_ticket(t3, t3s1, t3s2, t3s3, t3s4, t3ticket);
          }
          // for train 4
          else if (sub_op == 4)
          {
            head();
            flag = buy_ticket(t4, t4s1, t4s2, t4s3, t4s4, t4ticket);
          }
          else
          {
            cout << " Invalid Option! " << endl;
          }

          system("cls");

          if (flag == 1 && count == 0)
          {
            // exchanging values of global variables with local variables
            t_name1 = t_name;
            from1 = from;
            to1 = to;
            day1 = day;
            month1 = month;
            year1 = year;
            quantity1 = quantity;
            price1 = price;

            head();

            cout << "You buy Ticket Succesfully ***" << endl;
            cout << "Train Name :" << t_name1 << endl;
            cout << "From station :" << from1 << endl;
            cout << "To station :" << to1 << endl;
            cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
            cout << "Quantity :" << quantity1 << endl;
            cout << "Price :" << price1 << endl;
            cout << "****Thanks for buying Ticket****" << endl;
            date1 = day1 + (month1 * 30.417);

            count++;
          }
          else if (flag == 1 && count == 1)
          {
            // exchanging values of global variables with local variables
            t_name2 = t_name;
            from2 = from;
            to2 = to;
            day2 = day;
            month2 = month;
            year2 = year;
            quantity2 = quantity;
            price2 = price;

            head();

            cout << "You buy Ticket Succesfully ***" << endl;
            cout << "Train Name :" << t_name2 << endl;
            cout << "From station :" << from2 << endl;
            cout << "To station :" << to2 << endl;
            cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
            cout << "Quantity :" << quantity2 << endl;
            cout << "Price :" << price2 << endl;
            cout << "****Thanks for buying Ticket****" << endl;
            date2 = day2 + (month2 * 30.417);

            count++;
          }
          else if (flag == 1 && count == 2)
          {
            // exchanging values of global variables with local variables
            t_name3 = t_name;
            from3 = from;
            to3 = to;
            day3 = day;
            month3 = month;
            year3 = year;
            quantity3 = quantity;
            price3 = price;

            head();

            cout << "You buy Ticket Succesfully ***" << endl;
            cout << "Train Name :" << t_name3 << endl;
            cout << "From station :" << from3 << endl;
            cout << "To station :" << to3 << endl;
            cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
            cout << "Quantity :" << quantity3 << endl;
            cout << "Price :" << price3 << endl;
            cout << "****Thanks for buying Ticket****" << endl;
            date3 = day3 + (month3 * 30.417);

            count++;
          }
          else if (flag == 1 && count == 3)
          {
            // exchanging values of global variables with local variables
            t_name4 = t_name;
            from4 = from;
            to4 = to;
            day4 = day;
            month4 = month;
            year4 = year;
            quantity4 = quantity;
            price4 = price;

            head();

            cout << "You buy Ticket Succesfully ***" << endl;
            cout << "Train Name :" << t_name4 << endl;
            cout << "From station :" << from4 << endl;
            cout << "To station :" << to4 << endl;
            cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
            cout << "Quantity :" << quantity4 << endl;
            cout << "Price :" << price4 << endl;
            cout << "****Thanks for buying Ticket****" << endl;
            date4 = day4 + (month4 * 30.417);

            count++;
          }
          else
          {
            t_name1 = "";
            quantity1 = 0;
            price1 = 0;
            day1 = 0;
            month1 = 0;
            year1 = 0;
          }
        }
        else
        {
          head();
          cout << " YOU CAN NOT BUY MORE THAN FOUR TICKETS !" << endl;
        }

        cout << "Enter any key for continue :";
        getch();

        // User menu op4 ends
      }
      else if (option == 5)
      {
        // User menu op5 starts
        head();

        // if he buy any ticket than the tikets print
        if (price1 != 0 || price2 != 0 || price3 != 0 || price4 != 0)
        {
          my_tickets_sorting(date1, date2, date3, date4, t_name1, t_name2, t_name3, t_name4, from1, from2, from3, from4, to1, to2, to3, to4, day1, day2, day3, day4, month1, month2, month3, month4, year1, year2, year3, year4, price1, price2, price3, price4, quantity1, quantity2, quantity3, quantity4);
        }
        // if he buy no ticket
        else
        {
          cout << " User >> Your Tickets " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << " YOU HAVE NO TICKET!" << endl;
        }

        cout << "Enter any key for continue :";
        getch();

        // User menu op5 ends
      }
      else if (option == 6)
      {
        // User menu1 op6 starts

        head();
        view_freight_rate(t1, t2, t3, t4, t1cargo, t2cargo, t3cargo, t4cargo);

        cout << "Enter any key for continue :";
        getch();

        // User menu1 op6 ends
      }
      else if (option == 7)
      {
        // User menu op7 starts

        head();
        sub_op = list_of_trains("User", "Book Cargo", t1, t2, t3, t4);
        system("cls");
        int flag = 0;

        // for train 1
        if (sub_op == 1)
        {
          head();
          flag = book_cargo(t1, t1cargo);
        }
        // for train 2
        else if (sub_op == 2)
        {
          head();
          flag = book_cargo(t2, t2cargo);
        }
        // for train 3
        else if (sub_op == 3)
        {
          head();
          flag = book_cargo(t3, t3cargo);
        }
        // for train 4
        else if (sub_op == 4)
        {
          head();
          flag = book_cargo(t4, t4cargo);
        }
        else
        {
          cout << " Invalid Option! " << endl;
        }

        // if he select yes option in book cargo function
        if (flag == 1)
        {
          weight1 = weight;
          c_price1 = c_price;
          cout << "Your cargo succesfully booked " << endl;
        }
        // if he select no in book cargo function
        else
        {
          weight1 = 0;
          c_price1 = 0;
        }

        cout << "Enter any key for continue :";
        getch();
        // User menu op7 ends
      }
      else if (option == 8)
      {
        // User menu op8 starts

        head();
        view_notice(notice);

        cout << "Enter any key for continue :";
        getch();

        // User menu op8 ends
      }
      else if (option != 9)
      {
        head();
        cout << endl
             << "Invalid Input!" << endl;
        cout << "Enter any key for continue :";
        getch();
      }
    }
    else if (login != 3)
    {
      cout << "Invalid Option !";
    }
  }
}

//************************************************* Functions Definition ********************************************************

// Railway management system head function
void head(void)
{
  cout << "*************************************************************" << endl;
  cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
  cout << "*************************************************************" << endl
       << endl;
}

// login page function
int login_page(void)
{
  int login;
  cout << " Login Page >>" << endl
       << endl;
  cout << " 1- Admin " << endl;
  cout << " 2- User " << endl;
  cout << " 3- Exit " << endl;
  cin >> login;
  if (login == 1)
  {
    cout << "Enter Password.........(123)..........:";
    cin >> password;
  }
  return login;
}

// Admin menu page function
int Admin_Menu(void)
{
  cout << " Admin >> Menu" << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Select one of the following options........" << endl;
  cout << " 1. View of all routes of trains" << endl;
  cout << " 2. Add new route of train" << endl;
  cout << " 3. Set tickets prices" << endl;
  cout << " 4. Set Freight rates" << endl;
  cout << " 5. View schedule of stations" << endl;
  cout << " 6. Add important notices" << endl;
  cout << " 7. View employers data" << endl;
  cout << " 8. EXit" << endl;
  cout << "Select any option........:";
  cin >> option;
  return option;
}

// List of trains for selection of only one train from list function
int list_of_trains(string name, string title, string t1, string t2, string t3, string t4)
{

  // in place of "name" there we pass "user/admin" from function call
  // or in place of "title" we pass the title accordimg to our need in program
  cout << " " << name << " >> " << title << endl;
  cout << "_____________________________________________________________" << endl;
  cout << " Select any Train from the following....." << endl;
  cout << "Train names:" << endl;
  cout << " 1. " << t1 << endl;
  cout << " 2. " << t2 << endl;
  cout << " 3. " << t3 << endl;
  cout << " 4. " << t4 << endl;
  cout << "Select anyone option.....:";
  cin >> sub_op;
  return sub_op;
}

// view train route sub menu option function
void menu_route_sub_op(string t)
{
  cout << " Admin >> View Train Routes" << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Train Name : " << t << endl
       << endl;
  cout << "Stations\tArrival\tDeparture " << endl;
}

// view train routes station name and arrival departure times function
void view_train_route_detail(string ts, int ts_ath, int ts_atm, int ts_dth, int ts_dtm)
{
  cout << ts << "\t\t" << ts_ath << ":" << ts_atm << "\t" << ts_dth << ":" << ts_dtm << endl;
}

// Add new train route function
void add_train_route(void)
{

  cout << " Admin >> Add new Train Route" << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Enter train name :"; // train name
  cin >> t;
  cout << "Station-1 name :"; // station 1 name
  cin >> ts1;
  cout << "Arrival Time( hh:mm ) :"; // arrival time station 1
  cin >> ts1_ath;
  cin >> ts1_atm;
  cout << "Departure Time( hh:mm ) :"; // departure time station 1
  cin >> ts1_dth;
  cin >> ts1_dtm;
  cout << "Station-2 name :"; // station 2 name
  cin >> ts2;
  cout << "Arrival Time( hh:mm ) :"; // arrival time station 2
  cin >> ts2_ath;
  cin >> ts2_atm;
  cout << "Departure Time( hh:mm )"; // departure time station 2
  cin >> ts2_dth;
  cin >> ts2_dtm;
  cout << "Station-3 name :"; // station 3 name
  cin >> ts3;
  cout << "Arrival Time( hh:mm ) :"; // arrival time station 3
  cin >> ts3_ath;
  cin >> ts3_atm;
  cout << "Departure Time( hh:mm ) :"; // departure time station 3
  cin >> ts3_dth;
  cin >> ts3_dtm;
  cout << "Station-3 name :"; // station 4 name
  cin >> ts4;
  cout << "Arrival Time( hh:mm ) :"; // arrival time station 4
  cin >> ts4_ath;
  cin >> ts4_atm;
  cout << "Departure Time( hh:mm ) :"; // departure time station 4
  cin >> ts4_dth;
  cin >> ts4_dtm;
  cout << "Set Ticket Price :";
  cin >> tticket;
  cout << "Set cargo rate per kg :";
  cin >> tcargo;
}

// set ticket prices function
int set_ticket_price(string t)
{
  head();
  cout << " Admin >> Set Ticket Prices" << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Train Name : " << t << endl;
  cout << "Enter ticket price :";
  cin >> tticket;
  return tticket;
}

// set freight prices of trains function
int set_freight_rate(string t)
{
  head();
  cout << " Admin >> Set Freight Rate " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Train Name : " << t << endl;
  cout << "Enter cargo rate per kg :";
  cin >> tcargo;
  return tcargo;
}

// view station schedule that wich trains come on station function
int station_schedule_menu1(string name)
{
  head();
  // in place of "name" there we pass "user/admin" from function call
  cout << " " << name << " >> View Station Schedule  " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Select any from available stations......" << endl;
  // stations name available
  cout << " 1. Rawalpindi" << endl;
  cout << " 2. Gujrat    " << endl;
  cout << " 3. Lahore    " << endl;
  cout << " 4. Sahiwal   " << endl;
  cout << " 5. Faislabad " << endl;
  cout << " 6. Multan    " << endl;
  cout << " 7. Sadiqabad " << endl;
  cout << "Your Option.....:";
  cin >> sub_op;
  return sub_op;
}

// this menu print with when we select any station
void station_schedule_menu2(string name, string station)
{
  head();
  // in place of "name" there we pass "user/admin" from function call
  cout << " " << name << " >> View Station Schedule " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Station Name : " << station << endl;
  cout << "Train Name \t Arrival \t Departure " << endl;
}

// function for searching requiired station in train stations
void train_station_check(string station, string t, string ts1, int ts1_ath, int ts1_atm, int ts1_dth, int ts1_dtm, string ts2, int ts2_ath, int ts2_atm, int ts2_dth, int ts2_dtm, string ts3, int ts3_ath, int ts3_atm, int ts3_dth, int ts3_dtm, string ts4, int ts4_ath, int ts4_atm, int ts4_dth, int ts4_dtm)
{

  // if required station found in train station 1 than it prints it on screen
  if (ts1 == station)
  {
    view_train_route_detail(t, ts1_ath, ts1_atm, ts1_dth, ts1_dtm);
  }

  // if required station found in train station 2 than it prints it on screen
  if (ts2 == station)
  {
    view_train_route_detail(t, ts2_ath, ts2_atm, ts2_dth, ts2_dtm);
  }

  // if required station found in train station 3 than it prints it on screen
  if (ts3 == station)
  {
    view_train_route_detail(t, ts3_ath, ts3_atm, ts3_dth, ts3_dtm);
  }

  // if required station found in train station 4 than it prints it on screen
  if (ts4 == station)
  {
    view_train_route_detail(t, ts4_ath, ts4_atm, ts4_dth, ts4_dtm);
  }
}

// Function for posting notices for user
void add_notice(void)
{
  head();

  cout << " Admin >> Add Notice " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Write your notice here.....:" << endl;
  cin >> notice;
}

// this function is hardcode its only print data of employers
void view_employers_data(void)
{
  head();

  cout << " Admin >> View Employers Data " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "      Train Drivers  " << endl;
  cout << " 1. Ahmed       2. Sajid   " << endl;
  cout << " 3. Ali         4. Akhtar  " << endl;
  cout << " 5. Hamid       6. Asif    " << endl;

  cout << "      Train Police" << endl;
  cout << " 1. Inspector Hassan" << endl;
  cout << " 2. Sub Inspector Faheem" << endl;
  cout << " 3. Sub Inspector Qasim" << endl;
  cout << " 4. Sub Inspector Umar" << endl;
  cout << " 5. Sub Inspector Taha" << endl;

  cout << "     Station Incharge" << endl;
  cout << " 1. Babar" << endl;
  cout << " 2. Rizwan" << endl;
  cout << " 3. Fakhar" << endl;
  cout << " 4. Asim" << endl;
  cout << " 5. Zia" << endl;
  cout << " 6. Zohaib" << endl;
  cout << " 7. Talha" << endl;
}

// function for showing user menu on screen
int user_menu(void)
{
  cout << " User >> Menu" << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Select one of the following options........" << endl
       << endl;
  cout << " 1. View of all routes of trains" << endl;
  cout << " 2. View Stations Schedule" << endl;
  cout << " 3. View tickets prices" << endl;
  cout << " 4. Buy Tickets" << endl;
  cout << " 5. View My Tickets" << endl;
  cout << " 6. View Freight Rates" << endl;
  cout << " 7. Book Cargo" << endl;
  cout << " 8. View Notices" << endl;
  cout << " 9. EXit" << endl;
  cout << "Select any option........:" << endl;
  cin >> option;
  return option;
}

// function for viewing tickets pries of trains
void view_tickets_price(string t1, string t2, string t3, string t4, int t1ticket, int t2ticket, int t3ticket, int t4ticket)
{

  cout << " User >> View Tickets Price " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Train Name         Ticket Price" << endl;
  cout << " 1. " << t1 << "\t\t" << t1ticket << endl;
  cout << " 2. " << t2 << "\t" << t2ticket << endl;
  cout << " 3. " << t3 << "\t" << t3ticket << endl;
  cout << " 4. " << t4 << "\t\t" << t4ticket << endl
       << endl;
}

// function for buying ticket of train
int buy_ticket(string t, string ts1, string ts2, string ts3, string ts4, int ticket)
{
  cout << " User >> Buy Tickets " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Train Name :" << t << endl;
  cout << "Stations available :" << endl;
  cout << ts1 << " " << ts2 << " " << ts3 << " " << ts4 << endl;
  cout << "From Station :";
  cin >> from;
  cout << "To Station :";
  cin >> to;
  cout << " Enter date ( dd mm yyyy):";
  cin >> day;
  cin >> month;
  cin >> year;
  cout << "Ticket price is :" << ticket << endl;
  cout << "Enter quantity of tickets :";
  cin >> quantity;
  price = ticket * quantity;
  cout << "Total price for " << quantity << " tickets :" << price << endl;
  cout << "You want to buy Ticket (1 for yes, 0 for not) :";
  cin >> op;
  t_name = t;
  return op;
}

// function for displaying prices of freight/cargo
void view_freight_rate(string t1, string t2, string t3, string t4, int t1cargo, int t2cargo, int t3cargo, int t4cargo)
{
  cout << " User >> View Freight Rates " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Train Name         Rate/kg   " << endl;
  cout << " 1. " << t1 << "\t\t" << t1cargo << endl;
  cout << " 2. " << t2 << "\t" << t2cargo << endl;
  cout << " 3. " << t3 << "\t" << t3cargo << endl;
  cout << " 4. " << t4 << "\t\t" << t4cargo << endl;
}

// function for booking cargo
int book_cargo(string t, int tcargo)
{
  cout << " User >> Book Cargo " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Train Name :" << t << endl;
  cout << "Price per kg :" << tcargo << endl;
  cout << "Enter the cargo weight (kg) :";
  cin >> weight;
  c_price = tcargo * weight;
  cout << "You have to pay :" << c_price << endl;
  cout << "You want to book cargo (1 for yes, 0 for not) :";
  cin >> op;
  return op;
}

// function for viewing notice
void view_notice(string notice)
{
  cout << " User >> View Notice " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Notice Board......" << endl;
  cout << notice;
}

// function for displaying ticket
void display_ticket(int n, string t_name, string from, string to, int day, int month, int year, int quantity, int price)
{
  cout << "*** Ticket no. " << n << " ***" << endl;
  cout << "Train : " << t_name << endl;
  cout << "From  : " << from << endl;
  cout << "To    : " << to << endl;
  cout << "Date  :" << day << "-" << month << "-" << year << endl;
  cout << "Quantity : " << quantity << endl;
  cout << "Price : " << price << endl
       << endl
       << endl;
}

// function for sorting all my four tickets
void my_tickets_sorting(int date1, int date2, int date3, int date4, string t_name1, string t_name2, string t_name3, string t_name4, string from1, string from2, string from3, string from4, string to1, string to2, string to3, string to4, int day1, int day2, int day3, int day4, int month1, int month2, int month3, int month4, int year1, int year2, int year3, int year4, int price1, int price2, int price3, int price4, int quantity1, int quantity2, int quantity3, int quantity4)
{
  cout << " User >> Your Tickets " << endl;
  cout << "_____________________________________________________________" << endl;
  cout << "Display according to ticket date which come first ....." << endl
       << endl;

  // if ticket 1 date is near
  if (date1 < date2 && date1 < date3 && date1 < date4)
  {
    display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);

    // if after date 1 date 2 is near
    if (date2 < date3 && date2 < date4)
    {
      display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);

      // than if date 3 is near
      if (date3 < date4)
      {
        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);

        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);
      }
      // than if date 4 is near
      else
      {
        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);
      }
    }
    // if after date 1 date 3 is near
    else if (date3 < date2 && date3 < date4)
    {
      display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);

      // than if date 2 is near
      if (date2 > date4)
      {
        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);

        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);
      }
      // than if date 4 is near
      else
      {
        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);
      }
    }
    // if after date1 date 4 is near
    else
    {
      display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

      // than if date 2 is near
      if (date2 < date3)
      {
        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);

        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);
      }
      // than if date 3 is near
      else
      {
        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);

        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);
      }
    }
  }
  // if ticket 2 date is near
  else if (date2 < date1 && date2 < date3 && date2 < date4)
  {
    display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);

    // if  ticket 1 date is near
    if (date1 < date3 && date1 < date4)
    {
      display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);
      // if  ticket 3 date is near
      if (date3 < date4)
      {
        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);

        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);
      }
      // if  ticket 4 date is near
      else
      {
        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);
      }
    }
    // if  ticket 3 date is near
    else if (date3 < date1 && date3 < date4)
    {
      display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);

      // if  ticket 1 date is near
      if (date1 > date4)
      {
        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);

        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);
      }
      // if  ticket 4 date is near
      else
      {
        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);
      }
    }
    // if  ticket 4 date is near
    else
    {
      display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

      // if  ticket 1 date is near
      if (date1 < date3)
      {
        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);

        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);
      }
      // if  ticket 3 date is near
      else
      {
        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);

        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);
      }
    }
  }
  // if  ticket 3 date is near
  else if (date3 < date1 && date3 < date2 && date3 < date4)
  {
    display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);

    // if  ticket 1 date is near
    if (date1 < date2 && date1 < date4)
    {
      display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);

      // if  ticket 2 date is near
      if (date2 < date4)
      {
        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);

        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);
      }
      // if  ticket 4 date is near
      else
      {
        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);
      }
    }
    // if  ticket 2 date is near
    else if (date2 < date1 && date2 < date4)
    {
      display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);

      // if  ticket 1 date is near
      if (date1 > date4)
      {
        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);

        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);
      }
      // if  ticket 4 date is near
      else
      {
        display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);
      }
    }
    // if  ticket 4 date is near
    else
    {
      display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

      // if  ticket 1 date is near
      if (date1 < date2)
      {
        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);

        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);
      }
      // if  ticket 2 date is near
      else
      {
        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);

        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);
      }
    }
  }
  // if  ticket 4 date is near
  else
  {
    display_ticket(4, t_name4, from4, to4, day4, month4, year4, quantity4, price4);

    // if  ticket 1 date is near
    if (date1 < date2 && date1 < date3)
    {
      display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);

      // if  ticket 2 date is near
      if (date2 < date3)
      {
        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);

        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);
      }
      // if  ticket 3 date is near
      else
      {
        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);

        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);
      }
    }
    // if  ticket 2 date is near
    else if (date2 < date1 && date2 < date3)
    {
      display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);
      // if  ticket 1 date is near
      if (date1 > date4)
      {
        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);

        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);
      }
      // if  ticket 4 date is near
      else
      {
        display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);

        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);
      }
    }
    // if  ticket 3 date is near
    else
    {
      display_ticket(3, t_name3, from3, to3, day3, month3, year3, quantity3, price3);
      // if  ticket 1 date is near
      if (date1 < date2)
      {
        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);

        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);
      }
      // if  ticket 2 date is near
      else
      {
        display_ticket(2, t_name2, from2, to2, day2, month2, year2, quantity2, price2);

        display_ticket(1, t_name1, from1, to1, day1, month1, year1, quantity1, price1);
      }
    }
  }
}
