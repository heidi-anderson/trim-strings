#include "trim.h"

//add the two given test cases at the end of this document

void cTrim(char string[100], trimType method)
{
    int i;              /* loop variable */
    bool exit = false;  /* loop exit */

    /* remove ws from front of c string */
    if (method == FRONT)
    {
        for (i = 0; i < strlen(string); ++i)
        {
            if (isspace(string[i]) == 0)
            {
                strcpy(string, string + i);
                return;
            }
        }
        strcpy(string, string + strlen(string));
    }

    /* remove ws from back of c string */
    if (method == END)
    {
        for (i = (int)strlen(string) - 1; i >= 0; --i)
        {
            if (isspace(string[i]) == 0)
            {
                return;
            }
            string[i] = 0;
        }
    }

    /* remove ws from front and back of c string */
    if (method == BOTH)
    {
        for (i = 0; i < strlen(string) && exit == false; ++i)
        {
            if (isspace(string[i]) == 0)
            {
                strcpy(string, string + i);
                exit = true;
            }
        }
        for (i = (int)strlen(string) - 1; i >= 0; --i)
        {
            if (isspace(string[i]) == 0)
            {
                return;
            }
            string[i] = 0;
        }
    }


}

void sTrim(string& string, trimType method)
{
    string::iterator it; /* iterator to move through elements */

    /* remove front ws */
    if ((method == FRONT || method == BOTH) && string.length() > 0)
    {
        it = string.begin();
        while (it != string.end() && isspace(*it) != 0)
        {
            it++;
        }
        string.erase(string.begin(), it);
    }

    /* remove back ws */
    if ((method == END || method == BOTH) && string.length() > 0)
    {

        it = string.end() - 1;
        while (it != string.begin() && isspace(*it) != 0)
        {
            it--;
        }
        if (it == string.begin())
        {
            string.erase(it, string.end());
        }
        else
        {
            string.erase(it + 1, string.end());
        }

    }

}

