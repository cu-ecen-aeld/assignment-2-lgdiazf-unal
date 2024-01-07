#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>


int main(int argc, char *argv[]) {
    
    if (argc != 3) {
	syslog(LOG_ERR, "Error on the arguments");
        closelog();
        return EXIT_FAILURE;
    }

    const char *writefile = argv[1];
    const char *writestr = argv[2];

    FILE *file = fopen(writefile, "a");
  
    if (file == NULL) {
        syslog(LOG_ERR, "Error : %m");
        closelog();
        return EXIT_FAILURE;
    }

    fprintf(file, "%s\n", writestr);

    fclose(file);
    syslog(LOG_DEBUG, "Writing \"%s\" to \"%s\"", writestr, writefile);

    closelog();


    return EXIT_SUCCESS;
}
