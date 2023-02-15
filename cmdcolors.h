#ifndef CMDCOLORS_H
#define CMDCOLORS_H
#include <Windows.h>
#include <stdlib.h>
#include <string>
//----------------------------------------------------------------------------
void showCursor(BOOL, BOOL);	// Visar/g�mmer cursorn, block eller _
void resizewindow(int, int);	// �ndrar f�nstrets strl och buffer. Ange nytt x- och y v�rde
void textcolor(int);			// Byter f�rgen p� texten. Ange ny f�rg
void textbackground(int);		// Byter f�rgen p� backgrunden. Ange ny f�rg
void gotoxy(int, int);			// Placerar mark�ren. Ange nytt x- och y v�rde
void fullscreen();				// FullScreen utan system menu
void maximizedWindow();			// 'Fullscreen' med system menu.
void changeFontSize(int, std::string = "Consolas", int = 0); // h�jd, bredd, font
typedef enum {
	BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY,
	LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE
}COLORS;
//----------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------
