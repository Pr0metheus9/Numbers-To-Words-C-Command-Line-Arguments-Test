//main method
int main(int argc, char **argv)
{
    //if you have both input and output files
    if (argc == 3)
    {
	    int * integers = get_ints(argv[1]);

	    write2file(argv[2],integers);
    }

    //if you have only input file 
    if (argc == 2)
    {
	    int * integers = get_ints(argv[1]);

	    write2out(integers);
    }

    //if not args were given 
    if (argc == 1)
    {
	int * integers = get_ints_stdin();

	write2out(integers);
    }

    return 0;
}

