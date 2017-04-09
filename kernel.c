static char* const VGA_MEMORY = (char*)0xb8000;
static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;

void kernel_early(void)
{
    //early work
}

int main(void)
{
    const char *str = "Hello OS!";
    unsigned int i=0; //place holder for the text string position
    unsigned int j=0; //place holder for video buffer position

    while(str[i] != '\0')
    {
        VGA_MEMORY[j] = str[i];
        VGA_MEMORY[j+1] = 0x0a;
        i++;
        j=j+2;
    }
    return 0;
}
