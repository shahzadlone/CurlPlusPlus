# include "Curl.h"

# include <iostream>

using namespace std;

// Build: g++ -Wall -Ithird_party Curl.cpp main.cpp -o cppCurl -Llibs/curl -lcurl && echo $?

int main( int argc, char * argv[] ) {

    // Ensure Only One Argument is Given.
    if ( argc != 2 ) {
        cerr << "Usage: " << argv[0] << " <url>" << endl;
        exit( EXIT_FAILURE );
    }
    
    // Curl Url and Store the Result. 
    string curlResult = curlcpp::Curl( argv[1] ); 

    // Output the Curl Result to Standard Output Stream.
    cout << curlResult << endl;
     
    return( EXIT_SUCCESS );
}
