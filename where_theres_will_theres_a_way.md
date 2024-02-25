## Question 1 (∞ points):

You are the lead developer on the latest and greatest tax evasion software. After a long day at work, you decide to take a break and write a fun program that continuously reads a sequence of positive integer inputs and prints the following when the program ends:  
1. The smallest and largest of the inputs
2. The number of even and odd inputs
3. Cumulative totals. For example, if the input is `1 7 2 9` the program should print `1 8 10 19`

The good news is, you decide to make this a bit easier on yourself by only allowing single-digit numbers and knowing that your user would never enter in a negative number (you don't need to worry about it). 

You also decide to accomplish these objectives by making 3 different functions that take in single-digit numbers smushed together in a string - for instance, user input of `1 7 2 9` would be passed in as `"1729"` to one of your 3 functions. You'll have to use string indexing to access each individual number! 

These functions are defined below.

## getSmallestLargest
<table>

<tr>
<td>
Function:

```getSmallestLargest(string)```

</td>
<td>

```cpp
string getSmallestLargest(string input)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>
The function should take in a string of single digit numbers and output the smallest and largest numbers present.
</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

<b>string</b> ```input``` - user input <br>
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>
If successful, returns the minimum and maximum numbers separated by a space.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:

</td>
<td>

- If ```input``` contains a non-integer value or 0, return a blank string

</td>
</tr>
<tr>
<td>
Example:
</td>

<td>

Note: this is only an example usage of the function; 

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of getSmallestLargest() is included.

int main() {
    string input = "1792"
    string result = getSmallestLargest(input);
    cout << "The result is: " << result << endl;
    return 0;
}
```

Sample Output:
```
The result is: 1 9
```

</td>
</tr>

</table>


## getNumEvenOdd
<table>

<tr>
<td>
Function:

```getNumEvenOdd(string)```

</td>
<td>

```cpp
string getNumEvenOdd(string input)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>
The function should take in a string of single digit numbers and output the number of even numbers followed by the number of odd numbers.
</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

<b>string</b> ```input``` - user input <br>
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>
If successful, returns the number of even numbers followed by the number of odd numbers in a string.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:

</td>
<td>

- If ```input``` contains a non-integer value or 0, return a blank string

</td>
</tr>
<tr>
<td>
Example:
</td>

<td>

Note: this is only an example usage of the function; 

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of getNumEvenOdd() is included.

int main() {
    string input = "17925"
    string result = getNumEvenOdd(input);
    cout << "The result is: " << result << endl;
    return 0;
}
```

Sample Output:
```
The result is: 1 4
```

</td>
</tr>

</table>


## getRunningTotal
<table>

<tr>
<td>
Function:

```getRunningTotal(string)```

</td>
<td>

```cpp
string getRunningTotal(string input)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>
The function should take in a string of single digit numbers and return a new string with 
</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

<b>string</b> ```input``` - user input <br>
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>
If successful, returns a new string with each value of the i-th number replaced with the value of the sum of the 0...i-th numbers.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:

</td>
<td>

- If ```input``` contains a non-integer value or 0, return a blank string

</td>
</tr>
<tr>
<td>
Example:
</td>

<td>

Note: this is only an example usage of the function; 

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of getRunningTotal() is included.

int main() {
    string input = "17925"
    string result = getRunningTotal(input);
    cout << "The result is: " << result << endl;
    return 0;
}
```

Sample Output:
```
The result is: 1 8 17 19 24
```

</td>
</tr>

</table>

## Assert tests
If time, write a function in main to collect user input.
```cpp
int main() {
    assert(getSmallestLargest("2220033") == "");
    assert(getSmallestLargest("787847319") == "1 9");
    assert(getSmallestLargest("777") == "7 7");
    assert(getSmallestLargest("a") == "");

    assert(getNumEvenOdd("1789") == "1 3");
    assert(getNumEvenOdd("22222") == "5 0");
    assert(getNumEvenOdd("9999") == "0 4");
    assert(getNumEvenOdd("a123") == "");

    assert(getRunningTotal("17925") == "1 8 17 19 24");
    assert(getRunningTotal("1729") == "1 8 10 19");
    assert(getRunningTotal("234234a") == "");
    return 0;
}
```