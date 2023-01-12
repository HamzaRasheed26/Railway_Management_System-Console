#include <iostream>
using namespace std;
main()
{
  // program Starts

  system("cls");

  string username, password;
  string notice = " No Notice Available!  ";
  int option, sub_op;
  char c;

  // ***********for train 1 variables***********
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

  // ***********for train 2 variables***********
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

  // ***********for train 3 variables***********
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

  // ***********for train 4 variables***********
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

  // ***********for train 5 variables***********
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

  // program start from here

  cout << "*************************************************************" << endl;
  cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
  cout << "*************************************************************" << endl
       << endl;

  cout << " Login Page >>" << endl
       << endl;
  cout << "Enter username (Admin, User).........:";
  cin >> username;
  if (username == "admin" || username == "Admin")
  {
    cout << "Enter Password.........(123)..........:";
    cin >> password;
  }

  system("cls");

  if ((username == "admin" || username == "Admin") && password == "123")
  {
    cout << "*************************************************************" << endl;
    cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
    cout << "*************************************************************" << endl
         << endl;

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

    system("cls");

    if (option == 1)
    {
      // Admin menu1 op1 start

      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " Admin >> View Train Routes" << endl;
      cout << "_____________________________________________________________" << endl;
      cout << " Select any Train to see route....." << endl;
      cout << "Train names:" << endl;
      cout << " 1. " << t1 << endl;
      cout << " 2. " << t2 << endl;
      cout << " 3. " << t3 << endl;
      cout << " 4. " << t4 << endl;
      cout << "Select anyone option.....:";
      cin >> sub_op;
      system("cls");

      if (sub_op == 1)
      {
        // train 1
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Train Routes" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t1 << endl
             << endl;
        cout << "Stations\tArrival\tDeparture " << endl;
        cout << t1s1 << "\t\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        cout << t1s2 << "\t\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        cout << t1s3 << "\t\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        cout << t1s4 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
      }
      else if (sub_op == 2)
      {
        // train 2
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Train Routes" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t2 << endl
             << endl;
        cout << "Stations\tArrival\tDeparture " << endl;
        cout << t2s1 << "\t\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        cout << t2s2 << "\t\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        cout << t2s3 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        cout << t2s4 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
      }
      else if (sub_op == 3)
      {
        // train 3
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Train Routes" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t3 << endl
             << endl;
        cout << "Stations\tArrival\tDeparture " << endl;
        cout << t3s1 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        cout << t3s2 << "\t\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        cout << t3s3 << "\t\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        cout << t3s4 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
      }
      else if (sub_op == 4)
      {
        // train 4
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Train Routes" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t4 << endl
             << endl;
        cout << "Stations\tArrival\tDeparture " << endl;
        cout << t4s1 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        cout << t4s2 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        cout << t4s3 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        cout << t4s4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
      }
      else
      {
        cout << " Invalid Option!" << endl;
      }
      cout << endl
           << "Press any key for continue........";
      cin >> c;
      // Admin menu1 op1 ends
    }
    else if (option == 2)
    {
      // Admin menu1 op2 start
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " Admin >> Add new Train Route" << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Enter train name :"; // train name
      cin >> t5;
      cout << "Station-1 name :"; // station 1 name
      cin >> t5s1;
      cout << "Arrival Time( hh:mm :"; // arrival time station 1
      cin >> t5s1_ath;
      cin >> t5s1_atm;
      cout << "Departure Time( hh:mm )"; // departure time station 1
      cin >> t5s1_dth;
      cin >> t5s1_dtm;
      cout << "Station-2 name :"; // station 2 name
      cin >> t5s2;
      cout << "Arrival Time( hh:mm :"; // arrival time station 2
      cin >> t5s2_ath;
      cin >> t5s2_atm;
      cout << "Departure Time( hh:mm )"; // departure time station 2
      cin >> t5s2_dth;
      cin >> t5s2_dtm;
      cout << "Station-3 name :"; // station 3 name
      cin >> t5s3;
      cout << "Arrival Time( hh:mm :"; // arrival time station 3
      cin >> t5s3_ath;
      cin >> t5s3_atm;
      cout << "Departure Time( hh:mm )"; // departure time station 3
      cin >> t5s3_dth;
      cin >> t5s3_dtm;
      cout << "Station-3 name :"; // station 4 name
      cin >> t5s4;
      cout << "Arrival Time( hh:mm :"; // arrival time station 4
      cin >> t5s4_ath;
      cin >> t5s4_atm;
      cout << "Departure Time( hh:mm ) :"; // departure time station 4
      cin >> t5s4_dth;
      cin >> t5s4_dtm;
      cout << "Set Ticket Price :";
      cin >> t5ticket;
      cout << "Set cargo rate per kg :";
      cin >> t5cargo;

      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // Admin menu1 op2 ends
    }
    else if (option == 3)
    {
      // Admin menu1 op3 start
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " Admin >> Set Ticket Prices" << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Select Available Train .........." << endl;
      cout << " 1. " << t1 << endl;
      cout << " 2. " << t2 << endl;
      cout << " 3. " << t3 << endl;
      cout << " 4. " << t4 << endl;
      cout << "Your option.....:";
      cin >> sub_op;
      system("cls");

      if (sub_op == 1)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> Set Ticket Prices" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t1 << endl;
        cout << "Enter ticket price :";
        cin >> t1ticket;
      }
      else if (sub_op == 2)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> Set Ticket Prices" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t2 << endl;
        cout << "Enter ticket price :";
        cin >> t2ticket;
      }
      else if (sub_op == 3)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> Set Ticket Prices" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t3 << endl;
        cout << "Enter ticket price :";
        cin >> t3ticket;
      }
      else if (sub_op == 4)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> Set Ticket Prices" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t4 << endl;
        cout << "Enter ticket price :";
        cin >> t4ticket;
      }
      else
      {
        cout << " Invalid Option! " << endl;
      }
      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // Admin menu1 op3 ends
    }
    else if (option == 4)
    {
      // Admin menu1 op4 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " Admin >> Set Freight Rate " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Select Available Train .........." << endl;
      cout << " 1. " << t1 << endl;
      cout << " 2. " << t2 << endl;
      cout << " 3. " << t3 << endl;
      cout << " 4. " << t4 << endl;
      cout << "Your option.....:";
      cin >> sub_op;
      system("cls");

      if (sub_op == 1)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> Set Freight Rate " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t1 << endl;
        cout << "Enter cargo rate per kg :";
        cin >> t1cargo;
      }
      else if (sub_op == 2)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> Set Freight Rate " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t2 << endl;
        cout << "Enter cargo rate per kg :";
        cin >> t2cargo;
      }
      else if (sub_op == 3)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> Set Freight Rate " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t3 << endl;
        cout << "Enter cargo rate per kg :";
        cin >> t3cargo;
      }
      else if (sub_op == 4)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> Set Freight Rate " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t4 << endl;
        cout << "Enter cargo rate per kg :";
        cin >> t4cargo;
      }
      else
      {
        cout << " Invalid Option!" << endl;
      }
      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // Admin menu1 op4 ends
    }
    else if (option == 5)
    {
      // Admin menu1 op5 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " Admin >> View Station Schedule  " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Select any from available stations......" << endl;
      cout << " 1. Rawalpindi" << endl;
      cout << " 2. Gujrat    " << endl;
      cout << " 3. Lahore    " << endl;
      cout << " 4. Sahiwal   " << endl;
      cout << " 5. Faislabad " << endl;
      cout << " 6. Multan    " << endl;
      cout << " 7. Sadiqabad " << endl;
      cout << "Your Option.....:";
      cin >> sub_op;
      system("cls");

      if (sub_op == 1)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Rawalpindi" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Rawalpindi")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Rawalpindi")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Rawalpindi")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Rawalpindi")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Rawalpindi")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Rawalpindi")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Rawalpindi")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Rawalpindi")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Rawalpindi")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Rawalpindi")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Rawalpindi")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Rawalpindi")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Rawalpindi")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Rawalpindi")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Rawalpindi")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Rawalpindi")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 2)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Gujrat" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Gujrat")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Gujrat")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Gujrat")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Gujrat")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Gujrat")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Gujrat")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Gujrat")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Gujrat")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Gujrat")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Gujrat")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Gujrat")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Gujrat")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Gujrat")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Gujrat")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Gujrat")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Gujrat")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 3)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Lahore" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Lahore")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Lahore")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Lahore")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Lahore")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Lahore")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Lahore")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Lahore")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Lahore")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Lahore")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Lahore")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Lahore")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Lahore")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Lahore")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Lahore")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Lahore")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Lahore")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 4)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Sahiwal" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Sahiwal")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Sahiwal")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Sahiwal")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Sahiwal")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Sahiwal")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Sahiwal")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Sahiwal")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Sahiwal")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Sahiwal")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Sahiwal")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Sahiwal")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Sahiwal")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Sahiwal")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Sahiwal")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Sahiwal")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Sahiwal")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 5)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Faislabad" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Faislabad")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Faislabad")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Faislabad")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Faislabad")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Faislabad")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Faislabad")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Faislabad")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Faislabad")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Faislabad")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Faislabad")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Faislabad")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Faislabad")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Faislabad")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Faislabad")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Faislabad")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Faislabad")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 6)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Multan" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Multan")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Multan")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Multan")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Multan")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Multan")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Multan")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Multan")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Multan")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Multan")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Multan")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Multan")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Multan")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Multan")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Multan")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Multan")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Multan")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 7)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " Admin >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Sadiqabad" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Multan")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Sadiqabad")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Sadiqabad")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Sadiqabad")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Sadiqabad")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Sadiqabad")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Sadiqabad")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Sadiqabad")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Sadiqabad")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Sadiqabad")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Sadiqabad")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Sadiqabad")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Sadiqabad")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Sadiqabad")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Sadiqabad")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Sadiqabad")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else
      {
        cout << " Invalid Option! " << endl;
      }

      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // Admin menu1 op5 ends
    }
    else if (option == 6)
    {
      // Admin menu1 op6 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " Admin >> Add Notice " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Write your notice here.....:" << endl;
      cin >> notice;

      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // Admin menu1 op6 ends
    }
    else if (option == 7)
    {
      // Admin menu1 op7 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

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

      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // Admin menu1 op7 ends
    }
    else if (option == 8)
    {
      /* Exit */
    }

    system("cls");

    // Admin Portion Ends
  }

  // ticket buy 1 variables
  string from1, to1, t_name1;
  int quantity1, price1 = 0, op1;
  int weight1, c_price1 = 0;
  float day1 = 0, month1 = 0, year1 = 0;
  float date1;

  // ticket buy 2 variables
  string from2, to2, t_name2;
  int quantity2, price2;
  int weight2, c_price2;
  float day2 = 0, month2 = 0, year2 = 0;
  float date2;

  // ticket buy 3 variables
  string from3, to3, t_name3;
  int quantity3, price3;
  int weight3, c_price3;
  float day3 = 0, month3 = 0, year3 = 0;
  float date3;

  // ticket buy 4 variables
  string from4, to4, t_name4;
  int quantity4, price4;
  int weight4, c_price4;
  float day4 = 0, month4 = 0, year4 = 0;
  float date4;

  // ticket buy 4 variables
  string from5, to5, t_name5;
  int quantity5, price5;
  int weight5, c_price5;
  float day5 = 0, month5 = 0, year5 = 0;
  float date5;

  if (username == "user" || username == "User")
  {
    // User Portion Start

    // User menu1 op start
    cout << "*************************************************************" << endl;
    cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
    cout << "*************************************************************" << endl
         << endl;

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

    system("cls");

    if (option == 1)
    {
      // User menu1 op1 starts

      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " User >> View Train Routes" << endl;
      cout << "_____________________________________________________________" << endl;
      cout << " Select any Train to see route....." << endl;
      cout << "Train names:" << endl;
      cout << " 1. " << t1 << endl;
      cout << " 2. " << t2 << endl;
      cout << " 3. " << t3 << endl;
      cout << " 4. " << t4 << endl;
      cout << "Select anyone option.....:" << endl;
      cin >> sub_op;
      system("cls");

      if (sub_op == 1)
      {
        // train 1
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Train Routes" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t1 << endl
             << endl;
        cout << "Stations\tArrival\tDeparture " << endl;
        cout << t1s1 << "\t\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        cout << t1s2 << "\t\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        cout << t1s3 << "\t\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        cout << t1s4 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
      }
      else if (sub_op == 2)
      {
        // train 2
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Train Routes" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t2 << endl
             << endl;
        cout << "Stations\tArrival\tDeparture " << endl;
        cout << t2s1 << "\t\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        cout << t2s2 << "\t\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        cout << t2s3 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        cout << t2s4 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
      }
      else if (sub_op == 3)
      {
        // train 3
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Train Routes" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t3 << endl
             << endl;
        cout << "Stations\tArrival\tDeparture " << endl;
        cout << t3s1 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        cout << t3s2 << "\t\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        cout << t3s3 << "\t\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        cout << t3s4 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
      }
      else if (sub_op == 4)
      {
        // train 4
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Train Routes" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name : " << t4 << endl
             << endl;
        cout << "Stations\tArrival\tDeparture " << endl;
        cout << t4s1 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        cout << t4s2 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        cout << t4s3 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        cout << t4s4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
      }
      else
      {
        cout << " Invalid Option!" << endl;
      }

      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // User menu1 op1 ends
    }
    else if (option == 2)
    {
      // User menu1 op2 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " User >> View Station Schedule  " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Select any from available stations......" << endl;
      cout << " 1. Rawalpindi" << endl;
      cout << " 2. Gujrat    " << endl;
      cout << " 3. Lahore    " << endl;
      cout << " 4. Sahiwal   " << endl;
      cout << " 5. Faislabad " << endl;
      cout << " 6. Multan    " << endl;
      cout << " 7. Sadiqabad " << endl;
      cout << "Your Option.....:";
      cin >> sub_op;
      system("cls");

      if (sub_op == 1)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Rawalpindi" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Rawalpindi")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Rawalpindi")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Rawalpindi")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Rawalpindi")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Rawalpindi")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Rawalpindi")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Rawalpindi")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Rawalpindi")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Rawalpindi")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Rawalpindi")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Rawalpindi")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Rawalpindi")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Rawalpindi")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Rawalpindi")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Rawalpindi")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Rawalpindi")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 2)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Gujrat" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Gujrat")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Gujrat")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Gujrat")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Gujrat")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Gujrat")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Gujrat")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Gujrat")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Gujrat")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Gujrat")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Gujrat")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Gujrat")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Gujrat")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Gujrat")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Gujrat")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Gujrat")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Gujrat")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 3)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Lahore" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Lahore")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Lahore")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Lahore")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Lahore")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Lahore")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Lahore")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Lahore")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Lahore")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Lahore")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Lahore")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Lahore")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Lahore")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Lahore")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Lahore")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Lahore")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Lahore")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 4)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Sahiwal" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Sahiwal")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Sahiwal")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Sahiwal")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Sahiwal")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Sahiwal")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Sahiwal")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Sahiwal")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Sahiwal")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Sahiwal")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Sahiwal")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Sahiwal")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Sahiwal")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Sahiwal")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Sahiwal")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Sahiwal")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Sahiwal")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 5)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Faislabad" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Faislabad")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Faislabad")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Faislabad")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Faislabad")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Faislabad")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Faislabad")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Faislabad")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Faislabad")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Faislabad")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Faislabad")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Faislabad")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Faislabad")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Faislabad")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Faislabad")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Faislabad")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Faislabad")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 6)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Multan" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Multan")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Multan")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Multan")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Multan")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Multan")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Multan")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Multan")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Multan")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Multan")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Multan")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Multan")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Multan")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Multan")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Multan")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Multan")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Multan")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else if (sub_op == 7)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Station Schedule " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Station Name : Sadiqabad" << endl;
        cout << "Train Name \t Arrival \t Departure " << endl;
        if (t1s1 == "Multan")
        {
          cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
        }
        if (t1s2 == "Sadiqabad")
        {
          cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
        }
        if (t1s3 == "Sadiqabad")
        {
          cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
        }
        if (t1s4 == "Sadiqabad")
        {
          cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        if (t2s1 == "Sadiqabad")
        {
          cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
        }
        if (t2s2 == "Sadiqabad")
        {
          cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
        }
        if (t2s3 == "Sadiqabad")
        {
          cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
        }
        if (t2s4 == "Sadiqabad")
        {
          cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        if (t3s1 == "Sadiqabad")
        {
          cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
        }
        if (t3s2 == "Sadiqabad")
        {
          cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
        }
        if (t3s3 == "Sadiqabad")
        {
          cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
        }
        if (t3s4 == "Sadiqabad")
        {
          cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        if (t4s1 == "Sadiqabad")
        {
          cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
        }
        if (t4s2 == "Sadiqabad")
        {
          cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
        }
        if (t4s3 == "Sadiqabad")
        {
          cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
        }
        if (t4s4 == "Sadiqabad")
        {
          cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
      }
      else
      {
        cout << " Invalid Option! " << endl;
      }

      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // User menu1 op2 ends
    }
    else if (option == 3)
    {
      // User menu1 op3 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " User >> View Tickets Price " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Train Name         Ticket Price" << endl;
      cout << " 1. " << t1 << "\t\t" << t1ticket << endl;
      cout << " 2. " << t2 << "\t" << t2ticket << endl;
      cout << " 3. " << t3 << "\t" << t3ticket << endl;
      cout << " 4. " << t4 << "\t" << t4ticket << endl;

      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // User menu1 op3 ends
    }
    else if (option == 4)
    {
      // User menu1 op4 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " User >> Buy Tickets " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Available Trains......" << endl;
      cout << "1. " << t1 << endl;
      cout << "2. " << t2 << endl;
      cout << "3. " << t3 << endl;
      cout << "4. " << t4 << endl;
      cout << "Your option..........";
      cin >> sub_op;
      system("cls");

      if (sub_op == 1)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Buy Tickets " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name :" << t1 << endl;
        cout << "Stations available :" << endl;
        cout << t1s1 << " " << t1s2 << " " << t1s3 << " " << t1s4 << endl;
        cout << "From Station :";
        cin >> from1;
        cout << "To Station :";
        cin >> to1;
        cout << " Enter date ( dd mm yyyy):";
        cin >> day1;
        cin >> month1;
        cin >> year1;
        cout << "Ticket price is :" << t1ticket << endl;
        cout << "Enter quantity of tickets :";
        cin >> quantity1;
        price1 = t1ticket * quantity1;
        cout << "Total price for " << quantity1 << " tickets :" << price1 << endl;
        cout << "You want to buy Ticket (1 for yes, 0 for not) :";
        cin >> op1;
        t_name1 = t1;
      }
      else if (sub_op == 2)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Buy Tickets " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name :" << t2 << endl;
        cout << "Stations available :" << endl;
        cout << t2s1 << " " << t2s2 << " " << t2s3 << " " << t2s4 << endl;
        cout << "From Station :";
        cin >> from1;
        cout << "To Station :";
        cin >> to1;
        cout << " Enter date ( dd mm yyyy):";
        cin >> day1;
        cin >> month1;
        cin >> year1;
        cout << "Ticket price is :" << t2ticket << endl;
        cout << "Enter quantity of tickets :";
        cin >> quantity1;
        price1 = t2ticket * quantity1;
        cout << "Total price for " << quantity1 << " tickets :" << price1 << endl;
        cout << "You want to buy Ticket (1 for yes, 0 for not) :";
        cin >> op1;
        t_name1 = t2;
      }
      else if (sub_op == 3)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Buy Tickets " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name :" << t3 << endl;
        cout << "Stations available :" << endl;
        cout << t3s1 << " " << t3s2 << " " << t3s3 << " " << t3s4 << endl;
        cout << "From Station :";
        cin >> from1;
        cout << "To Station :";
        cin >> to1;
        cout << " Enter date ( dd mm yyyy):";
        cin >> day1;
        cin >> month1;
        cin >> year1;
        cout << "Ticket price is :" << t3ticket << endl;
        cout << "Enter quantity of tickets :";
        cin >> quantity1;
        price1 = t3ticket * quantity1;
        cout << "Total price for " << quantity1 << " tickets :" << price1 << endl;
        cout << "You want to buy Ticket (1 for yes, 0 for not) :";
        cin >> op1;
        t_name1 = t3;
      }
      else if (sub_op == 4)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Buy Tickets " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name :" << t4 << endl;
        cout << "Stations available :" << endl;
        cout << t4s1 << "  " << t4s2 << "  " << t4s3 << "  " << t4s4 << endl;
        cout << "From Station :";
        cin >> from1;
        cout << "To Station :";
        cin >> to1;
        cout << " Enter date ( dd mm yyyy):";
        cin >> day1;
        cin >> month1;
        cin >> year1;
        cout << "Ticket price is :" << t4ticket << endl;
        cout << "Enter quantity of tickets :";
        cin >> quantity1;
        price1 = t4ticket * quantity1;
        cout << "Total price for " << quantity1 << " tickets :" << price1 << endl;
        cout << "You want to buy Ticket (1 for yes, 0 for not) :";
        cin >> op1;
        t_name1 = t4;
      }
      else
      {
        cout << " Invalid Option! " << endl;
      }
      system("cls");
      if (op1 == 1)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << "You buy Ticket Succesfully ***" << endl;
        cout << "Train Name :" << t_name1 << endl;
        cout << "From station :" << from1 << endl;
        cout << "To station :" << to1 << endl;
        cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
        cout << "Quantity :" << quantity1 << endl;
        cout << "Price :" << price1 << endl;
        cout << "****Thanks for buying Ticket****" << endl;
        date1 = day1 + (month1 * 30.417);
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
      cout << endl
           << "Press any key for continue........";
      cin >> c;

      // User menu1 op4 ends
    }
    else if (option == 5)
    {
      // User menu1 op5 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " User >> Your Tickets " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "You have no tickets!" << endl;
      // User menu1 op5 ends
    }
    else if (option == 6)
    {
      // User menu1 op6 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " User >> View Freight Rates " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Train Name         Rate/kg   " << endl;
      cout << " 1. " << t1 << "\t\t" << t1cargo << endl;
      cout << " 2. " << t2 << "\t" << t2cargo << endl;
      cout << " 3. " << t3 << "\t" << t3cargo << endl;
      cout << " 4. " << t4 << "\t" << t4cargo << endl;

      cout << endl
           << "Press any key for continue........";
      cin >> c;
      // User menu1 op6 ends
    }
    else if (option == 7)
    {
      // User menu1 op7 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " User >> Book Cargo " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Available Trains......" << endl;
      cout << "1. " << t1 << endl;
      cout << "2. " << t2 << endl;
      cout << "3. " << t3 << endl;
      cout << "4. " << t4 << endl;
      cout << "Your option..........";
      cin >> sub_op;
      system("cls");

      if (sub_op == 1)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Book Cargo " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name :" << t1 << endl;
        cout << "Price per kg :" << t1cargo << endl;
        cout << "Enter the cargo weight (kg) :";
        cin >> weight1;
        c_price1 = t1cargo * weight1;
        cout << "You have to pay :" << c_price1 << endl;
        cout << "You want to book cargo (1 for yes, 0 for not) :";
        cin >> op1;
      }
      else if (sub_op == 2)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Book Cargo " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name :" << t2 << endl;
        cout << "Price per kg :" << t2cargo << endl;
        cout << "Enter the cargo weight (kg) :";
        cin >> weight1;
        c_price1 = t2cargo * weight1;
        cout << "You have to pay :" << c_price1 << endl;
        cout << "You want to book cargo (1 for yes, 0 for not) :";
        cin >> op1;
      }
      else if (sub_op == 3)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Book Cargo " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name :" << t3 << endl;
        cout << "Price per kg :" << t3cargo << endl;
        cout << "Enter the cargo weight (kg) :";
        cin >> weight1;
        c_price1 = t3cargo * weight1;
        cout << "You have to pay :" << c_price1 << endl;
        cout << "You want to book cargo (1 for yes, 0 for not) :";
        cin >> op1;
      }
      else if (sub_op == 4)
      {
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Book Cargo " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name :" << t4 << endl;
        cout << "Price per kg :" << t4cargo << endl;
        cout << "Enter the cargo weight (kg) :";
        cin >> weight1;
        c_price1 = t4cargo * weight1;
        cout << "You have to pay :" << c_price1 << endl;
        cout << "You want to book cargo (1 for yes, 0 for not) :";
        cin >> op1;
      }
      else
      {
        cout << " Invalid Option! " << endl;
      }

      if (op1 == 1)
      {
        cout << "Your cargo succesfully booked " << endl;
      }
      else
      {
        weight1 = 0;
        c_price1 = 0;
      }
      cout << endl
           << "Press any key for continue........";
      cin >> c;
      // User menu1 op7 ends
    }
    else if (option == 8)
    {
      // User menu1 op8 starts
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

      cout << " User >> View Notice " << endl;
      cout << "_____________________________________________________________" << endl;
      cout << "Notice......." << endl;
      cout << notice;

      cout << endl
           << "Press any key for continue........";
      cin >> c;
      // User menu1 op8 ends
    }
    // User menu1 All op ends
    /*    MENU 2 STARTS     */
    if (option < 9)
    {
      system("cls");
      // User menu 2 op start
      cout << "*************************************************************" << endl;
      cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
      cout << "*************************************************************" << endl
           << endl;

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

      system("cls");

      if (option == 1)
      {
        // User menu1 op1 starts

        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Train Routes" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << " Select any Train to see route....." << endl;
        cout << "Train names:" << endl;
        cout << " 1. " << t1 << endl;
        cout << " 2. " << t2 << endl;
        cout << " 3. " << t3 << endl;
        cout << " 4. " << t4 << endl;
        cout << "Select anyone option.....:" << endl;
        cin >> sub_op;
        system("cls");

        if (sub_op == 1)
        {
          // train 1
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Train Routes" << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name : " << t1 << endl
               << endl;
          cout << "Stations\tArrival\tDeparture " << endl;
          cout << t1s1 << "\t\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
          cout << t1s2 << "\t\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
          cout << t1s3 << "\t\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
          cout << t1s4 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
        }
        else if (sub_op == 2)
        {
          // train 2
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Train Routes" << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name : " << t2 << endl
               << endl;
          cout << "Stations\tArrival\tDeparture " << endl;
          cout << t2s1 << "\t\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
          cout << t2s2 << "\t\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
          cout << t2s3 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
          cout << t2s4 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
        }
        else if (sub_op == 3)
        {
          // train 3
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Train Routes" << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name : " << t3 << endl
               << endl;
          cout << "Stations\tArrival\tDeparture " << endl;
          cout << t3s1 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
          cout << t3s2 << "\t\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
          cout << t3s3 << "\t\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
          cout << t3s4 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
        }
        else if (sub_op == 4)
        {
          // train 4
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Train Routes" << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name : " << t4 << endl
               << endl;
          cout << "Stations\tArrival\tDeparture " << endl;
          cout << t4s1 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
          cout << t4s2 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
          cout << t4s3 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
          cout << t4s4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
        }
        else
        {
          cout << " Invalid Option!" << endl;
        }

        cout << endl
             << "Press any key for continue........";
        cin >> c;

        // User menu1 op1 ends
      }
      else if (option == 2)
      {
        // User menu2 op2 starts
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Station Schedule  " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Select any from available stations......" << endl;
        cout << " 1. Rawalpindi" << endl;
        cout << " 2. Gujrat    " << endl;
        cout << " 3. Lahore    " << endl;
        cout << " 4. Sahiwal   " << endl;
        cout << " 5. Faislabad " << endl;
        cout << " 6. Multan    " << endl;
        cout << " 7. Sadiqabad " << endl;
        cout << "Your Option.....:";
        cin >> sub_op;
        system("cls");

        if (sub_op == 1)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Station Schedule " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Station Name : Rawalpindi" << endl;
          cout << "Train Name \t Arrival \t Departure " << endl;
          if (t1s1 == "Rawalpindi")
          {
            cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
          }
          if (t1s2 == "Rawalpindi")
          {
            cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
          }
          if (t1s3 == "Rawalpindi")
          {
            cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
          }
          if (t1s4 == "Rawalpindi")
          {
            cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
          }
          if (t2s1 == "Rawalpindi")
          {
            cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
          }
          if (t2s2 == "Rawalpindi")
          {
            cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
          }
          if (t2s3 == "Rawalpindi")
          {
            cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
          }
          if (t2s4 == "Rawalpindi")
          {
            cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
          }
          if (t3s1 == "Rawalpindi")
          {
            cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
          }
          if (t3s2 == "Rawalpindi")
          {
            cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
          }
          if (t3s3 == "Rawalpindi")
          {
            cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
          }
          if (t3s4 == "Rawalpindi")
          {
            cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
          }
          if (t4s1 == "Rawalpindi")
          {
            cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
          }
          if (t4s2 == "Rawalpindi")
          {
            cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
          }
          if (t4s3 == "Rawalpindi")
          {
            cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
          }
          if (t4s4 == "Rawalpindi")
          {
            cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
          }
        }
        else if (sub_op == 2)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Station Schedule " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Station Name : Gujrat" << endl;
          cout << "Train Name \t Arrival \t Departure " << endl;
          if (t1s1 == "Gujrat")
          {
            cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
          }
          if (t1s2 == "Gujrat")
          {
            cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
          }
          if (t1s3 == "Gujrat")
          {
            cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
          }
          if (t1s4 == "Gujrat")
          {
            cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
          }
          if (t2s1 == "Gujrat")
          {
            cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
          }
          if (t2s2 == "Gujrat")
          {
            cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
          }
          if (t2s3 == "Gujrat")
          {
            cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
          }
          if (t2s4 == "Gujrat")
          {
            cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
          }
          if (t3s1 == "Gujrat")
          {
            cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
          }
          if (t3s2 == "Gujrat")
          {
            cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
          }
          if (t3s3 == "Gujrat")
          {
            cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
          }
          if (t3s4 == "Gujrat")
          {
            cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
          }
          if (t4s1 == "Gujrat")
          {
            cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
          }
          if (t4s2 == "Gujrat")
          {
            cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
          }
          if (t4s3 == "Gujrat")
          {
            cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
          }
          if (t4s4 == "Gujrat")
          {
            cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
          }
        }
        else if (sub_op == 3)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Station Schedule " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Station Name : Lahore" << endl;
          cout << "Train Name \t Arrival \t Departure " << endl;
          if (t1s1 == "Lahore")
          {
            cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
          }
          if (t1s2 == "Lahore")
          {
            cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
          }
          if (t1s3 == "Lahore")
          {
            cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
          }
          if (t1s4 == "Lahore")
          {
            cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
          }
          if (t2s1 == "Lahore")
          {
            cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
          }
          if (t2s2 == "Lahore")
          {
            cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
          }
          if (t2s3 == "Lahore")
          {
            cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
          }
          if (t2s4 == "Lahore")
          {
            cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
          }
          if (t3s1 == "Lahore")
          {
            cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
          }
          if (t3s2 == "Lahore")
          {
            cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
          }
          if (t3s3 == "Lahore")
          {
            cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
          }
          if (t3s4 == "Lahore")
          {
            cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
          }
          if (t4s1 == "Lahore")
          {
            cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
          }
          if (t4s2 == "Lahore")
          {
            cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
          }
          if (t4s3 == "Lahore")
          {
            cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
          }
          if (t4s4 == "Lahore")
          {
            cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
          }
        }
        else if (sub_op == 4)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Station Schedule " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Station Name : Sahiwal" << endl;
          cout << "Train Name \t Arrival \t Departure " << endl;
          if (t1s1 == "Sahiwal")
          {
            cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
          }
          if (t1s2 == "Sahiwal")
          {
            cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
          }
          if (t1s3 == "Sahiwal")
          {
            cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
          }
          if (t1s4 == "Sahiwal")
          {
            cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
          }
          if (t2s1 == "Sahiwal")
          {
            cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
          }
          if (t2s2 == "Sahiwal")
          {
            cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
          }
          if (t2s3 == "Sahiwal")
          {
            cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
          }
          if (t2s4 == "Sahiwal")
          {
            cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
          }
          if (t3s1 == "Sahiwal")
          {
            cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
          }
          if (t3s2 == "Sahiwal")
          {
            cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
          }
          if (t3s3 == "Sahiwal")
          {
            cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
          }
          if (t3s4 == "Sahiwal")
          {
            cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
          }
          if (t4s1 == "Sahiwal")
          {
            cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
          }
          if (t4s2 == "Sahiwal")
          {
            cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
          }
          if (t4s3 == "Sahiwal")
          {
            cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
          }
          if (t4s4 == "Sahiwal")
          {
            cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
          }
        }
        else if (sub_op == 5)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Station Schedule " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Station Name : Faislabad" << endl;
          cout << "Train Name \t Arrival \t Departure " << endl;
          if (t1s1 == "Faislabad")
          {
            cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
          }
          if (t1s2 == "Faislabad")
          {
            cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
          }
          if (t1s3 == "Faislabad")
          {
            cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
          }
          if (t1s4 == "Faislabad")
          {
            cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
          }
          if (t2s1 == "Faislabad")
          {
            cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
          }
          if (t2s2 == "Faislabad")
          {
            cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
          }
          if (t2s3 == "Faislabad")
          {
            cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
          }
          if (t2s4 == "Faislabad")
          {
            cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
          }
          if (t3s1 == "Faislabad")
          {
            cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
          }
          if (t3s2 == "Faislabad")
          {
            cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
          }
          if (t3s3 == "Faislabad")
          {
            cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
          }
          if (t3s4 == "Faislabad")
          {
            cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
          }
          if (t4s1 == "Faislabad")
          {
            cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
          }
          if (t4s2 == "Faislabad")
          {
            cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
          }
          if (t4s3 == "Faislabad")
          {
            cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
          }
          if (t4s4 == "Faislabad")
          {
            cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
          }
        }
        else if (sub_op == 6)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Station Schedule " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Station Name : Multan" << endl;
          cout << "Train Name \t Arrival \t Departure " << endl;
          if (t1s1 == "Multan")
          {
            cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
          }
          if (t1s2 == "Multan")
          {
            cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
          }
          if (t1s3 == "Multan")
          {
            cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
          }
          if (t1s4 == "Multan")
          {
            cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
          }
          if (t2s1 == "Multan")
          {
            cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
          }
          if (t2s2 == "Multan")
          {
            cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
          }
          if (t2s3 == "Multan")
          {
            cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
          }
          if (t2s4 == "Multan")
          {
            cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
          }
          if (t3s1 == "Multan")
          {
            cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
          }
          if (t3s2 == "Multan")
          {
            cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
          }
          if (t3s3 == "Multan")
          {
            cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
          }
          if (t3s4 == "Multan")
          {
            cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
          }
          if (t4s1 == "Multan")
          {
            cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
          }
          if (t4s2 == "Multan")
          {
            cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
          }
          if (t4s3 == "Multan")
          {
            cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
          }
          if (t4s4 == "Multan")
          {
            cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
          }
        }
        else if (sub_op == 7)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Station Schedule " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Station Name : Sadiqabad" << endl;
          cout << "Train Name \t Arrival \t Departure " << endl;
          if (t1s1 == "Multan")
          {
            cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
          }
          if (t1s2 == "Sadiqabad")
          {
            cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
          }
          if (t1s3 == "Sadiqabad")
          {
            cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
          }
          if (t1s4 == "Sadiqabad")
          {
            cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
          }
          if (t2s1 == "Sadiqabad")
          {
            cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
          }
          if (t2s2 == "Sadiqabad")
          {
            cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
          }
          if (t2s3 == "Sadiqabad")
          {
            cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
          }
          if (t2s4 == "Sadiqabad")
          {
            cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
          }
          if (t3s1 == "Sadiqabad")
          {
            cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
          }
          if (t3s2 == "Sadiqabad")
          {
            cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
          }
          if (t3s3 == "Sadiqabad")
          {
            cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
          }
          if (t3s4 == "Sadiqabad")
          {
            cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
          }
          if (t4s1 == "Sadiqabad")
          {
            cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
          }
          if (t4s2 == "Sadiqabad")
          {
            cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
          }
          if (t4s3 == "Sadiqabad")
          {
            cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
          }
          if (t4s4 == "Sadiqabad")
          {
            cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
          }
        }
        else
        {
          cout << " Invalid Option! " << endl;
        }

        cout << endl
             << "Press any key for continue........";
        cin >> c;

        // User menu2 op2 ends
      }
      else if (option == 3)
      {
        // User menu2 op3 starts
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Tickets Price " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name         Ticket Price" << endl;
        cout << " 1. " << t1 << "\t\t" << t1ticket << endl;
        cout << " 2. " << t2 << "\t" << t2ticket << endl;
        cout << " 3. " << t3 << "\t" << t3ticket << endl;
        cout << " 4. " << t4 << "\t" << t4ticket << endl;

        cout << endl
             << "Press any key for continue........";
        cin >> c;

        // User menu2 op3 ends
      }
      else if (option == 4)
      {
        // User menu2 op4 starts
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Buy Tickets " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Available Trains......" << endl;
        cout << "1. " << t1 << endl;
        cout << "2. " << t2 << endl;
        cout << "3. " << t3 << endl;
        cout << "4. " << t4 << endl;
        cout << "Your option..........";
        cin >> sub_op;
        system("cls");

        if (sub_op == 1)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Buy Tickets " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name :" << t1 << endl;
          cout << "Stations available :" << endl;
          cout << t1s1 << " " << t1s2 << " " << t1s3 << " " << t1s4 << endl;
          cout << "From Station :";
          cin >> from2;
          cout << "To Station :";
          cin >> to2;
          cout << " Enter date ( dd mm yyyy):";
          cin >> day2;
          cin >> month2;
          cin >> year2;
          cout << "Ticket price is :" << t1ticket << endl;
          cout << "Enter quantity of tickets :";
          cin >> quantity2;
          price2 = t1ticket * quantity2;
          cout << "Total price for " << quantity2 << " tickets :" << price2 << endl;
          cout << "You want to buy Ticket (1 for yes, 0 for not) :";
          cin >> op1;
          t_name2 = t1;
        }
        else if (sub_op == 2)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Buy Tickets " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name :" << t2 << endl;
          cout << "Stations available :" << endl;
          cout << t2s1 << " " << t2s2 << " " << t2s3 << " " << t2s4 << endl;
          cout << "From Station :";
          cin >> from2;
          cout << "To Station :";
          cin >> to2;
          cout << " Enter date ( dd mm yyyy):";
          cin >> day2;
          cin >> month2;
          cin >> year2;
          cout << "Ticket price is :" << t2ticket << endl;
          cout << "Enter quantity of tickets :";
          cin >> quantity2;
          price2 = t2ticket * quantity2;
          cout << "Total price for " << quantity2 << " tickets :" << price2 << endl;
          cout << "You want to buy Ticket (1 for yes, 0 for not) :";
          cin >> op1;
          t_name2 = t2;
        }
        else if (sub_op == 3)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Buy Tickets " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name :" << t3 << endl;
          cout << "Stations available :" << endl;
          cout << t3s1 << " " << t3s2 << " " << t3s3 << " " << t3s4 << endl;
          cout << "From Station :";
          cin >> from2;
          cout << "To Station :";
          cin >> to2;
          cout << " Enter date ( dd mm yyyy):";
          cin >> day2;
          cin >> month2;
          cin >> year2;
          cout << "Ticket price is :" << t3ticket << endl;
          cout << "Enter quantity of tickets :";
          cin >> quantity2;
          price2 = t3ticket * quantity2;
          cout << "Total price for " << quantity2 << " tickets :" << price2 << endl;
          cout << "You want to buy Ticket (1 for yes, 0 for not) :";
          cin >> op1;
          t_name2 = t3;
        }
        else if (sub_op == 4)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Buy Tickets " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name :" << t4 << endl;
          cout << "Stations available :" << endl;
          cout << t4s1 << "  " << t4s2 << "  " << t4s3 << "  " << t4s4 << endl;
          cout << "From Station :";
          cin >> from2;
          cout << "To Station :";
          cin >> to2;
          cout << " Enter date ( dd mm yyyy):";
          cin >> day2;
          cin >> month2;
          cin >> year2;
          cout << "Ticket price is :" << t4ticket << endl;
          cout << "Enter quantity of tickets :";
          cin >> quantity2;
          price2 = t4ticket * quantity2;
          cout << "Total price for " << quantity2 << " tickets :" << price2 << endl;
          cout << "You want to buy Ticket (1 for yes, 0 for not) :";
          cin >> op1;
          t_name2 = t4;
        }
        else
        {
          cout << " Invalid Option! " << endl;
        }
        if (op1 == 1)
        {
          system("cls");
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << "You buy Ticket Succesfully " << endl;
          cout << "Train Name :" << t_name2 << endl;
          cout << "From station :" << from2 << endl;
          cout << "To station :" << to2 << endl;
          cout << " Date :" << day2 << "-" << month2 << "-" << year2 << endl;
          cout << "Quantity :" << quantity2 << endl;
          cout << "Price :" << price2 << endl;
          cout << "****Thanks for buying Ticket****" << endl;
          date2 = day2 + (month2 * 30.417);
        }
        else
        {
          t_name2 = "";
          quantity2 = 0;
          price2 = 0;
          day2 = 0;
          month2 = 0;
          year2 = 0;
        }
        cout << endl
             << "Press any key for continue........";
        cin >> c;

        // User menu2 op4 ends
      }
      else if (option == 5)
      {
        // User menu2 op5 starts
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Your Tickets " << endl;
        cout << "_____________________________________________________________" << endl;

        if (price1 != 0)
        {
          cout << "*** Ticket no. 1 ***" << endl;
          cout << "Train : " << t_name1 << endl;
          cout << "From  : " << from1 << endl;
          cout << "To    : " << to1 << endl;
          cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
          cout << "Quantity : " << quantity1 << endl;
          cout << "Price : " << price1 << endl
               << endl;
        }
        else
        {
          cout << "YOU HAVE NO TICKETS!" << endl;
        }
        cout << endl
             << "Press any key for continue........";
        cin >> c;

        // User menu2 op5 ends
      }
      else if (option == 6)
      {
        // User menu2 op6 starts
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Freight Rates " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Train Name         Rate/kg   " << endl;
        cout << " 1. " << t1 << "\t\t" << t1cargo << endl;
        cout << " 2. " << t2 << "\t" << t2cargo << endl;
        cout << " 3. " << t3 << "\t" << t3cargo << endl;
        cout << " 4. " << t4 << "\t\t" << t4cargo << endl;

        cout << endl
             << "Press any key for continue........";
        cin >> c;

        // User menu2 op6 ends
      }
      else if (option == 7)
      {
        // User menu2 op7 starts
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> Book Cargo " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Available Trains......" << endl;
        cout << "1. " << t1 << endl;
        cout << "2. " << t2 << endl;
        cout << "3. " << t3 << endl;
        cout << "4. " << t4 << endl;
        cout << "Your option..........";
        cin >> sub_op;
        system("cls");

        if (sub_op == 1)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Book Cargo " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name :" << t1 << endl;
          cout << "Price per kg :" << t1cargo << endl;
          cout << "Enter the cargo weight (kg) :";
          cin >> weight2;
          c_price2 = t1cargo * weight2;
          cout << "You have to pay :" << c_price2 << endl;
          cout << "You want to book cargo (1 for yes, 0 for not) :";
          cin >> op1;
        }
        else if (sub_op == 2)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Book Cargo " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name :" << t2 << endl;
          cout << "Price per kg :" << t2cargo << endl;
          cout << "Enter the cargo weight (kg) :";
          cin >> weight2;
          c_price2 = t2cargo * weight2;
          cout << "You have to pay :" << c_price2 << endl;
          cout << "You want to book cargo (1 for yes, 0 for not) :";
          cin >> op1;
        }
        else if (sub_op == 3)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Book Cargo " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name :" << t3 << endl;
          cout << "Price per kg :" << t3cargo << endl;
          cout << "Enter the cargo weight (kg) :";
          cin >> weight2;
          c_price2 = t3cargo * weight2;
          cout << "You have to pay :" << c_price2 << endl;
          cout << "You want to book cargo (1 for yes, 0 for not) :";
          cin >> op1;
        }
        else if (sub_op == 4)
        {
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Book Cargo " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name :" << t4 << endl;
          cout << "Price per kg :" << t4cargo << endl;
          cout << "Enter the cargo weight (kg) :";
          cin >> weight2;
          c_price2 = t4cargo * weight2;
          cout << "You have to pay :" << c_price2 << endl;
          cout << "You want to book cargo (1 for yes, 0 for not) :";
          cin >> op1;
        }
        else
        {
          cout << " Invalid Option! " << endl;
        }

        if (op1 == 1)
        {
          cout << "Your cargo succesfully booked " << endl;
        }
        else
        {
          weight2 = 0;
          c_price2 = 0;
        }
        cout << endl
             << "Press any key for continue........";
        cin >> c;

        // User menu2 op7 ends
      }
      else if (option == 8)
      {
        // User menu2 op8 starts
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

        cout << " User >> View Notice " << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "Notice Board......" << endl;
        cout << notice;

        cout << endl
             << "Press any key for continue........";
        cin >> c;

        // User menu2 op8 ends
      }
      // User menu2 All op ends
      /**** MENU 3 STARTS  ****/
      if (option < 9)
      {
        system("cls");
        // User menu 3 op start
        cout << "*************************************************************" << endl;
        cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
        cout << "*************************************************************" << endl
             << endl;

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

        system("cls");

        if (option == 1)
        {
          // User menu3 op1 starts
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Train Routes" << endl;
          cout << "_____________________________________________________________" << endl;
          cout << " Select any Train to see route....." << endl;
          cout << "Train names:" << endl;
          cout << " 1. " << t1 << endl;
          cout << " 2. " << t2 << endl;
          cout << " 3. " << t3 << endl;
          cout << " 4. " << t4 << endl;
          cout << "Select anyone option.....:" << endl;
          cin >> sub_op;
          system("cls");

          if (sub_op == 1)
          {
            // train 1
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Train Routes" << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name : " << t1 << endl
                 << endl;
            cout << "Stations\tArrival\tDeparture " << endl;
            cout << t1s1 << "\t\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
            cout << t1s2 << "\t\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
            cout << t1s3 << "\t\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
            cout << t1s4 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
          }
          else if (sub_op == 2)
          {
            // train 2
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Train Routes" << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name : " << t2 << endl
                 << endl;
            cout << "Stations\tArrival\tDeparture " << endl;
            cout << t2s1 << "\t\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
            cout << t2s2 << "\t\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
            cout << t2s3 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
            cout << t2s4 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
          }
          else if (sub_op == 3)
          {
            // train 3
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Train Routes" << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name : " << t3 << endl
                 << endl;
            cout << "Stations\tArrival\tDeparture " << endl;
            cout << t3s1 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
            cout << t3s2 << "\t\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
            cout << t3s3 << "\t\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
            cout << t3s4 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
          }
          else if (sub_op == 4)
          {
            // train 4
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Train Routes" << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name : " << t4 << endl
                 << endl;
            cout << "Stations\tArrival\tDeparture " << endl;
            cout << t4s1 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
            cout << t4s2 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
            cout << t4s3 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
            cout << t4s4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
          }
          else
          {
            cout << " Invalid Option!" << endl;
          }

          cout << endl
               << "Press any key for continue........";
          cin >> c;
          // User menu3 op1 ends
        }
        else if (option == 2)
        {
          // User menu3 op2 starts
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Station Schedule  " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Select any from available stations......" << endl;
          cout << " 1. Rawalpindi" << endl;
          cout << " 2. Gujrat    " << endl;
          cout << " 3. Lahore    " << endl;
          cout << " 4. Sahiwal   " << endl;
          cout << " 5. Faislabad " << endl;
          cout << " 6. Multan    " << endl;
          cout << " 7. Sadiqabad " << endl;
          cout << "Your Option.....:";
          cin >> sub_op;
          system("cls");

          if (sub_op == 1)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Station Schedule " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Station Name : Rawalpindi" << endl;
            cout << "Train Name \t Arrival \t Departure " << endl;
            if (t1s1 == "Rawalpindi")
            {
              cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
            }
            if (t1s2 == "Rawalpindi")
            {
              cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
            }
            if (t1s3 == "Rawalpindi")
            {
              cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
            }
            if (t1s4 == "Rawalpindi")
            {
              cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
            }
            if (t2s1 == "Rawalpindi")
            {
              cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
            }
            if (t2s2 == "Rawalpindi")
            {
              cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
            }
            if (t2s3 == "Rawalpindi")
            {
              cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
            }
            if (t2s4 == "Rawalpindi")
            {
              cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
            }
            if (t3s1 == "Rawalpindi")
            {
              cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
            }
            if (t3s2 == "Rawalpindi")
            {
              cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
            }
            if (t3s3 == "Rawalpindi")
            {
              cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
            }
            if (t3s4 == "Rawalpindi")
            {
              cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
            }
            if (t4s1 == "Rawalpindi")
            {
              cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
            }
            if (t4s2 == "Rawalpindi")
            {
              cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
            }
            if (t4s3 == "Rawalpindi")
            {
              cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
            }
            if (t4s4 == "Rawalpindi")
            {
              cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
            }
          }
          else if (sub_op == 2)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Station Schedule " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Station Name : Gujrat" << endl;
            cout << "Train Name \t Arrival \t Departure " << endl;
            if (t1s1 == "Gujrat")
            {
              cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
            }
            if (t1s2 == "Gujrat")
            {
              cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
            }
            if (t1s3 == "Gujrat")
            {
              cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
            }
            if (t1s4 == "Gujrat")
            {
              cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
            }
            if (t2s1 == "Gujrat")
            {
              cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
            }
            if (t2s2 == "Gujrat")
            {
              cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
            }
            if (t2s3 == "Gujrat")
            {
              cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
            }
            if (t2s4 == "Gujrat")
            {
              cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
            }
            if (t3s1 == "Gujrat")
            {
              cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
            }
            if (t3s2 == "Gujrat")
            {
              cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
            }
            if (t3s3 == "Gujrat")
            {
              cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
            }
            if (t3s4 == "Gujrat")
            {
              cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
            }
            if (t4s1 == "Gujrat")
            {
              cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
            }
            if (t4s2 == "Gujrat")
            {
              cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
            }
            if (t4s3 == "Gujrat")
            {
              cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
            }
            if (t4s4 == "Gujrat")
            {
              cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
            }
          }
          else if (sub_op == 3)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Station Schedule " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Station Name : Lahore" << endl;
            cout << "Train Name \t Arrival \t Departure " << endl;
            if (t1s1 == "Lahore")
            {
              cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
            }
            if (t1s2 == "Lahore")
            {
              cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
            }
            if (t1s3 == "Lahore")
            {
              cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
            }
            if (t1s4 == "Lahore")
            {
              cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
            }
            if (t2s1 == "Lahore")
            {
              cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
            }
            if (t2s2 == "Lahore")
            {
              cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
            }
            if (t2s3 == "Lahore")
            {
              cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
            }
            if (t2s4 == "Lahore")
            {
              cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
            }
            if (t3s1 == "Lahore")
            {
              cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
            }
            if (t3s2 == "Lahore")
            {
              cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
            }
            if (t3s3 == "Lahore")
            {
              cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
            }
            if (t3s4 == "Lahore")
            {
              cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
            }
            if (t4s1 == "Lahore")
            {
              cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
            }
            if (t4s2 == "Lahore")
            {
              cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
            }
            if (t4s3 == "Lahore")
            {
              cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
            }
            if (t4s4 == "Lahore")
            {
              cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
            }
          }
          else if (sub_op == 4)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Station Schedule " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Station Name : Sahiwal" << endl;
            cout << "Train Name \t Arrival \t Departure " << endl;
            if (t1s1 == "Sahiwal")
            {
              cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
            }
            if (t1s2 == "Sahiwal")
            {
              cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
            }
            if (t1s3 == "Sahiwal")
            {
              cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
            }
            if (t1s4 == "Sahiwal")
            {
              cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
            }
            if (t2s1 == "Sahiwal")
            {
              cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
            }
            if (t2s2 == "Sahiwal")
            {
              cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
            }
            if (t2s3 == "Sahiwal")
            {
              cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
            }
            if (t2s4 == "Sahiwal")
            {
              cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
            }
            if (t3s1 == "Sahiwal")
            {
              cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
            }
            if (t3s2 == "Sahiwal")
            {
              cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
            }
            if (t3s3 == "Sahiwal")
            {
              cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
            }
            if (t3s4 == "Sahiwal")
            {
              cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
            }
            if (t4s1 == "Sahiwal")
            {
              cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
            }
            if (t4s2 == "Sahiwal")
            {
              cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
            }
            if (t4s3 == "Sahiwal")
            {
              cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
            }
            if (t4s4 == "Sahiwal")
            {
              cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
            }
          }
          else if (sub_op == 5)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Station Schedule " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Station Name : Faislabad" << endl;
            cout << "Train Name \t Arrival \t Departure " << endl;
            if (t1s1 == "Faislabad")
            {
              cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
            }
            if (t1s2 == "Faislabad")
            {
              cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
            }
            if (t1s3 == "Faislabad")
            {
              cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
            }
            if (t1s4 == "Faislabad")
            {
              cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
            }
            if (t2s1 == "Faislabad")
            {
              cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
            }
            if (t2s2 == "Faislabad")
            {
              cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
            }
            if (t2s3 == "Faislabad")
            {
              cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
            }
            if (t2s4 == "Faislabad")
            {
              cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
            }
            if (t3s1 == "Faislabad")
            {
              cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
            }
            if (t3s2 == "Faislabad")
            {
              cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
            }
            if (t3s3 == "Faislabad")
            {
              cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
            }
            if (t3s4 == "Faislabad")
            {
              cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
            }
            if (t4s1 == "Faislabad")
            {
              cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
            }
            if (t4s2 == "Faislabad")
            {
              cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
            }
            if (t4s3 == "Faislabad")
            {
              cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
            }
            if (t4s4 == "Faislabad")
            {
              cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
            }
          }
          else if (sub_op == 6)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Station Schedule " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Station Name : Multan" << endl;
            cout << "Train Name \t Arrival \t Departure " << endl;
            if (t1s1 == "Multan")
            {
              cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
            }
            if (t1s2 == "Multan")
            {
              cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
            }
            if (t1s3 == "Multan")
            {
              cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
            }
            if (t1s4 == "Multan")
            {
              cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
            }
            if (t2s1 == "Multan")
            {
              cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
            }
            if (t2s2 == "Multan")
            {
              cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
            }
            if (t2s3 == "Multan")
            {
              cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
            }
            if (t2s4 == "Multan")
            {
              cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
            }
            if (t3s1 == "Multan")
            {
              cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
            }
            if (t3s2 == "Multan")
            {
              cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
            }
            if (t3s3 == "Multan")
            {
              cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
            }
            if (t3s4 == "Multan")
            {
              cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
            }
            if (t4s1 == "Multan")
            {
              cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
            }
            if (t4s2 == "Multan")
            {
              cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
            }
            if (t4s3 == "Multan")
            {
              cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
            }
            if (t4s4 == "Multan")
            {
              cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
            }
          }
          else if (sub_op == 7)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Station Schedule " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Station Name : Sadiqabad" << endl;
            cout << "Train Name \t Arrival \t Departure " << endl;
            if (t1s1 == "Multan")
            {
              cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
            }
            if (t1s2 == "Sadiqabad")
            {
              cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
            }
            if (t1s3 == "Sadiqabad")
            {
              cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
            }
            if (t1s4 == "Sadiqabad")
            {
              cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
            }
            if (t2s1 == "Sadiqabad")
            {
              cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
            }
            if (t2s2 == "Sadiqabad")
            {
              cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
            }
            if (t2s3 == "Sadiqabad")
            {
              cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
            }
            if (t2s4 == "Sadiqabad")
            {
              cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
            }
            if (t3s1 == "Sadiqabad")
            {
              cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
            }
            if (t3s2 == "Sadiqabad")
            {
              cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
            }
            if (t3s3 == "Sadiqabad")
            {
              cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
            }
            if (t3s4 == "Sadiqabad")
            {
              cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
            }
            if (t4s1 == "Sadiqabad")
            {
              cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
            }
            if (t4s2 == "Sadiqabad")
            {
              cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
            }
            if (t4s3 == "Sadiqabad")
            {
              cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
            }
            if (t4s4 == "Sadiqabad")
            {
              cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
            }
          }
          else
          {
            cout << " Invalid Option! " << endl;
          }

          cout << endl
               << "Press any key for continue........";
          cin >> c;
          // User menu3 op2 ends
        }
        else if (option == 3)
        {
          // User menu3 op3 starts
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Tickets Price " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name         Ticket Price" << endl;
          cout << " 1. " << t1 << "\t\t" << t1ticket << endl;
          cout << " 2. " << t2 << "\t" << t2ticket << endl;
          cout << " 3. " << t3 << "\t" << t3ticket << endl;
          cout << " 4. " << t4 << "\t" << t4ticket << endl;

          cout << endl
               << "Press any key for continue........";
          cin >> c;
          // User menu3 op3 ends
        }
        else if (option == 4)
        {
          // User menu3 op4 starts
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Buy Tickets " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Available Trains......" << endl;
          cout << "1. " << t1 << endl;
          cout << "2. " << t2 << endl;
          cout << "3. " << t3 << endl;
          cout << "4. " << t4 << endl;
          cout << "Your option..........";
          cin >> sub_op;
          system("cls");

          if (sub_op == 1)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Buy Tickets " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name :" << t1 << endl;
            cout << "Stations available :" << endl;
            cout << t1s1 << " " << t1s2 << " " << t1s3 << " " << t1s4 << endl;
            cout << "From Station :";
            cin >> from3;
            cout << "To Station :";
            cin >> to3;
            cout << " Enter date ( dd mm yyyy):";
            cin >> day3;
            cin >> month3;
            cin >> year3;
            cout << "Ticket price is :" << t1ticket << endl;
            cout << "Enter quantity of tickets :";
            cin >> quantity3;
            price3 = t1ticket * quantity3;
            cout << "Total price for " << quantity3 << " tickets :" << price3 << endl;
            cout << "You want to buy Ticket (1 for yes, 0 for not) :";
            cin >> op1;
            t_name3 = t1;
          }
          else if (sub_op == 2)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Buy Tickets " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name :" << t2 << endl;
            cout << "Stations available :" << endl;
            cout << t2s1 << " " << t2s2 << " " << t2s3 << " " << t2s4 << endl;
            cout << "From Station :";
            cin >> from3;
            cout << "To Station :";
            cin >> to3;
            cout << " Enter date ( dd mm yyyy):";
            cin >> day3;
            cin >> month3;
            cin >> year3;
            cout << "Ticket price is :" << t2ticket << endl;
            cout << "Enter quantity of tickets :";
            cin >> quantity3;
            price3 = t2ticket * quantity3;
            cout << "Total price for " << quantity3 << " tickets :" << price3 << endl;
            cout << "You want to buy Ticket (1 for yes, 0 for not) :";
            cin >> op1;
            t_name3 = t2;
          }
          else if (sub_op == 3)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Buy Tickets " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name :" << t3 << endl;
            cout << "Stations available :" << endl;
            cout << t3s1 << " " << t3s2 << " " << t3s3 << " " << t3s4 << endl;
            cout << "From Station :";
            cin >> from3;
            cout << "To Station :";
            cin >> to3;
            cout << " Enter date ( dd mm yyyy):";
            cin >> day3;
            cin >> month3;
            cin >> year3;
            cout << "Ticket price is :" << t3ticket << endl;
            cout << "Enter quantity of tickets :";
            cin >> quantity3;
            price3 = t3ticket * quantity3;
            cout << "Total price for " << quantity3 << " tickets :" << price3 << endl;
            cout << "You want to buy Ticket (1 for yes, 0 for not) :";
            cin >> op1;
            t_name3 = t3;
          }
          else if (sub_op == 4)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Buy Tickets " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name :" << t4 << endl;
            cout << "Stations available :" << endl;
            cout << t4s1 << "  " << t4s2 << "  " << t4s3 << "  " << t4s4 << endl;
            cout << "From Station :";
            cin >> from3;
            cout << "To Station :";
            cin >> to3;
            cout << " Enter date ( dd mm yyyy):";
            cin >> day3;
            cin >> month3;
            cin >> year3;
            cout << "Ticket price is :" << t4ticket << endl;
            cout << "Enter quantity of tickets :";
            cin >> quantity3;
            price3 = t4ticket * quantity3;
            cout << "Total price for " << quantity3 << " tickets :" << price3 << endl;
            cout << "You want to buy Ticket (1 for yes, 0 for not) :";
            cin >> op1;
            t_name3 = t4;
          }
          else
          {
            cout << " Invalid Option! " << endl;
          }
          if (op1 == 1)
          {
            system("cls");
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << "You buy Ticket Succesfully " << endl;
            cout << "Train Name :" << t_name3 << endl;
            cout << "From station :" << from3 << endl;
            cout << "To station :" << to3 << endl;
            cout << " Date :" << day3 << "-" << month3 << "-" << year3 << endl;
            cout << "Quantity :" << quantity3 << endl;
            cout << "Price :" << price3 << endl;
            cout << "****Thanks for buying Ticket****" << endl;
            date3 = day3 + (month3 * 30.417);
          }
          else
          {
            t_name3 = "";
            quantity3 = 0;
            price3 = 0;
            day3 = 0;
            month3 = 0;
            year3 = 0;
          }
          cout << endl
               << "Press any key for continue........";
          cin >> c;

          // User menu3 op4 ends
        }
        else if (option == 5)
        {
          // User menu3 op5 starts
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Your Tickets " << endl;
          cout << "_____________________________________________________________" << endl;

          if (price1 != 0 || price2 != 0)
          {
            cout << "Display according to ticket date which come first....." << endl
                 << endl;
            if (date1 < date2)
            {
              // sorted according t o date wise nearest date ticket come first

              cout << "*** Ticket no. 1 ***" << endl;
              cout << "Train : " << t_name1 << endl;
              cout << "From  : " << from1 << endl;
              cout << "To    : " << to1 << endl;
              cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
              cout << "Quantity : " << quantity1 << endl;
              cout << "Price : " << price1 << endl
                   << endl
                   << endl;

              cout << "*** Ticket no. 2 ***" << endl;
              cout << "Train : " << t_name2 << endl;
              cout << "From  : " << from2 << endl;
              cout << "To    : " << to2 << endl;
              cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
              cout << "Quantity : " << quantity2 << endl;
              cout << "Price : " << price2 << endl
                   << endl
                   << endl;
            }
            else
            {
              cout << "*** Ticket no. 2 ***" << endl;
              cout << "Train : " << t_name2 << endl;
              cout << "From  : " << from2 << endl;
              cout << "To    : " << to2 << endl;
              cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
              cout << "Quantity : " << quantity2 << endl;
              cout << "Price : " << price2 << endl
                   << endl
                   << endl;

              cout << "*** Ticket no. 1 ***" << endl;
              cout << "Train : " << t_name1 << endl;
              cout << "From  : " << from1 << endl;
              cout << "To    : " << to1 << endl;
              cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
              cout << "Quantity : " << quantity1 << endl;
              cout << "Price : " << price1 << endl
                   << endl
                   << endl;
            }
          }
          else
          {
            cout << "YOU HAVE NO TICKETS!" << endl;
          }
          cout << endl
               << "Press any key for continue........";
          cin >> c;
          // User menu3 op4 ends
        }
        else if (option == 6)
        {
          // User menu3 op5 starts
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Freight Rates " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Train Name         Rate/kg   " << endl;
          cout << " 1. " << t1 << "\t\t" << t1cargo << endl;
          cout << " 2. " << t2 << "\t" << t2cargo << endl;
          cout << " 3. " << t3 << "\t" << t3cargo << endl;
          cout << " 4. " << t4 << "\t\t" << t4cargo << endl;

          cout << endl
               << "Press any key for continue........";
          cin >> c;

          // User menu3 op5 ends
        }
        else if (option == 7)
        {
          // User menu3 op7 starts
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> Book Cargo " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Available Trains......" << endl;
          cout << "1. " << t1 << endl;
          cout << "2. " << t2 << endl;
          cout << "3. " << t3 << endl;
          cout << "4. " << t4 << endl;
          cout << "Your option..........";
          cin >> sub_op;
          system("cls");

          if (sub_op == 1)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Book Cargo " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name :" << t1 << endl;
            cout << "Price per kg :" << t1cargo << endl;
            cout << "Enter the cargo weight (kg) :";
            cin >> weight3;
            c_price3 = t1cargo * weight3;
            cout << "You have to pay :" << c_price3 << endl;
            cout << "You want to book cargo (1 for yes, 0 for not) :";
            cin >> op1;
          }
          else if (sub_op == 2)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Book Cargo " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name :" << t2 << endl;
            cout << "Price per kg :" << t2cargo << endl;
            cout << "Enter the cargo weight (kg) :";
            cin >> weight3;
            c_price3 = t2cargo * weight3;
            cout << "You have to pay :" << c_price3 << endl;
            cout << "You want to book cargo (1 for yes, 0 for not) :";
            cin >> op1;
          }
          else if (sub_op == 3)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Book Cargo " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name :" << t3 << endl;
            cout << "Price per kg :" << t3cargo << endl;
            cout << "Enter the cargo weight (kg) :";
            cin >> weight3;
            c_price3 = t3cargo * weight3;
            cout << "You have to pay :" << c_price3 << endl;
            cout << "You want to book cargo (1 for yes, 0 for not) :";
            cin >> op1;
          }
          else if (sub_op == 4)
          {
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Book Cargo " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name :" << t4 << endl;
            cout << "Price per kg :" << t4cargo << endl;
            cout << "Enter the cargo weight (kg) :";
            cin >> weight3;
            c_price3 = t4cargo * weight3;
            cout << "You have to pay :" << c_price3 << endl;
            cout << "You want to book cargo (1 for yes, 0 for not) :";
            cin >> op1;
          }
          else
          {
            cout << " Invalid Option! " << endl;
          }

          if (op1 == 1)
          {
            cout << "Your cargo succesfully booked " << endl;
          }
          else
          {
            weight3 = 0;
            c_price3 = 0;
          }
          cout << endl
               << "Press any key for continue........";
          cin >> c;

          // User menu3 op7 ends
        }
        else if (option == 8)
        {
          // User menu3 op8 starts
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

          cout << " User >> View Notice " << endl;
          cout << "_____________________________________________________________" << endl;
          cout << "Notice Board......" << endl;
          cout << notice;

          cout << endl
               << "Press any key for continue........";
          cin >> c;

          // User menu3 op8 ends
        }
        // User menu3 All ops ends
        //**** MENU 4 START ****
        if (option < 9)
        {

          system("cls");
          // User menu 3 op start
          cout << "*************************************************************" << endl;
          cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
          cout << "*************************************************************" << endl
               << endl;

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

          system("cls");

          if (option == 1)
          {
            // User menu4 op1 starts
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Train Routes" << endl;
            cout << "_____________________________________________________________" << endl;
            cout << " Select any Train to see route....." << endl;
            cout << "Train names:" << endl;
            cout << " 1. " << t1 << endl;
            cout << " 2. " << t2 << endl;
            cout << " 3. " << t3 << endl;
            cout << " 4. " << t4 << endl;
            cout << "Select anyone option.....:" << endl;
            cin >> sub_op;
            system("cls");

            if (sub_op == 1)
            {
              // train 1
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Train Routes" << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name : " << t1 << endl
                   << endl;
              cout << "Stations\tArrival\tDeparture " << endl;
              cout << t1s1 << "\t\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
              cout << t1s2 << "\t\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
              cout << t1s3 << "\t\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
              cout << t1s4 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
            }
            else if (sub_op == 2)
            {
              // train 2
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Train Routes" << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name : " << t2 << endl
                   << endl;
              cout << "Stations\tArrival\tDeparture " << endl;
              cout << t2s1 << "\t\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
              cout << t2s2 << "\t\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
              cout << t2s3 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
              cout << t2s4 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
            }
            else if (sub_op == 3)
            {
              // train 3
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Train Routes" << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name : " << t3 << endl
                   << endl;
              cout << "Stations\tArrival\tDeparture " << endl;
              cout << t3s1 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
              cout << t3s2 << "\t\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
              cout << t3s3 << "\t\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
              cout << t3s4 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
            }
            else if (sub_op == 4)
            {
              // train 4
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Train Routes" << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name : " << t4 << endl
                   << endl;
              cout << "Stations\tArrival\tDeparture " << endl;
              cout << t4s1 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
              cout << t4s2 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
              cout << t4s3 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
              cout << t4s4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
            }
            else
            {
              cout << " Invalid Option!" << endl;
            }

            cout << endl
                 << "Press any key for continue........";
            cin >> c;
            // User menu4 op1 ends
          }
          else if (option == 2)
          {
            // User menu4 op2 starts
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Station Schedule  " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Select any from available stations......" << endl;
            cout << " 1. Rawalpindi" << endl;
            cout << " 2. Gujrat    " << endl;
            cout << " 3. Lahore    " << endl;
            cout << " 4. Sahiwal   " << endl;
            cout << " 5. Faislabad " << endl;
            cout << " 6. Multan    " << endl;
            cout << " 7. Sadiqabad " << endl;
            cout << "Your Option.....:";
            cin >> sub_op;
            system("cls");

            if (sub_op == 1)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Station Schedule " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Station Name : Rawalpindi" << endl;
              cout << "Train Name \t Arrival \t Departure " << endl;
              if (t1s1 == "Rawalpindi")
              {
                cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
              }
              if (t1s2 == "Rawalpindi")
              {
                cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
              }
              if (t1s3 == "Rawalpindi")
              {
                cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
              }
              if (t1s4 == "Rawalpindi")
              {
                cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
              }
              if (t2s1 == "Rawalpindi")
              {
                cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
              }
              if (t2s2 == "Rawalpindi")
              {
                cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
              }
              if (t2s3 == "Rawalpindi")
              {
                cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
              }
              if (t2s4 == "Rawalpindi")
              {
                cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
              }
              if (t3s1 == "Rawalpindi")
              {
                cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
              }
              if (t3s2 == "Rawalpindi")
              {
                cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
              }
              if (t3s3 == "Rawalpindi")
              {
                cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
              }
              if (t3s4 == "Rawalpindi")
              {
                cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
              }
              if (t4s1 == "Rawalpindi")
              {
                cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
              }
              if (t4s2 == "Rawalpindi")
              {
                cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
              }
              if (t4s3 == "Rawalpindi")
              {
                cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
              }
              if (t4s4 == "Rawalpindi")
              {
                cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
              }
            }
            else if (sub_op == 2)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Station Schedule " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Station Name : Gujrat" << endl;
              cout << "Train Name \t Arrival \t Departure " << endl;
              if (t1s1 == "Gujrat")
              {
                cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
              }
              if (t1s2 == "Gujrat")
              {
                cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
              }
              if (t1s3 == "Gujrat")
              {
                cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
              }
              if (t1s4 == "Gujrat")
              {
                cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
              }
              if (t2s1 == "Gujrat")
              {
                cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
              }
              if (t2s2 == "Gujrat")
              {
                cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
              }
              if (t2s3 == "Gujrat")
              {
                cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
              }
              if (t2s4 == "Gujrat")
              {
                cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
              }
              if (t3s1 == "Gujrat")
              {
                cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
              }
              if (t3s2 == "Gujrat")
              {
                cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
              }
              if (t3s3 == "Gujrat")
              {
                cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
              }
              if (t3s4 == "Gujrat")
              {
                cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
              }
              if (t4s1 == "Gujrat")
              {
                cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
              }
              if (t4s2 == "Gujrat")
              {
                cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
              }
              if (t4s3 == "Gujrat")
              {
                cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
              }
              if (t4s4 == "Gujrat")
              {
                cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
              }
            }
            else if (sub_op == 3)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Station Schedule " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Station Name : Lahore" << endl;
              cout << "Train Name \t Arrival \t Departure " << endl;
              if (t1s1 == "Lahore")
              {
                cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
              }
              if (t1s2 == "Lahore")
              {
                cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
              }
              if (t1s3 == "Lahore")
              {
                cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
              }
              if (t1s4 == "Lahore")
              {
                cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
              }
              if (t2s1 == "Lahore")
              {
                cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
              }
              if (t2s2 == "Lahore")
              {
                cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
              }
              if (t2s3 == "Lahore")
              {
                cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
              }
              if (t2s4 == "Lahore")
              {
                cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
              }
              if (t3s1 == "Lahore")
              {
                cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
              }
              if (t3s2 == "Lahore")
              {
                cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
              }
              if (t3s3 == "Lahore")
              {
                cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
              }
              if (t3s4 == "Lahore")
              {
                cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
              }
              if (t4s1 == "Lahore")
              {
                cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
              }
              if (t4s2 == "Lahore")
              {
                cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
              }
              if (t4s3 == "Lahore")
              {
                cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
              }
              if (t4s4 == "Lahore")
              {
                cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
              }
            }
            else if (sub_op == 4)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Station Schedule " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Station Name : Sahiwal" << endl;
              cout << "Train Name \t Arrival \t Departure " << endl;
              if (t1s1 == "Sahiwal")
              {
                cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
              }
              if (t1s2 == "Sahiwal")
              {
                cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
              }
              if (t1s3 == "Sahiwal")
              {
                cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
              }
              if (t1s4 == "Sahiwal")
              {
                cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
              }
              if (t2s1 == "Sahiwal")
              {
                cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
              }
              if (t2s2 == "Sahiwal")
              {
                cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
              }
              if (t2s3 == "Sahiwal")
              {
                cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
              }
              if (t2s4 == "Sahiwal")
              {
                cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
              }
              if (t3s1 == "Sahiwal")
              {
                cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
              }
              if (t3s2 == "Sahiwal")
              {
                cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
              }
              if (t3s3 == "Sahiwal")
              {
                cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
              }
              if (t3s4 == "Sahiwal")
              {
                cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
              }
              if (t4s1 == "Sahiwal")
              {
                cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
              }
              if (t4s2 == "Sahiwal")
              {
                cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
              }
              if (t4s3 == "Sahiwal")
              {
                cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
              }
              if (t4s4 == "Sahiwal")
              {
                cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
              }
            }
            else if (sub_op == 5)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Station Schedule " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Station Name : Faislabad" << endl;
              cout << "Train Name \t Arrival \t Departure " << endl;
              if (t1s1 == "Faislabad")
              {
                cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
              }
              if (t1s2 == "Faislabad")
              {
                cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
              }
              if (t1s3 == "Faislabad")
              {
                cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
              }
              if (t1s4 == "Faislabad")
              {
                cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
              }
              if (t2s1 == "Faislabad")
              {
                cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
              }
              if (t2s2 == "Faislabad")
              {
                cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
              }
              if (t2s3 == "Faislabad")
              {
                cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
              }
              if (t2s4 == "Faislabad")
              {
                cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
              }
              if (t3s1 == "Faislabad")
              {
                cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
              }
              if (t3s2 == "Faislabad")
              {
                cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
              }
              if (t3s3 == "Faislabad")
              {
                cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
              }
              if (t3s4 == "Faislabad")
              {
                cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
              }
              if (t4s1 == "Faislabad")
              {
                cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
              }
              if (t4s2 == "Faislabad")
              {
                cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
              }
              if (t4s3 == "Faislabad")
              {
                cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
              }
              if (t4s4 == "Faislabad")
              {
                cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
              }
            }
            else if (sub_op == 6)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Station Schedule " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Station Name : Multan" << endl;
              cout << "Train Name \t Arrival \t Departure " << endl;
              if (t1s1 == "Multan")
              {
                cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
              }
              if (t1s2 == "Multan")
              {
                cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
              }
              if (t1s3 == "Multan")
              {
                cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
              }
              if (t1s4 == "Multan")
              {
                cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
              }
              if (t2s1 == "Multan")
              {
                cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
              }
              if (t2s2 == "Multan")
              {
                cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
              }
              if (t2s3 == "Multan")
              {
                cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
              }
              if (t2s4 == "Multan")
              {
                cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
              }
              if (t3s1 == "Multan")
              {
                cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
              }
              if (t3s2 == "Multan")
              {
                cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
              }
              if (t3s3 == "Multan")
              {
                cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
              }
              if (t3s4 == "Multan")
              {
                cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
              }
              if (t4s1 == "Multan")
              {
                cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
              }
              if (t4s2 == "Multan")
              {
                cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
              }
              if (t4s3 == "Multan")
              {
                cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
              }
              if (t4s4 == "Multan")
              {
                cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
              }
            }
            else if (sub_op == 7)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Station Schedule " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Station Name : Sadiqabad" << endl;
              cout << "Train Name \t Arrival \t Departure " << endl;
              if (t1s1 == "Multan")
              {
                cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
              }
              if (t1s2 == "Sadiqabad")
              {
                cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
              }
              if (t1s3 == "Sadiqabad")
              {
                cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
              }
              if (t1s4 == "Sadiqabad")
              {
                cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
              }
              if (t2s1 == "Sadiqabad")
              {
                cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
              }
              if (t2s2 == "Sadiqabad")
              {
                cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
              }
              if (t2s3 == "Sadiqabad")
              {
                cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
              }
              if (t2s4 == "Sadiqabad")
              {
                cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
              }
              if (t3s1 == "Sadiqabad")
              {
                cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
              }
              if (t3s2 == "Sadiqabad")
              {
                cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
              }
              if (t3s3 == "Sadiqabad")
              {
                cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
              }
              if (t3s4 == "Sadiqabad")
              {
                cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
              }
              if (t4s1 == "Sadiqabad")
              {
                cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
              }
              if (t4s2 == "Sadiqabad")
              {
                cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
              }
              if (t4s3 == "Sadiqabad")
              {
                cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
              }
              if (t4s4 == "Sadiqabad")
              {
                cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
              }
            }
            else
            {
              cout << " Invalid Option! " << endl;
            }
            cout << endl
                 << "Press any key for continue........";
            cin >> c;
            // User menu4 op2 ends
          }
          else if (option == 3)
          {
            // User menu4 op3 starts
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Tickets Price " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name         Ticket Price" << endl;
            cout << " 1. " << t1 << "\t\t" << t1ticket << endl;
            cout << " 2. " << t2 << "\t" << t2ticket << endl;
            cout << " 3. " << t3 << "\t" << t3ticket << endl;
            cout << " 4. " << t4 << "\t" << t4ticket << endl;

            cout << endl
                 << "Press any key for continue........";
            cin >> c;

            // User menu4 op3 ends
          }
          else if (option == 4)
          {
            // User menu4 op4 starts
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Buy Tickets " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Available Trains......" << endl;
            cout << "1. " << t1 << endl;
            cout << "2. " << t2 << endl;
            cout << "3. " << t3 << endl;
            cout << "4. " << t4 << endl;
            cout << "Your option..........";
            cin >> sub_op;
            system("cls");

            if (sub_op == 1)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Buy Tickets " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name :" << t1 << endl;
              cout << "Stations available :" << endl;
              cout << t1s1 << "\t" << t1s2 << "\t" << t1s3 << "\t" << t1s4 << endl;
              cout << "From Station :";
              cin >> from4;
              cout << "To Station :";
              cin >> to4;
              cout << " Enter date ( dd mm yyyy):";
              cin >> day4;
              cin >> month4;
              cin >> year4;
              cout << "Ticket price is :" << t1ticket << endl;
              cout << "Enter quantity of tickets :";
              cin >> quantity4;
              price4 = t1ticket * quantity4;
              cout << "Total price for " << quantity4 << " tickets :" << price4 << endl;
              cout << "You want to buy Ticket (1 for yes, 0 for not) :";
              cin >> op1;
              t_name4 = t1;
            }
            else if (sub_op == 2)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Buy Tickets " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name :" << t2 << endl;
              cout << "Stations available :" << endl;
              cout << t2s1 << "\t" << t2s2 << "\t" << t2s3 << "\t" << t2s4 << endl;
              cout << "From Station :";
              cin >> from4;
              cout << "To Station :";
              cin >> to4;
              cout << " Enter date ( dd mm yyyy):";
              cin >> day4;
              cin >> month4;
              cin >> year4;
              cout << "Ticket price is :" << t2ticket << endl;
              cout << "Enter quantity of tickets :";
              cin >> quantity4;
              price4 = t2ticket * quantity4;
              cout << "Total price for " << quantity4 << " tickets :" << price4 << endl;
              cout << "You want to buy Ticket (1 for yes, 0 for not) :";
              cin >> op1;
              t_name4 = t2;
            }
            else if (sub_op == 3)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Buy Tickets " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name :" << t3 << endl;
              cout << "Stations available :" << endl;
              cout << t3s1 << "\t" << t3s2 << "\t" << t3s3 << "\t" << t3s4 << endl;
              cout << "From Station :";
              cin >> from4;
              cout << "To Station :";
              cin >> to4;
              cout << " Enter date ( dd mm yyyy):";
              cin >> day4;
              cin >> month4;
              cin >> year4;
              cout << "Ticket price is :" << t3ticket << endl;
              cout << "Enter quantity of tickets :";
              cin >> quantity4;
              price4 = t3ticket * quantity4;
              cout << "Total price for " << quantity4 << " tickets :" << price4 << endl;
              cout << "You want to buy Ticket (1 for yes, 0 for not) :";
              cin >> op1;
              t_name4 = t3;
            }
            else if (sub_op == 4)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Buy Tickets " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name :" << t4 << endl;
              cout << "Stations available :" << endl;
              cout << t4s1 << "\t" << t4s2 << "\t" << t4s3 << "\t" << t4s4 << endl;
              cout << "From Station :";
              cin >> from4;
              cout << "To Station :";
              cin >> to4;
              cout << " Enter date ( dd mm yyyy):";
              cin >> day4;
              cin >> month4;
              cin >> year4;
              cout << "Ticket price is :" << t4ticket << endl;
              cout << "Enter quantity of tickets :";
              cin >> quantity4;
              price4 = t4ticket * quantity4;
              cout << "Total price for " << quantity4 << " tickets :" << price4 << endl;
              cout << "You want to buy Ticket (1 for yes, 0 for not) :";
              cin >> op1;
              t_name4 = t4;
            }
            else
            {
              cout << " Invalid Option! " << endl;
            }
            if (op1 == 1)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << "You buy Ticket Succesfully " << endl;
              cout << "Train Name :" << t_name4 << endl;
              cout << "From station :" << from4 << endl;
              cout << "To station :" << to4 << endl;
              cout << " Date :" << day4 << "-" << month4 << "-" << year4 << endl;
              cout << "Quantity :" << quantity4 << endl;
              cout << "Price :" << price4 << endl;
              cout << "****Thanks for buying Ticket****" << endl;
              date4 = day4 + (month4 * 30.417);
            }
            else
            {
              t_name4 = "";
              quantity4 = 0;
              price4 = 0;
              day4 = 0;
              month4 = 0;
              year4 = 0;
            }
            cout << endl
                 << "Press any key for continue........";
            cin >> c;

            // User menu4 op4 ends
          }
          else if (option == 5)
          {
            // User menu4 op5 starts
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Your Tickets " << endl;
            cout << "_____________________________________________________________" << endl;

            if (price1 != 0 || price2 != 0 || price3 != 0)
            {
              cout << "Display according to ticket date which come first ....." << endl
                   << endl;
              if (date1 < date2 && date1 < date3)
              {
                // sorted according t o date wise nearest date ticket come first
                cout << "*** Ticket no. 1 ***" << endl;
                cout << "Train : " << t_name1 << endl;
                cout << "From  : " << from1 << endl;
                cout << "To    : " << to1 << endl;
                cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                cout << "Quantity : " << quantity1 << endl;
                cout << "Price : " << price1 << endl
                     << endl
                     << endl;

                if (date2 < date3)
                {
                  cout << "*** Ticket no. 2 ***" << endl;
                  cout << "Train : " << t_name2 << endl;
                  cout << "From  : " << from2 << endl;
                  cout << "To    : " << to2 << endl;
                  cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                  cout << "Quantity : " << quantity2 << endl;
                  cout << "Price : " << price2 << endl
                       << endl
                       << endl;

                  cout << "*** Ticket no. 3 ***" << endl;
                  cout << "Train : " << t_name3 << endl;
                  cout << "From  : " << from3 << endl;
                  cout << "To    : " << to3 << endl;
                  cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                  cout << "Quantity : " << quantity3 << endl;
                  cout << "Price : " << price3 << endl
                       << endl
                       << endl;
                }
                else
                {
                  cout << "*** Ticket no. 3 ***" << endl;
                  cout << "Train : " << t_name3 << endl;
                  cout << "From  : " << from3 << endl;
                  cout << "To    : " << to3 << endl;
                  cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                  cout << "Quantity : " << quantity3 << endl;
                  cout << "Price : " << price3 << endl
                       << endl
                       << endl;

                  cout << "*** Ticket no. 2 ***" << endl;
                  cout << "Train : " << t_name2 << endl;
                  cout << "From  : " << from2 << endl;
                  cout << "To    : " << to2 << endl;
                  cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                  cout << "Quantity : " << quantity2 << endl;
                  cout << "Price : " << price2 << endl
                       << endl
                       << endl;
                }
              }
              else if (date2 < date1 && date2 < date3)
              {
                cout << "*** Ticket no. 2 ***" << endl;
                cout << "Train : " << t_name2 << endl;
                cout << "From  : " << from2 << endl;
                cout << "To    : " << to2 << endl;
                cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                cout << "Quantity : " << quantity2 << endl;
                cout << "Price : " << price2 << endl
                     << endl
                     << endl;

                if (date1 < date3)
                {
                  cout << "*** Ticket no. 1 ***" << endl;
                  cout << "Train : " << t_name1 << endl;
                  cout << "From  : " << from1 << endl;
                  cout << "To    : " << to1 << endl;
                  cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                  cout << "Quantity : " << quantity1 << endl;
                  cout << "Price : " << price1 << endl
                       << endl
                       << endl;

                  cout << "*** Ticket no. 3 ***" << endl;
                  cout << "Train : " << t_name3 << endl;
                  cout << "From  : " << from3 << endl;
                  cout << "To    : " << to3 << endl;
                  cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                  cout << "Quantity : " << quantity3 << endl;
                  cout << "Price : " << price3 << endl
                       << endl
                       << endl;
                }
                else
                {
                  cout << "*** Ticket no. 3 ***" << endl;
                  cout << "Train : " << t_name3 << endl;
                  cout << "From  : " << from3 << endl;
                  cout << "To    : " << to3 << endl;
                  cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                  cout << "Quantity : " << quantity3 << endl;
                  cout << "Price : " << price3 << endl
                       << endl
                       << endl;

                  cout << "*** Ticket no. 1 ***" << endl;
                  cout << "Train : " << t_name1 << endl;
                  cout << "From  : " << from1 << endl;
                  cout << "To    : " << to1 << endl;
                  cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                  cout << "Quantity : " << quantity1 << endl;
                  cout << "Price : " << price1 << endl
                       << endl
                       << endl;
                }
              }
              else
              {
                cout << "*** Ticket no. 3 ***" << endl;
                cout << "Train : " << t_name3 << endl;
                cout << "From  : " << from3 << endl;
                cout << "To    : " << to3 << endl;
                cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                cout << "Quantity : " << quantity3 << endl;
                cout << "Price : " << price3 << endl
                     << endl
                     << endl;

                if (date1 < date2)
                {
                  cout << "*** Ticket no. 1 ***" << endl;
                  cout << "Train : " << t_name1 << endl;
                  cout << "From  : " << from1 << endl;
                  cout << "To    : " << to1 << endl;
                  cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                  cout << "Quantity : " << quantity1 << endl;
                  cout << "Price : " << price1 << endl
                       << endl
                       << endl;

                  cout << "*** Ticket no. 2 ***" << endl;
                  cout << "Train : " << t_name2 << endl;
                  cout << "From  : " << from2 << endl;
                  cout << "To    : " << to2 << endl;
                  cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                  cout << "Quantity : " << quantity2 << endl;
                  cout << "Price : " << price2 << endl
                       << endl
                       << endl;
                }
                else
                {
                  cout << "*** Ticket no. 2 ***" << endl;
                  cout << "Train : " << t_name2 << endl;
                  cout << "From  : " << from2 << endl;
                  cout << "To    : " << to2 << endl;
                  cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                  cout << "Quantity : " << quantity2 << endl;
                  cout << "Price : " << price2 << endl
                       << endl
                       << endl;

                  cout << "*** Ticket no. 1 ***" << endl;
                  cout << "Train : " << t_name1 << endl;
                  cout << "From  : " << from1 << endl;
                  cout << "To    : " << to1 << endl;
                  cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                  cout << "Quantity : " << quantity1 << endl;
                  cout << "Price : " << price1 << endl
                       << endl
                       << endl;
                }
              }
            }
            else
            {
              cout << "YOU HAVE NO TICKETS!" << endl;
            }
            cout << endl
                 << "Press any key for continue........";
            cin >> c;
            // User menu4 op5 ends
          }
          else if (option == 6)
          {
            // User menu4 op6 starts
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Freight Rates " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Train Name         Rate/kg   " << endl;
            cout << " 1. " << t1 << "\t\t" << t1cargo << endl;
            cout << " 2. " << t2 << "\t" << t2cargo << endl;
            cout << " 3. " << t3 << "\t" << t3cargo << endl;
            cout << " 4. " << t4 << "\t\t" << t4cargo << endl;

            cout << endl
                 << "Press any key for continue........";
            cin >> c;
            // User menu4 op6 ends
          }
          else if (option == 7)
          {
            // User menu4 op7 starts
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> Book Cargo " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Available Trains......" << endl;
            cout << "1. " << t1 << endl;
            cout << "2. " << t2 << endl;
            cout << "3. " << t3 << endl;
            cout << "4. " << t4 << endl;
            cout << "Your option..........";
            cin >> sub_op;
            system("cls");

            if (sub_op == 1)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Book Cargo " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name :" << t1 << endl;
              cout << "Price per kg :" << t1cargo << endl;
              cout << "Enter the cargo weight (kg) :";
              cin >> weight4;
              c_price4 = t1cargo * weight4;
              cout << "You have to pay :" << c_price4 << endl;
              cout << "You want to book cargo (1 for yes, 0 for not) :";
              cin >> op1;
            }
            else if (sub_op == 2)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Book Cargo " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name :" << t2 << endl;
              cout << "Price per kg :" << t2cargo << endl;
              cout << "Enter the cargo weight (kg) :";
              cin >> weight4;
              c_price4 = t2cargo * weight4;
              cout << "You have to pay :" << c_price4 << endl;
              cout << "You want to book cargo (1 for yes, 0 for not) :";
              cin >> op1;
            }
            else if (sub_op == 3)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Book Cargo " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name :" << t3 << endl;
              cout << "Price per kg :" << t3cargo << endl;
              cout << "Enter the cargo weight (kg) :";
              cin >> weight4;
              c_price4 = t3cargo * weight4;
              cout << "You have to pay :" << c_price4 << endl;
              cout << "You want to book cargo (1 for yes, 0 for not) :";
              cin >> op1;
            }
            else if (sub_op == 4)
            {
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Book Cargo " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name :" << t4 << endl;
              cout << "Price per kg :" << t4cargo << endl;
              cout << "Enter the cargo weight (kg) :";
              cin >> weight4;
              c_price4 = t4cargo * weight4;
              cout << "You have to pay :" << c_price4 << endl;
              cout << "You want to book cargo (1 for yes, 0 for not) :";
              cin >> op1;
            }
            else
            {
              cout << " Invalid Option! " << endl;
            }

            if (op1 == 1)
            {
              cout << "Your cargo succesfully booked " << endl;
            }
            else
            {
              weight4 = 0;
              c_price4 = 0;
            }
            cout << endl
                 << "Press any key for continue........";
            cin >> c;

            // User menu4 op7 ends
          }
          else if (option == 8)
          {
            // User menu4 op7 starts
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

            cout << " User >> View Notice " << endl;
            cout << "_____________________________________________________________" << endl;
            cout << "Notice Board......" << endl;
            cout << notice;

            cout << endl
                 << "Press any key for continue........";
            cin >> c;

            // User menu4 op7 ends
          }
          // User menu4 All ops ends
          /**** MENU 5 STARRT  ****/
          if (option < 9)
          {
            system("cls");
            // User menu5  op start
            cout << "*************************************************************" << endl;
            cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
            cout << "*************************************************************" << endl
                 << endl;

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

            system("cls");

            if (option == 1)
            {
              // User menu5 op1 starts
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Train Routes" << endl;
              cout << "_____________________________________________________________" << endl;
              cout << " Select any Train to see route....." << endl;
              cout << "Train names:" << endl;
              cout << " 1. " << t1 << endl;
              cout << " 2. " << t2 << endl;
              cout << " 3. " << t3 << endl;
              cout << " 4. " << t4 << endl;
              cout << "Select anyone option.....:" << endl;
              cin >> sub_op;
              system("cls");

              if (sub_op == 1)
              {
                // train 1
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Train Routes" << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name : " << t1 << endl
                     << endl;
                cout << "Stations\tArrival\tDeparture " << endl;
                cout << t1s1 << "\t\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
                cout << t1s2 << "\t\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
                cout << t1s3 << "\t\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
                cout << t1s4 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
              }
              else if (sub_op == 2)
              {
                // train 2
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Train Routes" << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name : " << t2 << endl
                     << endl;
                cout << "Stations\tArrival\tDeparture " << endl;
                cout << t2s1 << "\t\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
                cout << t2s2 << "\t\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
                cout << t2s3 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
                cout << t2s4 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
              }
              else if (sub_op == 3)
              {
                // train 3
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Train Routes" << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name : " << t3 << endl
                     << endl;
                cout << "Stations\tArrival\tDeparture " << endl;
                cout << t3s1 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
                cout << t3s2 << "\t\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
                cout << t3s3 << "\t\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
                cout << t3s4 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
              }
              else if (sub_op == 4)
              {
                // train 4
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Train Routes" << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name : " << t4 << endl
                     << endl;
                cout << "Stations\tArrival\tDeparture " << endl;
                cout << t4s1 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
                cout << t4s2 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
                cout << t4s3 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
                cout << t4s4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
              }
              else
              {
                cout << " Invalid Option!" << endl;
              }

              cout << endl
                   << "Press any key for continue........";
              cin >> c;

              // User menu5 op1 ends
            }
            else if (option == 2)
            {
              // User menu5 op2 starts
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Station Schedule  " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Select any from available stations......" << endl;
              cout << " 1. Rawalpindi" << endl;
              cout << " 2. Gujrat    " << endl;
              cout << " 3. Lahore    " << endl;
              cout << " 4. Sahiwal   " << endl;
              cout << " 5. Faislabad " << endl;
              cout << " 6. Multan    " << endl;
              cout << " 7. Sadiqabad " << endl;
              cout << "Your Option.....:";
              cin >> sub_op;
              system("cls");

              if (sub_op == 1)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Station Schedule " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Station Name : Rawalpindi" << endl;
                cout << "Train Name \t Arrival \t Departure " << endl;
                if (t1s1 == "Rawalpindi")
                {
                  cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
                }
                if (t1s2 == "Rawalpindi")
                {
                  cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
                }
                if (t1s3 == "Rawalpindi")
                {
                  cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
                }
                if (t1s4 == "Rawalpindi")
                {
                  cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
                }
                if (t2s1 == "Rawalpindi")
                {
                  cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
                }
                if (t2s2 == "Rawalpindi")
                {
                  cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
                }
                if (t2s3 == "Rawalpindi")
                {
                  cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
                }
                if (t2s4 == "Rawalpindi")
                {
                  cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
                }
                if (t3s1 == "Rawalpindi")
                {
                  cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
                }
                if (t3s2 == "Rawalpindi")
                {
                  cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
                }
                if (t3s3 == "Rawalpindi")
                {
                  cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
                }
                if (t3s4 == "Rawalpindi")
                {
                  cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
                }
                if (t4s1 == "Rawalpindi")
                {
                  cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
                }
                if (t4s2 == "Rawalpindi")
                {
                  cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
                }
                if (t4s3 == "Rawalpindi")
                {
                  cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
                }
                if (t4s4 == "Rawalpindi")
                {
                  cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
                }
              }
              else if (sub_op == 2)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Station Schedule " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Station Name : Gujrat" << endl;
                cout << "Train Name \t Arrival \t Departure " << endl;
                if (t1s1 == "Gujrat")
                {
                  cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
                }
                if (t1s2 == "Gujrat")
                {
                  cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
                }
                if (t1s3 == "Gujrat")
                {
                  cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
                }
                if (t1s4 == "Gujrat")
                {
                  cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
                }
                if (t2s1 == "Gujrat")
                {
                  cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
                }
                if (t2s2 == "Gujrat")
                {
                  cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
                }
                if (t2s3 == "Gujrat")
                {
                  cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
                }
                if (t2s4 == "Gujrat")
                {
                  cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
                }
                if (t3s1 == "Gujrat")
                {
                  cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
                }
                if (t3s2 == "Gujrat")
                {
                  cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
                }
                if (t3s3 == "Gujrat")
                {
                  cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
                }
                if (t3s4 == "Gujrat")
                {
                  cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
                }
                if (t4s1 == "Gujrat")
                {
                  cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
                }
                if (t4s2 == "Gujrat")
                {
                  cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
                }
                if (t4s3 == "Gujrat")
                {
                  cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
                }
                if (t4s4 == "Gujrat")
                {
                  cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
                }
              }
              else if (sub_op == 3)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Station Schedule " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Station Name : Lahore" << endl;
                cout << "Train Name \t Arrival \t Departure " << endl;
                if (t1s1 == "Lahore")
                {
                  cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
                }
                if (t1s2 == "Lahore")
                {
                  cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
                }
                if (t1s3 == "Lahore")
                {
                  cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
                }
                if (t1s4 == "Lahore")
                {
                  cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
                }
                if (t2s1 == "Lahore")
                {
                  cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
                }
                if (t2s2 == "Lahore")
                {
                  cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
                }
                if (t2s3 == "Lahore")
                {
                  cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
                }
                if (t2s4 == "Lahore")
                {
                  cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
                }
                if (t3s1 == "Lahore")
                {
                  cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
                }
                if (t3s2 == "Lahore")
                {
                  cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
                }
                if (t3s3 == "Lahore")
                {
                  cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
                }
                if (t3s4 == "Lahore")
                {
                  cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
                }
                if (t4s1 == "Lahore")
                {
                  cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
                }
                if (t4s2 == "Lahore")
                {
                  cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
                }
                if (t4s3 == "Lahore")
                {
                  cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
                }
                if (t4s4 == "Lahore")
                {
                  cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
                }
              }
              else if (sub_op == 4)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Station Schedule " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Station Name : Sahiwal" << endl;
                cout << "Train Name \t Arrival \t Departure " << endl;
                if (t1s1 == "Sahiwal")
                {
                  cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
                }
                if (t1s2 == "Sahiwal")
                {
                  cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
                }
                if (t1s3 == "Sahiwal")
                {
                  cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
                }
                if (t1s4 == "Sahiwal")
                {
                  cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
                }
                if (t2s1 == "Sahiwal")
                {
                  cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
                }
                if (t2s2 == "Sahiwal")
                {
                  cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
                }
                if (t2s3 == "Sahiwal")
                {
                  cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
                }
                if (t2s4 == "Sahiwal")
                {
                  cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
                }
                if (t3s1 == "Sahiwal")
                {
                  cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
                }
                if (t3s2 == "Sahiwal")
                {
                  cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
                }
                if (t3s3 == "Sahiwal")
                {
                  cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
                }
                if (t3s4 == "Sahiwal")
                {
                  cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
                }
                if (t4s1 == "Sahiwal")
                {
                  cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
                }
                if (t4s2 == "Sahiwal")
                {
                  cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
                }
                if (t4s3 == "Sahiwal")
                {
                  cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
                }
                if (t4s4 == "Sahiwal")
                {
                  cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
                }
              }
              else if (sub_op == 5)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Station Schedule " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Station Name : Faislabad" << endl;
                cout << "Train Name \t Arrival \t Departure " << endl;
                if (t1s1 == "Faislabad")
                {
                  cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
                }
                if (t1s2 == "Faislabad")
                {
                  cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
                }
                if (t1s3 == "Faislabad")
                {
                  cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
                }
                if (t1s4 == "Faislabad")
                {
                  cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
                }
                if (t2s1 == "Faislabad")
                {
                  cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
                }
                if (t2s2 == "Faislabad")
                {
                  cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
                }
                if (t2s3 == "Faislabad")
                {
                  cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
                }
                if (t2s4 == "Faislabad")
                {
                  cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
                }
                if (t3s1 == "Faislabad")
                {
                  cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
                }
                if (t3s2 == "Faislabad")
                {
                  cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
                }
                if (t3s3 == "Faislabad")
                {
                  cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
                }
                if (t3s4 == "Faislabad")
                {
                  cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
                }
                if (t4s1 == "Faislabad")
                {
                  cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
                }
                if (t4s2 == "Faislabad")
                {
                  cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
                }
                if (t4s3 == "Faislabad")
                {
                  cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
                }
                if (t4s4 == "Faislabad")
                {
                  cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
                }
              }
              else if (sub_op == 6)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Station Schedule " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Station Name : Multan" << endl;
                cout << "Train Name \t Arrival \t Departure " << endl;
                if (t1s1 == "Multan")
                {
                  cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
                }
                if (t1s2 == "Multan")
                {
                  cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
                }
                if (t1s3 == "Multan")
                {
                  cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
                }
                if (t1s4 == "Multan")
                {
                  cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
                }
                if (t2s1 == "Multan")
                {
                  cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
                }
                if (t2s2 == "Multan")
                {
                  cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
                }
                if (t2s3 == "Multan")
                {
                  cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
                }
                if (t2s4 == "Multan")
                {
                  cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
                }
                if (t3s1 == "Multan")
                {
                  cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
                }
                if (t3s2 == "Multan")
                {
                  cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
                }
                if (t3s3 == "Multan")
                {
                  cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
                }
                if (t3s4 == "Multan")
                {
                  cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
                }
                if (t4s1 == "Multan")
                {
                  cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
                }
                if (t4s2 == "Multan")
                {
                  cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
                }
                if (t4s3 == "Multan")
                {
                  cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
                }
                if (t4s4 == "Multan")
                {
                  cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
                }
              }
              else if (sub_op == 7)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> View Station Schedule " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Station Name : Sadiqabad" << endl;
                cout << "Train Name \t Arrival \t Departure " << endl;
                if (t1s1 == "Multan")
                {
                  cout << t1 << "\t" << t1s1_ath << ":" << t1s1_atm << "\t" << t1s1_dth << ":" << t1s1_dtm << endl;
                }
                if (t1s2 == "Sadiqabad")
                {
                  cout << t1 << "\t" << t1s2_ath << ":" << t1s2_atm << "\t" << t1s2_dth << ":" << t1s2_dtm << endl;
                }
                if (t1s3 == "Sadiqabad")
                {
                  cout << t1 << "\t" << t1s3_ath << ":" << t1s3_atm << "\t" << t1s3_dth << ":" << t1s3_dtm << endl;
                }
                if (t1s4 == "Sadiqabad")
                {
                  cout << t1 << "\t" << t1s4_ath << ":" << t1s4_atm << "\t" << t1s4_dth << ":" << t1s4_dtm << endl;
                }
                if (t2s1 == "Sadiqabad")
                {
                  cout << t2 << "\t" << t2s1_ath << ":" << t2s1_atm << "\t" << t2s1_dth << ":" << t2s1_dtm << endl;
                }
                if (t2s2 == "Sadiqabad")
                {
                  cout << t2 << "\t" << t2s2_ath << ":" << t2s2_atm << "\t" << t2s2_dth << ":" << t2s2_dtm << endl;
                }
                if (t2s3 == "Sadiqabad")
                {
                  cout << t2 << "\t" << t2s3_ath << ":" << t2s3_atm << "\t" << t2s3_dth << ":" << t2s3_dtm << endl;
                }
                if (t2s4 == "Sadiqabad")
                {
                  cout << t2 << "\t" << t2s4_ath << ":" << t2s4_atm << "\t" << t2s4_dth << ":" << t2s4_dtm << endl;
                }
                if (t3s1 == "Sadiqabad")
                {
                  cout << t3 << "\t" << t3s1_ath << ":" << t3s1_atm << "\t" << t3s1_dth << ":" << t3s1_dtm << endl;
                }
                if (t3s2 == "Sadiqabad")
                {
                  cout << t3 << "\t" << t3s2_ath << ":" << t3s2_atm << "\t" << t3s2_dth << ":" << t3s2_dtm << endl;
                }
                if (t3s3 == "Sadiqabad")
                {
                  cout << t3 << "\t" << t3s3_ath << ":" << t3s3_atm << "\t" << t3s3_dth << ":" << t3s3_dtm << endl;
                }
                if (t3s4 == "Sadiqabad")
                {
                  cout << t3 << "\t" << t3s4_ath << ":" << t3s4_atm << "\t" << t3s4_dth << ":" << t3s4_dtm << endl;
                }
                if (t4s1 == "Sadiqabad")
                {
                  cout << t4 << "\t" << t4s1_ath << ":" << t4s1_atm << "\t" << t4s1_dth << ":" << t4s1_dtm << endl;
                }
                if (t4s2 == "Sadiqabad")
                {
                  cout << t4 << "\t" << t4s2_ath << ":" << t4s2_atm << "\t" << t4s2_dth << ":" << t4s2_dtm << endl;
                }
                if (t4s3 == "Sadiqabad")
                {
                  cout << t4 << "\t" << t4s3_ath << ":" << t4s3_atm << "\t" << t4s3_dth << ":" << t4s3_dtm << endl;
                }
                if (t4s4 == "Sadiqabad")
                {
                  cout << t4 << "\t" << t4s4_ath << ":" << t4s4_atm << "\t" << t4s4_dth << ":" << t4s4_dtm << endl;
                }
              }
              else
              {
                cout << " Invalid Option! " << endl;
              }
              cout << endl
                   << "Press any key for continue........";
              cin >> c;

              // User menu5 op2 ends
            }
            else if (option == 3)
            {
              // User menu2 op3 starts
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Tickets Price " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name         Ticket Price" << endl;
              cout << " 1. " << t1 << "\t\t" << t1ticket << endl;
              cout << " 2. " << t2 << "\t" << t2ticket << endl;
              cout << " 3. " << t3 << "\t" << t3ticket << endl;
              cout << " 4. " << t4 << "\t" << t4ticket << endl;

              cout << endl
                   << "Press any key for continue........";
              cin >> c;

              // User menu2 op3 ends
            }
            else if (option == 4)
            {
              // User menu4 op4 starts
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Buy Tickets " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Available Trains......" << endl;
              cout << "1. " << t1 << endl;
              cout << "2. " << t2 << endl;
              cout << "3. " << t3 << endl;
              cout << "4. " << t4 << endl;
              cout << "Your option..........";
              cin >> sub_op;
              system("cls");

              if (sub_op == 1)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> Buy Tickets " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name :" << t1 << endl;
                cout << "Stations available :" << endl;
                cout << t1s1 << "\t" << t1s2 << "\t" << t1s3 << "\t" << t1s4 << endl;
                cout << "From Station :";
                cin >> from5;
                cout << "To Station :";
                cin >> to5;
                cout << " Enter date ( dd mm yyyy):";
                cin >> day5;
                cin >> month5;
                cin >> year5;
                cout << "Ticket price is :" << t1ticket << endl;
                cout << "Enter quantity of tickets :";
                cin >> quantity5;
                price5 = t1ticket * quantity5;
                cout << "Total price for " << quantity5 << " tickets :" << price5 << endl;
                cout << "You want to buy Ticket (1 for yes, 0 for not) :";
                cin >> op1;
                t_name5 = t1;
              }
              else if (sub_op == 2)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> Buy Tickets " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name :" << t2 << endl;
                cout << "Stations available :" << endl;
                cout << t2s1 << "\t" << t2s2 << "\t" << t2s3 << "\t" << t2s4 << endl;
                cout << "From Station :";
                cin >> from5;
                cout << "To Station :";
                cin >> to5;
                cout << " Enter date ( dd mm yyyy):";
                cin >> day5;
                cin >> month5;
                cin >> year5;
                cout << "Ticket price is :" << t2ticket << endl;
                cout << "Enter quantity of tickets :";
                cin >> quantity5;
                price5 = t2ticket * quantity5;
                cout << "Total price for " << quantity5 << " tickets :" << price5 << endl;
                cout << "You want to buy Ticket (1 for yes, 0 for not) :";
                cin >> op1;
                t_name5 = t2;
              }
              else if (sub_op == 3)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> Buy Tickets " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name :" << t3 << endl;
                cout << "Stations available :" << endl;
                cout << t3s1 << "\t" << t3s2 << "\t" << t3s3 << "\t" << t3s4 << endl;
                cout << "From Station :";
                cin >> from5;
                cout << "To Station :";
                cin >> to5;
                cout << " Enter date ( dd mm yyyy):";
                cin >> day5;
                cin >> month5;
                cin >> year5;
                cout << "Ticket price is :" << t3ticket << endl;
                cout << "Enter quantity of tickets :";
                cin >> quantity5;
                price5 = t3ticket * quantity5;
                cout << "Total price for " << quantity5 << " tickets :" << price5 << endl;
                cout << "You want to buy Ticket (1 for yes, 0 for not) :";
                cin >> op1;
                t_name5 = t3;
              }
              else if (sub_op == 4)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> Buy Tickets " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name :" << t4 << endl;
                cout << "Stations available :" << endl;
                cout << t4s1 << "\t" << t4s2 << "\t" << t4s3 << "\t" << t4s4 << endl;
                cout << "From Station :";
                cin >> from5;
                cout << "To Station :";
                cin >> to5;
                cout << " Enter date ( dd mm yyyy):";
                cin >> day5;
                cin >> month5;
                cin >> year5;
                cout << "Ticket price is :" << t4ticket << endl;
                cout << "Enter quantity of tickets :";
                cin >> quantity5;
                price5 = t4ticket * quantity5;
                cout << "Total price for " << quantity5 << " tickets :" << price5 << endl;
                cout << "You want to buy Ticket (1 for yes, 0 for not) :";
                cin >> op1;
                t_name5 = t4;
              }
              else
              {
                cout << " Invalid Option! " << endl;
              }
              if (op1 == 1)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << "You buy Ticket Succesfully " << endl;
                cout << "Train Name :" << t_name5 << endl;
                cout << "From station :" << from5 << endl;
                cout << "To station :" << to5 << endl;
                cout << " Date :" << day5 << "-" << month5 << "-" << year5 << endl;
                cout << "Quantity :" << quantity5 << endl;
                cout << "Price :" << price5 << endl;
                cout << "****Thanks for buying Ticket****" << endl;
                date5 = day5 + (month5 * 30.417);
              }
              else
              {
                t_name5 = "";
                quantity5 = 0;
                price5 = 0;
                day5 = 0;
                month5 = 0;
                year5 = 0;
              }
              cout << endl
                   << "Press any key for continue........";
              cin >> c;
              // User menu4 op4 ends
            }
            else if (option == 5)
            {
              // User menu5 op5 starts
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Your Tickets " << endl;
              cout << "_____________________________________________________________" << endl;

              if (price1 != 0 || price2 != 0 || price3 != 0 || price4 != 0)
              {
                cout << "Display according to ticket date which come first ....." << endl
                     << endl;

                if (date1 < date2 && date1 < date3 && date1 < date4)
                {
                  cout << "*** Ticket no. 1 ***" << endl;
                  cout << "Train : " << t_name1 << endl;
                  cout << "From  : " << from1 << endl;
                  cout << "To    : " << to1 << endl;
                  cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                  cout << "Quantity : " << quantity1 << endl;
                  cout << "Price : " << price1 << endl
                       << endl
                       << endl;

                  if (date2 < date3 && date2 < date4)
                  {
                    cout << "*** Ticket no. 2 ***" << endl;
                    cout << "Train : " << t_name2 << endl;
                    cout << "From  : " << from2 << endl;
                    cout << "To    : " << to2 << endl;
                    cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                    cout << "Quantity : " << quantity2 << endl;
                    cout << "Price : " << price2 << endl
                         << endl
                         << endl;

                    if (date3 < date4)
                    {
                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;
                    }
                  }
                  else if (date3 < date2 && date3 < date4)
                  {
                    cout << "*** Ticket no. 3 ***" << endl;
                    cout << "Train : " << t_name3 << endl;
                    cout << "From  : " << from3 << endl;
                    cout << "To    : " << to3 << endl;
                    cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                    cout << "Quantity : " << quantity3 << endl;
                    cout << "Price : " << price3 << endl
                         << endl
                         << endl;

                    if (date2 > date4)
                    {
                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;
                    }
                  }
                  else
                  {
                    cout << "*** Ticket no. 4 ***" << endl;
                    cout << "Train : " << t_name4 << endl;
                    cout << "From  : " << from4 << endl;
                    cout << "To    : " << to4 << endl;
                    cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                    cout << "Quantity : " << quantity4 << endl;
                    cout << "Price : " << price4 << endl
                         << endl
                         << endl;

                    if (date2 < date3)
                    {
                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;
                    }
                  }
                }

                else if (date2 < date1 && date2 < date3 && date2 < date4)
                {
                  cout << "*** Ticket no. 2 ***" << endl;
                  cout << "Train : " << t_name2 << endl;
                  cout << "From  : " << from2 << endl;
                  cout << "To    : " << to2 << endl;
                  cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                  cout << "Quantity : " << quantity2 << endl;
                  cout << "Price : " << price2 << endl
                       << endl
                       << endl;

                  if (date1 < date3 && date1 < date4)
                  {
                    cout << "*** Ticket no. 1 ***" << endl;
                    cout << "Train : " << t_name1 << endl;
                    cout << "From  : " << from1 << endl;
                    cout << "To    : " << to1 << endl;
                    cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                    cout << "Quantity : " << quantity1 << endl;
                    cout << "Price : " << price1 << endl
                         << endl
                         << endl;

                    if (date3 < date4)
                    {
                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;
                    }
                  }
                  else if (date3 < date1 && date3 < date4)
                  {
                    cout << "*** Ticket no. 3 ***" << endl;
                    cout << "Train : " << t_name3 << endl;
                    cout << "From  : " << from3 << endl;
                    cout << "To    : " << to3 << endl;
                    cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                    cout << "Quantity : " << quantity3 << endl;
                    cout << "Price : " << price3 << endl
                         << endl
                         << endl;

                    if (date1 > date4)
                    {
                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;
                    }
                  }
                  else
                  {
                    cout << "*** Ticket no. 4 ***" << endl;
                    cout << "Train : " << t_name4 << endl;
                    cout << "From  : " << from4 << endl;
                    cout << "To    : " << to4 << endl;
                    cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                    cout << "Quantity : " << quantity4 << endl;
                    cout << "Price : " << price4 << endl
                         << endl
                         << endl;

                    if (date1 < date3)
                    {
                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;
                    }
                  }
                }

                else if (date3 < date1 && date3 < date2 && date3 < date4)
                {
                  cout << "*** Ticket no. 3 ***" << endl;
                  cout << "Train : " << t_name3 << endl;
                  cout << "From  : " << from3 << endl;
                  cout << "To    : " << to3 << endl;
                  cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                  cout << "Quantity : " << quantity3 << endl;
                  cout << "Price : " << price3 << endl
                       << endl
                       << endl;

                  if (date1 < date2 && date1 < date4)
                  {
                    cout << "*** Ticket no. 1 ***" << endl;
                    cout << "Train : " << t_name1 << endl;
                    cout << "From  : " << from1 << endl;
                    cout << "To    : " << to1 << endl;
                    cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                    cout << "Quantity : " << quantity1 << endl;
                    cout << "Price : " << price1 << endl
                         << endl
                         << endl;

                    if (date2 < date4)
                    {
                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;
                    }
                  }
                  else if (date2 < date1 && date2 < date4)
                  {
                    cout << "*** Ticket no. 2 ***" << endl;
                    cout << "Train : " << t_name2 << endl;
                    cout << "From  : " << from2 << endl;
                    cout << "To    : " << to2 << endl;
                    cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                    cout << "Quantity : " << quantity2 << endl;
                    cout << "Price : " << price2 << endl
                         << endl
                         << endl;

                    if (date1 > date4)
                    {
                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 4 ***" << endl;
                      cout << "Train : " << t_name4 << endl;
                      cout << "From  : " << from4 << endl;
                      cout << "To    : " << to4 << endl;
                      cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                      cout << "Quantity : " << quantity4 << endl;
                      cout << "Price : " << price4 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;
                    }
                  }
                  else
                  {
                    cout << "*** Ticket no. 4 ***" << endl;
                    cout << "Train : " << t_name4 << endl;
                    cout << "From  : " << from4 << endl;
                    cout << "To    : " << to4 << endl;
                    cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                    cout << "Quantity : " << quantity4 << endl;
                    cout << "Price : " << price4 << endl
                         << endl
                         << endl;

                    if (date1 < date2)
                    {
                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;
                    }
                  }
                }

                else
                {
                  cout << "*** Ticket no. 4 ***" << endl;
                  cout << "Train : " << t_name4 << endl;
                  cout << "From  : " << from4 << endl;
                  cout << "To    : " << to4 << endl;
                  cout << "Date  :" << day4 << "-" << month4 << "-" << year4 << endl;
                  cout << "Quantity : " << quantity4 << endl;
                  cout << "Price : " << price4 << endl
                       << endl
                       << endl;

                  if (date1 < date2 && date1 < date3)
                  {
                    cout << "*** Ticket no. 1 ***" << endl;
                    cout << "Train : " << t_name1 << endl;
                    cout << "From  : " << from1 << endl;
                    cout << "To    : " << to1 << endl;
                    cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                    cout << "Quantity : " << quantity1 << endl;
                    cout << "Price : " << price1 << endl
                         << endl
                         << endl;

                    if (date2 < date3)
                    {
                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;
                    }
                  }
                  else if (date2 < date1 && date2 < date3)
                  {
                    cout << "*** Ticket no. 2 ***" << endl;
                    cout << "Train : " << t_name2 << endl;
                    cout << "From  : " << from2 << endl;
                    cout << "To    : " << to2 << endl;
                    cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                    cout << "Quantity : " << quantity2 << endl;
                    cout << "Price : " << price2 << endl
                         << endl
                         << endl;

                    if (date1 > date4)
                    {
                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 3 ***" << endl;
                      cout << "Train : " << t_name3 << endl;
                      cout << "From  : " << from3 << endl;
                      cout << "To    : " << to3 << endl;
                      cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                      cout << "Quantity : " << quantity3 << endl;
                      cout << "Price : " << price3 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;
                    }
                  }
                  else
                  {
                    cout << "*** Ticket no. 3 ***" << endl;
                    cout << "Train : " << t_name3 << endl;
                    cout << "From  : " << from3 << endl;
                    cout << "To    : " << to3 << endl;
                    cout << "Date  :" << day3 << "-" << month3 << "-" << year3 << endl;
                    cout << "Quantity : " << quantity3 << endl;
                    cout << "Price : " << price3 << endl
                         << endl
                         << endl;

                    if (date1 < date2)
                    {
                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;
                    }
                    else
                    {
                      cout << "*** Ticket no. 2 ***" << endl;
                      cout << "Train : " << t_name2 << endl;
                      cout << "From  : " << from2 << endl;
                      cout << "To    : " << to2 << endl;
                      cout << "Date  :" << day2 << "-" << month2 << "-" << year2 << endl;
                      cout << "Quantity : " << quantity2 << endl;
                      cout << "Price : " << price2 << endl
                           << endl
                           << endl;

                      cout << "*** Ticket no. 1 ***" << endl;
                      cout << "Train : " << t_name1 << endl;
                      cout << "From  : " << from1 << endl;
                      cout << "To    : " << to1 << endl;
                      cout << "Date  :" << day1 << "-" << month1 << "-" << year1 << endl;
                      cout << "Quantity : " << quantity1 << endl;
                      cout << "Price : " << price1 << endl
                           << endl
                           << endl;
                    }
                  }
                }
              }
              else
              {
                cout << " YOU HAVE NO TICKET!" << endl;
              }

              cout << endl
                   << "Press any key for continue........";
              cin >> c;
              // User menu5 op6 ends
            }
            else if (option == 6)
            {
              // User menu5 op6 starts
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Freight Rates " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Train Name         Rate/kg   " << endl;
              cout << " 1. " << t1 << "\t\t" << t1cargo << endl;
              cout << " 2. " << t2 << "\t" << t2cargo << endl;
              cout << " 3. " << t3 << "\t" << t3cargo << endl;
              cout << " 4. " << t4 << "\t\t" << t4cargo << endl;

              cout << endl
                   << "Press any key for continue........";
              cin >> c;
              // User menu5 op6 ends
            }
            else if (option == 7)
            {
              // User menu5 op7 starts
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> Book Cargo " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Available Trains......" << endl;
              cout << "1. " << t1 << endl;
              cout << "2. " << t2 << endl;
              cout << "3. " << t3 << endl;
              cout << "4. " << t4 << endl;
              cout << "Your option..........";
              cin >> sub_op;
              system("cls");

              if (sub_op == 1)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> Book Cargo " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name :" << t1 << endl;
                cout << "Price per kg :" << t1cargo << endl;
                cout << "Enter the cargo weight (kg) :";
                cin >> weight5;
                c_price5 = t1cargo * weight5;
                cout << "You have to pay :" << c_price5 << endl;
                cout << "You want to book cargo (1 for yes, 0 for not) :";
                cin >> op1;
              }
              else if (sub_op == 2)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> Book Cargo " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name :" << t2 << endl;
                cout << "Price per kg :" << t2cargo << endl;
                cout << "Enter the cargo weight (kg) :";
                cin >> weight5;
                c_price5 = t2cargo * weight5;
                cout << "You have to pay :" << c_price5 << endl;
                cout << "You want to book cargo (1 for yes, 0 for not) :";
                cin >> op1;
              }
              else if (sub_op == 3)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> Book Cargo " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name :" << t3 << endl;
                cout << "Price per kg :" << t3cargo << endl;
                cout << "Enter the cargo weight (kg) :";
                cin >> weight5;
                c_price5 = t3cargo * weight5;
                cout << "You have to pay :" << c_price5 << endl;
                cout << "You want to book cargo (1 for yes, 0 for not) :";
                cin >> op1;
              }
              else if (sub_op == 4)
              {
                cout << "*************************************************************" << endl;
                cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
                cout << "*************************************************************" << endl
                     << endl;

                cout << " User >> Book Cargo " << endl;
                cout << "_____________________________________________________________" << endl;
                cout << "Train Name :" << t4 << endl;
                cout << "Price per kg :" << t4cargo << endl;
                cout << "Enter the cargo weight (kg) :";
                cin >> weight5;
                c_price5 = t4cargo * weight5;
                cout << "You have to pay :" << c_price5 << endl;
                cout << "You want to book cargo (1 for yes, 0 for not) :";
                cin >> op1;
              }
              else
              {
                cout << " Invalid Option! " << endl;
              }

              if (op1 == 1)
              {
                cout << "Your cargo succesfully booked " << endl;
              }
              else
              {
                weight5 = 0;
                c_price5 = 0;
              }
              cout << endl
                   << "Press any key for continue........";
              cin >> c;
              // User menu5 op7 ends
            }
            else if (option == 8)
            {
              // User menu5 op8 starts
              cout << "*************************************************************" << endl;
              cout << "*                  RAILWAY MANAGEMENT SYSTEM                *" << endl;
              cout << "*************************************************************" << endl
                   << endl;

              cout << " User >> View Notice " << endl;
              cout << "_____________________________________________________________" << endl;
              cout << "Notice Board......" << endl;
              cout << notice;

              cout << endl
                   << "Press any key for continue........";
              cin >> c;
              // User menu5 op8 ends
            }
            // User menu5 all ops ends
            if (option < 9)
            {

              //   Ends

              /* Exit menu5 user */
            }
            /* Exit menu4 user */
          }
          /* Exit menu3 user */
        }
        /* Exit menu2 user */
      }
      /* Exit menu1 user */
    }
    // User Portion Ends
  }

  // for wrong username entrance
  system("cls");
  if (username != "user" || username != "User" || username != "admin" || username != "Admin")
  {
    cout << " Invalid Username! ";
  }

  if (password != "123")
  {
    cout << " Wrong Password!" << endl;
  }

  cout << endl
       << endl
       << endl;
  cout << "************** THANKS FOR USING RAILWAY MANAGEMENT SYSTEM ***************" << endl;
  cout << "  Developer : *** Hamza Rasheed 2021-CS-26  ***" << endl;
  // Programs End
}