#include <iostream>

using namespace std;

int main()
{

    // A
    /*
    int n;
    int m;
    int a;
    cin >> n;
    cin >> m;
    cin >> a;

    int row = (n + a - 1) / a;
    int col = (m + a - 1) / a;

    cout << row * col << endl;
    */

    // B

    /*
         int n;
         int count = 0;
         cin >> n;

         for (int i = 0; i < n; i++)
         {
             int a ;
             int  b;
             int  c;
             cin >> a;
             cin  >> b;
             cin  >> c;

             if (a + b + c >= 2)
             {
                 count++;
             }
         }

         cout << count;
 */
    // C
    /*
      int n;
      int bookCount = 0;
      string books[100000];
      cin >> n;

      for (int i = 0; i < n; i++)
      {
          string title;
          cin >> title;

          int count = 0;
          for (int j = 0; j < bookCount; j++)
          {
              if (books[j] == title)
              {
                  count++;
              }
          }

          if (count == 0)
          {
              cout << "OK" << endl;
              books[bookCount++] = title;
          }
          else
          {
              cout << title << count << endl;
              books[bookCount++] = title + to_string(count);
          }
      }
          */

    // D
    /*
            int n;
            int temperature = 0;
            cin >> n;


            for (int i = 0; i < n; i++)
            {
                string command;
                cin >> command;

                if (command == "++T" || command == "T++")
                {
                    temperature++;
                }
                else if (command == "--T" || command == "T--")
                {
                    temperature--;
                }
            }

            cout << temperature << endl;
      */

    // E
    /*
            string x;
            cin >> x;

            for (int i = 0; i < x.length(); i++)
            {
                int digit = x[i] - '0';
                int transformed_digit = 9 - digit;


                if (i == 0)
                {
                    if (transformed_digit < digit)
                    {

                        if (transformed_digit == 0 && x.length() > 1)
                        {

                            x[i] = digit + '0';
                        }
                        else
                        {
                            x[i] = transformed_digit + '0';
                        }
                    }
                }
                else
                {

                    if (transformed_digit < digit)
                    {
                        x[i] = transformed_digit + '0';
                    }
                }
            }

            cout << x << endl;
    */
}
