#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c);

void print_alphabet(void)
{
        char ch_l = 'a';
        int i;

        for (i = 0; i < 26; i++)
        {
                _putchar(ch_l);
                ch_l++;
        }
        _putchar('\n');
}

#endif
