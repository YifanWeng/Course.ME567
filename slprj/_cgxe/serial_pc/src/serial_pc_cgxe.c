/* Include files */

#include "serial_pc_cgxe.h"
#include "m_1zaV5uMNHzKnbxW73AHPbB.h"

unsigned int cgxe_serial_pc_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 3241923309 &&
      ssGetChecksum1(S) == 1455807318 &&
      ssGetChecksum2(S) == 2039361133 &&
      ssGetChecksum3(S) == 46343795) {
    method_dispatcher_1zaV5uMNHzKnbxW73AHPbB(S, method, data);
    return 1;
  }

  return 0;
}
