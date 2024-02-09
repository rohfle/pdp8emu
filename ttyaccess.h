void ttybreak();
void set_ttybreak(void (*new_hook)());

int ttygetc(void);
void ttygets(char *buf, int len);
int ttypoll(void);
void comms_init(void);
void comms_cleanup(void);