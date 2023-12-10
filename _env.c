#include "libs.h"
/**
 * env - Prints the environment variables.
 * This function retrieves the environment variables
 * and prints them using the _printf function.
 * Return: void
 */
void env(void)
{
    char **envp;

    envp = __environ;
    while (*envp)
    {
        _printf(1, "%s\n", *envp);
        envp++;
    }
}