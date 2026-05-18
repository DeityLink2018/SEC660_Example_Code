#include "ErrorApis.h"

INT
WINAPI
ResolveErrorCode(
	_In_ PCSTR Message,
	_In_ DWORD ErrorCode
)
{
	char messageBuffer[256];

	// TODO #1 - call the ASCII version of the FormatMessage function in order to lookup messages from the system
	// make sure the function does the buffer allocation and inserts do not matter
	// 
	
	FormatMessageA(
		FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		ErrorCode,
		0,
		messageBuffer,
		sizeof(messageBuffer) / sizeof(wchar_t),
		NULL
	);

	printf("%s", Message);
	printf("%s\n", messageBuffer);

	LocalFree(messageBuffer);

	return ERROR_INVALID_HANDLE;
}
