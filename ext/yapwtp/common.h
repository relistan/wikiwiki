#ifndef __COMMON_H
#define __COMON_H
#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <stdarg.h>
#include <stdbool.h>
#include <ctype.h>
#include "bstrlib.h"
#include "list.h"

#define KBYTE 1024
#define MBYTE KBYTE * 1024

extern int current_header_level;
extern int current_bullet_list_level;
extern int current_numbered_list_level;

extern int start_of_line;
extern char protocol[5];

extern int image_attributes;
extern bstring image_url;
extern bstring image_variables;

extern int toc_attributes;

extern int in_tag;
extern bstring tag_content;
extern unsigned int tag_content_size;

extern bstring output_buffer;
extern bstring input_buffer;
extern long input_buffer_pos;

extern struct list list;

#endif
