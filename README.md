# Walker73
Walker73 is an alternative open-source Bluetooth dashboard for e-bikes/scooters equipped with a Comodule Diamond Display :
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

# Reverse engineering 
## Services
| Name                                   | UUID                                 | Description                            |
| :------------------------------------- | :----------------------------------- | :------------------------------------- |
| UUID_METRICS_SERVICE                   | 00001554-1212-efde-1523-785feabcd123 |                                        |
| UUID_CHARACTERISTIC_REGISTER_ID        | 00001564-1212-efde-1523-785feabcd123 | Register a notification id for reading |
| UUID_CHARACTERISTIC_REGISTER           | 0000155f-1212-efde-1523-785feabcd123 | Read last registered notification      |
| UUID_CHARACTERISTIC_REGISTER_NOTIFIER  | 0000155e-1212-efde-1523-785feabcd123 | Subscribe to all notifications         |

## Notifications

|  Notification |  ID 0 |  ID 1 | Data 2 | Data 3 | Data 4 | Data 5 | Data 6 | Data 7 | Data 8 | Data 9 |
| :------------ | :---: | :---: | :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: |
| WHEEL         |  0x02 | 0x01  | WSPEED | WSPEED | 0x00   | 0x00   | 0x00   | 0x00   | 0x00   | 0x00   |
| TOTAL         |  0x02 | 0x02  | 0x00   | Unknown| 0x00   | 0x00   | TOTAL  | TOTAL  | 0x00   | 0x00   |
| PEDAL         |  0x02 | 0x02  | PSPEED | PSPEED | 0x00   | 0x00   | 0x00   | 0x00   | Unknown| 0x00   |
| SETTINGS      |  0x03 | 0x00  | ASSIST | WALK   | LIGHT  | MODE   | 0x00   | 0x00   | 0x00   | 0x00   |
| POWER         |  0x04 | 0x01  | Unknown| 0x00   | 0x00   | 0x00   | Unknown| 0x00   | 0x00   | 0x00   |

- WSPEED : UInt16, wheel speed (km/h) ~= ```0.009876614 * WSPEED + 1.228228```
- PSPEED : UInt16, pedal RPM ~=  ```0.01926005 * PSPEED + 1.051926```
- TOTAL : UInt16, total (km) ~= ```TOTAL / 10```
- ASSIST : pedal assist level (0-4)
- WALK : walk (push along) assist (0/90?)
- LIGHT : headlight on (1/0)
- MODE : riding power mode (0-3)

The linear approximations to turn WSPEED and PSPEED into real units do not pass through 0 which is not ideal.
Instead here are some slightly more costly power approximations that do zero out:
- wheel speed (km/h) ~= ```0.01963741 * WSPEED ^ 0.9211116f```
- pedal RPM ~=  ```0.2189381 * PSPEED ^ 0.02422947f```
