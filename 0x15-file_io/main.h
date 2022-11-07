#ifndef _MAIN_H
#define _MAIN_H

/* LIBRARIES */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

/* PROTOTYPES */

ssize_t read_textfile(const char *filename, size_t letters);

#endif
