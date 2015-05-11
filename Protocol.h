#ifndef PROTOCOL_H_
#define PROTOCOL_H_

void serialCom();
void debugmsg_append_str(const char *str);

unsigned char GetStateLED();
void serialLEDRefresh();
void serialLEDOn();
void serialLEDOff();
void serialLEDToggle();

void serialBuzzerRefresh();
void serialBuzzerOn();
void serialBuzzerOff();

#endif /* PROTOCOL_H_ */
