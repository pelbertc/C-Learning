#include <iostream>

using namespace std;

int main()
{
for (int outer = 0; outer < 5; outer++)
    {                                                          // if not for these matching braces, it only does a linefeed once.
   for (int inner = 0; inner < 6; inner++)
      cout << "  " << outer << ' ' << inner;
   cout << '\n';                                              // end of row

    }

}

//the inner loop prints the line horizontally, outer loop print vertical line