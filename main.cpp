#include <iostream>
#include "flex.h"
using namespace std;

int main()
{
	Flex a, b("Merry"), c("Christmas");
	cout << a << ',' << b << ',' << c << endl;
	b.cat(a);
	cout << b << endl;
	b.cat(c);
	cout << b << endl;
	c.cat(c);
	c.cat(c);
	cout << c << endl;
	return 0;
}
/*	Here is my execution output:

	* *,*Merry*,*Christmas*
	*Merry *
	*Merry Christmas*
	*ChristmasChristmasChristmasChristmas**/

/*	Comments:

- Objects of class Flex allow a variable length string to be maintained.
- When the constructor for Flex is provided a c-string as a parameter, 
the Flex object created will have that string value.  If no parameter is
provided, a default string consisting of exactly one space should be
created.
- Flex should have an overload of the output operator (<<) that will
display the string surrounded by stars (*).
- Flex also has a void function, cat, having one reference parameter of
type Flex.  The function cat should append the string in that parameter to
the end of the Flex object invoking cat.
- There is no established bound on the size of a Flex object, so dynamic
storage allocation should be used.
- All Flex member data is private

On the next page show me the contents of flex.h and flex.cpp.  The use of
the <cstring> functions we discussed in class is permitted.
*/