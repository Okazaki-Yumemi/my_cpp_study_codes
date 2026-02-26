#include "seq.h"
#include <string>
#include <cstdio>

static int startnum=0;

static std::string default_label="label";

void SetInitNumber(int startnum1){
    startnum=startnum1;
}

void SetLabel(const char * input_label){
    default_label=input_label;
}

char* GetNextLabel(){
    static char buffer[100];

    snprintf(buffer,sizeof(buffer),"%s %d",default_label.c_str(),startnum);
    startnum++;

    return buffer;
}