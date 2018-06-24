#include <iostream>
#include "Qt5" 


#define DEFAULT_MAX_TEXT_FIELD_CHAR 20
#define DEFAULT_TEXT_FIELD_LENGTH 20


class Gui
{
public :
    Gui();
    void read_text_field( TextField tf ) ;

private :
    TextField *create_text_field( int x1, int x2, int y1, int y2, int length,
				  int max_char, char *entry_ptr, char *default_text,
				  char *title, char *help_description );

    void read_text_field( TextField * tf) ;
    
    void set_title( char *title );

}

