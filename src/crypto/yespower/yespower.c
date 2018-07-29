#include "sha256.c"
#include "sha256.h"
#include "yespower.h"
#include "yespower-opt.c"

static const yespower_params_t yespower_bitzeny = {YESPOWER_0_5, 2048, 8, "Client Key", 10};

int yespower_hash(const char *input, char *output)
{
  return yespower_tls(input, 80, &yespower_bitzeny, (yespower_binary_t *) output);
}
