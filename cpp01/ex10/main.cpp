#include <string>
#include <iostream>
#include <fstream>

void show_file(std::istream *in)
{
    char buf;
    while (in->read(&buf, 1))
        std::cout.write(&buf, 1);
}

int main(int ac, char **av)
{
    bool err = false;

    if (ac < 2)
    {
        show_file(&std::cin);
        return 0;
    }
    for (int i = 1; i < ac; i++)
    {
        std::string file = av[i];
        if (file == "-")
            show_file(&std::cin);
        else
        {
            std::fstream in;
            in.open(file.c_str(), std::fstream::in);
            in.rdbuf()->pubsetbuf(0, 0);
            if (in)
                show_file(&in);
            else
            {
                std::cerr << av[0] << ": " << file << ": No such file or directory" << std::endl;
                err = true;
            }
        }
    }
    return err ? 1 : 0;
}