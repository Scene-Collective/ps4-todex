#include "ps4.h"

#define SPOOF 0x82

int _main(struct thread *td) {
  UNUSED(td);

  initKernel();
  initLibc();

  jailbreak();
  spoof_target_id(SPOOF);

  initSysUtil();

  printf_notification("Spoofing Target ID: 0x%hhx!", SPOOF);

  return 0;
}
