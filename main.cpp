//
// Main File to call all functions as examples. Modify/Add/Delete as needed to call specific functions
//

// system includes
#include <Windows.h>
#include <stdio.h>

// custom includes
#include "ErrorApis.h"

INT
main(INT arg, PCHAR argv[])
{
	printf("Testing out error code 5...\n");

	//
	// test your function here
	//
	ResolveErrorCode(
		"Error Code: ",   // Custom Message to pass before error code is presented
		15                // INT Windows Error Code to "Translate"
	);

	return ERROR_SUCCESS;
}
