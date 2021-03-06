#ifndef __BLE_PROFILES_H
#define __BLE_PROFILES_H

namespace ble {
namespace profiles {

namespace services {
    const char* Button   = "de4c3b20-26ea-11e9-ab14-d663bd873d93";
    const char* NineAxis = "c87ace96-3523-11e9-b210-d663bd873d93";
}

namespace characteristics {
    const char* ButtonOperation = "de4c4016-26ea-11e9-ab14-d663bd873d93";
    const char* NineAxisData    = "c87ad148-3523-11e9-b210-d663bd873d93";
}

}
}
#endif // __BLE_PROFILES_H