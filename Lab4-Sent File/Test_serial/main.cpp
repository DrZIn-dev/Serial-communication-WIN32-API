#include <Windows.h>
#include <stdio.h>
int main()
{
    HANDLE hComm;
    hComm = CreateFile("\\\\.\\COM3",               //port name
                       GENERIC_READ | GENERIC_WRITE, //Read/Write
                       0,                            // No Sharing
                       NULL,                         // No Security
                       OPEN_EXISTING,                // Open existing port only
                       0,                            // Non Overlapped I/O
                       NULL);                        // Null for Comm Devices

    if (hComm == INVALID_HANDLE_VALUE)
        printf("Error in opening Serial port");
    else
        printf("\nopening serial port successful\n");

    CloseHandle(hComm); //Closing the Serial Port
    return 0;
}