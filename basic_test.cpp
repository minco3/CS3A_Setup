#include <gtest/gtest.h>
#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------------------
//@TODO: include all files we are testing:
#include "../../includes/array_functions/array_functions.h"



//------------------------------------------------------------------------------------------

using namespace std;

bool basic_test(bool debug=false)
{
  const int MAX = 20;
  int a[MAX];
  int size = 5;  // # of interesting elements in the array

  _array_init(a, size, -1);
  cout << "after init: ";
  _print_array(a, size);

  for (int i = size; i < 10; i++) {
    _append(a, size, i * 10);
    _print_array(a, size);
  }

  int index = _find(a, size, 70);
  if (index >= 0) {
    cout << "found 70 at: " << _at(a, size, index) << endl;
    cout << "changing 70 to 700: " << endl;
    _at(a, size, index) = 700;
    _print_array(a, size);
  }
  return true;
}


//Lord help me! 
const bool debug = false;

TEST(BASIC_TEST, BasicTest)
{
  bool success = basic_test(debug);
  EXPECT_EQ(success, true);
}


/*
<pre>
00_lab_0 git:(master) ✗  😊 $> tree includes 
includes
└── array_functions
│   ├── array_functions.cpp
│   └── array_functions.h
└── stub
    ├── stub.cpp
    └── stub.h
2 directories, 4 files

00_lab_0 git:(master) ✗  😊 $> ./build/bin/basic_test
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from BASIC_TEST
[ RUN      ] BASIC_TEST.BasicTest
after init: ( 5)   [  -1  -1  -1  -1  -1 ]
( 6)   [  -1  -1  -1  -1  -1  50 ]
( 7)   [  -1  -1  -1  -1  -1  50  60 ]
( 8)   [  -1  -1  -1  -1  -1  50  60  70 ]
( 9)   [  -1  -1  -1  -1  -1  50  60  70  80 ]
(10)   [  -1  -1  -1  -1  -1  50  60  70  80  90 ]
found 70 at: 70
changing 70 to 700: 
(10)   [  -1  -1  -1  -1  -1  50  60  700  80  90 ]
[       OK ] BASIC_TEST.BasicTest (1 ms)
[----------] 1 test from BASIC_TEST (1 ms total)
[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (2 ms total)
[  PASSED  ] 1 test.
00_lab_0 git:(master)  😊 $> 
</pre>
*/
