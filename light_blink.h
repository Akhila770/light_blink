void init_port(void);
void output(char out_data);
void input(void);

void init_port() {
  volatile char *portf_dir = (char*)0x30;
  *portf_dir = 0xFF;
}

void output(char out_data) {
  volatile char *portf_data = (char*)0x31;
  *portf_data = out_data;
}
