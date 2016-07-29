#include <main.h>

int main(int argc, char **argv)
{
	int status	= EXIT_FAILURE;


	// read the command argument
	if (argc >= 2) {
		if (strcmp(argv[1], "gpiomux") == 0) {
			if (gpiomux_mmap_open() == EXIT_FAILURE) {
				return EXIT_FAILURE;
			}

			if (argc >= 5 && !strcmp(argv[2], "set")) {
				status = gpiomux_set(argv[3], argv[4]);
			} 
			else if (argc >= 3 && !strcmp(argv[2], "get")) {
				status = gpiomux_get();
			} 
			else {
				fprintf(stderr, "%s set <group> <function>\n", *argv);
				fprintf(stderr, "%s get\n", *argv);
			}

			gpiomux_mmap_close();		
		}
		else if (strcmp(argv[1], "refclk") == 0) {
			if (refclk_mmap_open() == EXIT_FAILURE) {
				return EXIT_FAILURE;
			}

			if (argc >= 4 && !strcmp(argv[2], "set")) {
				status = refclk_set(atoi(argv[3]));
			} 
			else if (argc >= 3 && !strcmp(argv[2], "get")) {
				status = refclk_get();
			} 
			else {
				fprintf(stderr, "%s set <group> <function>\n", *argv);
				fprintf(stderr, "%s get\n", *argv);
			}

			refclk_mmap_close();		
		}
	}

	

	return status;
}