/* @Author: Daniil Maslov */

#include <windows.h>
#include <stdio.h>
#include <math.h>

#include "main.h"
#include "daysInEveryMonth.c"
#include "note.c"
#include "calendar.c"

void main()
{   
    HStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(HStdOut, &CsbInfo);

    SYSTEMTIME date = getDate();
    
    SetConsoleTitle("Pretty calendar");
    
    runFillDaysInMonths();
    drawCalendar();
    drawNowDate();
    drawTitleMonth(date.wMonth);
    listenToButtonClicks();
}