#pragma once

// system includes
#include <Windows.h>
#include <stdio.h>

/// <summary>
/// Accepts an error message and an error code given from GetLastError()
/// </summary>
/// <param name="Message">The message for the user indicating what function failed</param>
/// <param name="ErrorCode">The error code from GetLastError()</param>
/// <returns>6 for ERROR_INVALID_HANDLE</returns>
INT
WINAPI
ResolveErrorCode(
	_In_ PCSTR Message,
	_In_ DWORD ErrorCode
);
