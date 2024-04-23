#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 0;
    char str[100];
    char sub[100];
    int pos = 0;
    int sub_index = 0;
    printf("Enter the string\n");
    gets(str);

    printf("Enter the substring\n");
    gets(sub);

    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < strlen(sub); j++)
        {
            if (str[i] == sub[j])
            {
                flag = 1;
                pos = i;
                for (int k = pos; k < pos + strlen(sub); k++)
                {
                    if (str[k] != sub[sub_index])
                    {
                        flag = 0;
                        break;
                    }
                    sub_index++;
                }
                if (flag == 1)
                {
                    printf("Its  a part of the string\n");
                    break;
                }
            }
        }
        if (flag == 1)
        {
            printf("Its  a part of the string\n");
            break;
        }
    }

    if (flag == 0)
    {
        printf("Its not a part of the string\n");
    }
    // else if (flag == 1)
    // {
    //     printf("Its  a part of the string\n");
    // }

    return 0;
}
