
#ifndef LIBODA_ODA_SYSTEM_H_
#define LIBODA_ODA_SYSTEM_H_

#include <oda/status.h>

namespace oda {

/// Open Dynamic Audio system management class.
/** 
 * All instances of this class handle the same shared resources. Thus, there
 * is no need to dynamically allocate objects for it.
 * 
 * Use the `start()` method to initialize the system, and the `finish()` method
 * to release it. Example:
 *
 * ~~~.cxx
 * oda::System sys;
 * oda::Status status = sys.start();
 * // check return value
 * // use the system
 * sys.finish();
 * ~~~
 * @see oda::System::start()
 * @see oda::System::finish()
 */
class System {
 public:
  System();
  ~System() {}

  /// Starts the main ODA system
  /**
   * @return A Status object that tells how the initialization went.
   * @see oda::Status
   * @see oda::System::finish()
   */
  Status start();

  /// Finishes the main ODA system
  /**
   * @see oda::System::start()
   */
  void finish();
};
 
} // namespace oda

#endif // LIBODA_ODA_SYSTEM_H_

