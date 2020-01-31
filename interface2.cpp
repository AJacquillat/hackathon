#include <ncurses.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
    string nom;
    cout << "Rogue's Name?" << endl;
    cin >> nom;

    initscr();
    cbreak();
    keypad(stdscr,TRUE);
    
    WINDOW* win = newwin(20,20,0,0);
    int x;
    int y;
    //printw(y,x,'@');
    x = 0;
    y = 0;
    
    wborder(win, 0, 0, 0, 0, 0, 0, 0, 0); //pas mal mais ne permet pas de faire de trous  
    //peut etre que l'on peut imprimer localement un caractère qui mènera au couloir 
    for (int i(0); i<2000; i++){
        int ch = getch();
        switch (ch) {
            case KEY_DOWN:
                y++;
                wrefresh(win);
                waddch(win,'@');
                wmove(win,y, x);
                break;
            case KEY_RIGHT:
                x++;
                wrefresh(win);
                waddch(win,'@');
                wmove(win,y, x);
                break;
            case KEY_LEFT:
                x--;
                
                wrefresh(win);
                waddch(win,'@');
                wmove(win,y, x);
                break;
            case KEY_UP:
                y--;
                wrefresh(win);                
                waddch(win,'@');
                wmove(win,y, x);
                break;
        }
        wrefresh(win);
    }
    
    wrefresh(win);
    getch();
    endwin();
    //keypad(stdstr, TRUE);

  return 0;
}
