const char *greet(const char *name, const char *owner)
{
    while (*name != '\0' || *owner != '\0')
    {
        if (*name++ != *owner++)
        {
            return "Hello guest";
        }
    }

    return "Hello boss";
}