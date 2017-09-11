# CurlPlusPlus (cURL++)
A C++ Wrapper to make it really easy to curl.
------------------------
Build:
------------------------
```sh
Build: g++ -Wall -Ithird_party Curl.cpp main.cpp -o CurlPlusPlus -Llibs/curl -lcurl && echo $?
```
------------------------
API Usage:
------------------------
- Should just need to add the Curl.h and Curl.cpp files with your C libcurl. 
- Use the C++ function ```curlcpp::Curl``` by giving it a URL ( Example for the API shown below and in main.cpp).

------------------------
API Example:
------------------------
- You can do this to get the Curled Result Stored in a variable called curlResult:

```sh
string URL_TO_CURL = "www.shahzadlone.com";
string curlResult = curlcpp::Curl( URL_TO_CURL );  
```

------------------------
Command Line Usage:
------------------------
```sh
Takes one argument: [URL-TO-CURL]
```
    WHERE:
          [URL-TO-CURL] : is a URL you wish to curl.

------------------------
Command Line Example:
------------------------
    [./CurlPlusPlus http://www.shahzadlone.com ]

