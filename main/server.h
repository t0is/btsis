#ifndef _SERVER_H
#define _SERVER_H

void RegisterEndPoints(void);
void init(void);
int sendData(const char* logName, const char* data);

#endif