![Walker 73](https://github.com/AxelFougues/Walker73/blob/main/GithubGraphic.png?raw=true)
Walker73 is an alternative open-source Bluetooth dashboard for e-bikes/scooters equipped with a Comodule Diamond Display.
- Fast auto connects to your bike's Bluetooth
- Auto applies previous settings, bypass EU mode reset
- No need for an internet connection or an account, fully privacy-friendly
- Speed, RPM, Odometer, and more just like the official app
- Light and Dark high-contrast themes for all situations
- Ergonomic UI for quick mid-ride adjustments 
- Modifiable base values for modders and hackers
- Free, light, open-source, and no ads

<p align="center"><a href='https://play.google.com/store/apps/details?id=com.AzApps.Walker73&hl=en&gl=US&pcampaignid=pcampaignidMKT-Other-global-all-co-prtnr-py-PartBadge-Mar2515-1'><img alt='Get it on Google Play' src='https://play.google.com/intl/en_us/badges/static/images/badges/en_badge_web_generic.png'/></a></p>

[ Currently missing battery and power stats. ]

Compatible with electric bike brands using the Comodule diamond display:
- Super73
- MATE.
- Swapfiets
- Cake
- Ego movement
- Äike
- Donkey Republic
- Fazua
- PonBike
- Taito
- Hagen
- Movelo

It can apply preset settings immediately when connecting to bypass some auto-resetting settings on EU vehicles.
It does not require Internet or any account and doesn't collect any data. It is built on Unity for convenience but is kept light and fast.
This app is not tested with every vehicle, use at your own risk and create tikets [HERE](https://github.com/AxelFougues/Walker73/issues) if you encounter issues or want to suggest features.

# Building
The project is currently on Unity 2021.3.4f1 and is ready to build with the target platform Android.
- Project settings : 
- Minimum API Level - 28
- Target API Level - 33
- Scripting Backend - IL2CPP
- ARMv7 + ARM64
- Uses custom Main Manifest

# Reverse engineering bluetooth coms
## Services
| Name                                           | UUID                                 | Description                                          | Read  | Write | Notify | Indicate |
| :--------------------------------------------- | :----------------------------------- | :--------------------------------------------------- | :---: | :---: | :----: | :------: |
| **UUID_METRICS_SERVICE**                       | 00001554-1212-efde-1523-785feabcd123 |                                                      |       |       |        |          |
|                                                |                                      |                                                      |       |       |        |          |
| UUID_CHARACTERISTIC_REGISTER_ID                | 00001564-1212-efde-1523-785feabcd123 | Register a notification id for reading               |   Y   |   Y   |    N   |    N     |
| UUID_CHARACTERISTIC_REGISTER                   | 0000155f-1212-efde-1523-785feabcd123 | Read last registered notification                    |   Y   |   Y   |    N   |    N     |
| UUID_CHARACTERISTIC_REGISTER_NOTIFIER          | 0000155e-1212-efde-1523-785feabcd123 | Subscribe to all notifications                       |   Y   |   N   |    Y   |    N     |
|                                                |                                      |                                                      |       |       |        |          |
| **UUID_GENERIC_ACCESS_SERVICE**                | 00001800-0000-1000-8000-00805f9b34fb |                                                      |       |       |        |          |
|                                                |                                      |                                                      |       |       |        |          |
| UUID_GENERIC_ACCESS_NAME_CHARACTERISTIC        | 00002a00-0000-1000-8000-00805f9b34fb | Gets device name [string]                            |   Y   |   N   |    N   |    N     |
| UUID_GENERIC_ACCESS_APPEARANCE_CHARACTERISTIC  | 00002a01-0000-1000-8000-00805f9b34fb | A generic category: "Cycling"                        |   Y   |   N   |    N   |    N     |
| UUID_GENERIC_ACCESS_PPCP_CHARACTERISTIC        | 00002a04-0000-1000-8000-00805f9b34fb | Peripheral Preferred Connection Parameters           |   Y   |   N   |    N   |    N     |
| UUID_GENERIC_ACCESS_CAR_CHARACTERISTIC         | 00002aa6-0000-1000-8000-00805f9b34fb | Central Address Resolution: "Supported"              |   Y   |   N   |    N   |    N     |
|                                                |                                      |                                                      |       |       |        |          |
| **UUID_GENERIC_ATTRIBUTE_SERVICE**             | 00001801-0000-1000-8000-00805f9b34fb |                                                      |       |       |        |          |
|                                                |                                      |                                                      |       |       |        |          |
| UUID_GENERIC_ACCESS_CAR_CHARACTERISTIC         | 00002a05-0000-1000-8000-00805f9b34fb | Service Changed                                      |   N   |   N   |    N   |    Y     |
|                                                |                                      |                                                      |       |       |        |          |
| **UUID_DEVICE_INFO_SERVICE**                   | 0000180a-0000-1000-8000-00805f9b34fb |                                                      |       |       |        |          |
|                                                |                                      |                                                      |       |       |        |          |
| UUID_DEVICE_INFO_MANUFACTURER_CHARACTERISTIC   | 00002a29-0000-1000-8000-00805f9b34fb | Gets device manufacturer name [string]               |   Y   |   N   |    N   |    N     |
| UUID_DEVICE_INFO_HARDWARE_CHARACTERISTIC       | 00002a27-0000-1000-8000-00805f9b34fb | Hardware Revision [string]                           |   Y   |   N   |    N   |    N     |
| UUID_DEVICE_INFO_FIRMWARE_CHARACTERISTIC       | 00002a26-0000-1000-8000-00805f9b34fb | Firmware Revision [string]                           |   Y   |   N   |    N   |    N     |
| UUID_DEVICE_INFO_SOFTWARE_CHARACTERISTIC       | 00002a28-0000-1000-8000-00805f9b34fb | Software Revision [string]                           |   Y   |   N   |    N   |    N     |
|                                                |                                      |                                                      |       |       |        |          |
| **UUID_SECURITY_SERVICE**                      | 00002554-1212-efde-1523-785feabcd123 |                                                      |       |       |        |          |
|                                                |                                      |                                                      |       |       |        |          |
| UUID_SECURITY_PRIVATE_KEY_CHARACTERISTIC       | 00002555-1212-efde-1523-785feabcd123 | Private key                                          |   N   |   Y   |    N   |    N     |
| UUID_SECURITY_PUBLIC_KEY_CHARACTERISTIC        | 00002556-1212-efde-1523-785feabcd123 | Public key [20 bytes]                                |   Y   |   N   |    N   |    N     |
| UUID_SECURITY_HASH_CHARACTERISTIC              | 00002557-1212-efde-1523-785feabcd123 | Security hash                                        |   N   |   Y   |    N   |    N     |
| UUID_SECURITY_AUTH_CHARACTERISTIC              | 00002558-1212-efde-1523-785feabcd123 | Auth                                                 |   Y   |   N   |    N   |    N     |
|                                                |                                      |                                                      |       |       |        |          |
| **UUID_SECURE_DFU_SERVICE**                    | 0000fe59-0000-1000-8000-00805f9b34fb | (1)                                                  |       |       |        |          |
|                                                |                                      |                                                      |       |       |        |          |
| UUID_SECURE_DFU_BUTTONLESS_DFU_CHARACTERISTIC  | 8ec90003-f315-4f60-9fb8-838830daea50 | Buttonless DFU (2)                                   |   N   |   Y   |    N   |    Y     |
|                                                |                                      |                                                      |       |       |        |          |
| **UUID_UNKNOWN_SERVICE**                       | 00001580-0000-1000-8000-00805f9b34fb |                                                      |       |       |        |          |
|                                                |                                      |                                                      |       |       |        |          |
| UUID_UNKNOWN_CHARACTERISTIC                    | 00001581-0000-1000-8000-00805f9b34fb | "client characteristic configuration"?               |   N   |   N   |    Y   |    N     |

> (1) Custom UUID of Nordic Semiconductor ASA  "Secure DFU service"

> (2) DFU Control Point characteristic or Buttonless DFU, see: https://nordicsemiconductor.github.io/Nordic-Thingy52-FW/documentation/firmware_architecture.html#arch_battery

## Notifications
Getting settings and bike state from ```UUID_CHARACTERISTIC_REGISTER_NOTIFIER``` subscritpion or writing 2 byte ID at ```UUID_CHARACTERISTIC_REGISTER_ID``` and then reading ```UUID_CHARACTERISTIC_REGISTER```.

|  Notification |  ID 0 |  ID 1 | Data 2     | Data 3     | Data 4     | Data 5     | Data 6     | Data 7     | Data 8    | Data 9    |
| :------------ | :---: | :---: | :--------: | :--------: | :--------: | :--------: | :--------: | :--------: | :-------: | :-------: |
| MOTION        |  0x02 | 0x01  | **WSPEED** | **WSPEED** | 0x00       | 0x00       | 0x00       | 0x00       | 0x00      | 0x00      |
| TOTAL         |  0x02 | 0x02  | 0x00       | Unknown    | 0x00       | 0x00       | **TOTAL**  | **TOTAL**  | 0x00      | 0x00      |
| RIDE          |  0x02 | 0x03  | **CADENCE**| **CADENCE**| Unknown    | Unknown    | Unknown    | 0x00       | **RANGE** | **RANGE** |
| SETTINGS      |  0x03 | 0x00  | **ASSIST** | **WALK**   | **LIGHT**  | **MODE**   | 0x00       | 0x00       | 0x00      | 0x00      |
| POWER         |  0x04 | 0x01  | Unknown    | 0x00       | 0x00       | 0x00       | Unknown    | 0x00       | 0x00      | 0x00      |

- WSPEED : UInt16, wheel speed (km/h) ~= ```WSPEED / 100```
- CADENCE : UInt16, pedal RPM ~=  ```0.2189381 * PSPEED```
- TOTAL : UInt16, total (km) ~= ```TOTAL / 10```
- ASSIST : pedal assist level (0-4)
- WALK : walk (push along) assist (0/90?)
- LIGHT : headlight on (1/0)
- MODE : riding power mode (0-7)
- RANGE : remaining range from battery in km

| MODE  |NAME      |EU/US  | Max assist| Max power| Throttle | Description    |
| :---: | :------: | :---: | :--------:| :------: | :------: | :------------- |
|0      |CLASS1    |US     | 32.2km/h  | 750W     | NO       |                |
|1      |CLASS2    |US     | 32.2km/h  | 750W     | YES      |                |
|2      |CLASS3    |US     | 45km/h    | 750W     | NO       |                |
|3      |OFF_ROAD  |US     | MAX       | MAX      | YES      |                |
|4      |EPAC      |EU     | 25km/h    | 250W     | NO       | EU default     |
|5      |250W      |EU     | 35km/h    | 250W     | NO       |                |
|6      |850W      |EU     | 45km/h    | 850W     | NO       |                |
|7      |OFF_ROAD  |EU     | MAX       | MAX      | YES      |                |
|8+     |-         |-      | 0km/h     | 0W       | NO       |Unimplemented   |

| ASSIST|NAME      |Assist level  | Description    |
| :---: | :------: | :----------: | :------------- |
|0      |PAS0      |0%            |                |
|1      |PAS1      |25%           |                |
|2      |PAS2      |50%           |                |
|3      |PAS3      |75%           |                |
|4+     |PAS4      |100%          |                |
|5+     |-         |0%            |Unimplemented   |

## WRITTING

|  Characteristic                     |  ID 0 |  ID 1 | Data 2     | Data 3     | Data 4     | Data 5     | Data 6     | Data 7     | Data 8    | Data 9    |
| :---------------------------------- | :---: | :---: | :--------: | :--------: | :--------: | :--------: | :--------: | :--------: | :-------: | :-------: |
| UUID_CHARACTERISTIC_REGISTER        |  0x00 | 0xD1  | **LIGHT**  | **ASSIST** | **MODE**   | ignored    | ignored    | ignored    | ignored   | ignored   |

Brutforce writing ```UUID_CHARACTERISTIC_REGISTER``` with IDs [0x00 0x00 to 0x00 0xFF] and data bytes at 0x00 reveals that the following IDs produce a 3-0 notification when written:

0x00 0x13

0x00 0x26

0x00 0x3A

0x00 0x4C

0x00 0x5F

0x00 0x73

0x00 0x86

0x00 0x99

0x00 0xAC

0x00 0xBF

0x00 0xD1 //Known 209

0x00 0xE4

0x00 0xF7
