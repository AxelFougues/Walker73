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

# In-App Settings

- **WHEEL DIAMETER**, in meters, used to calculate wheel RPM, default is 0.57
- **SERIES CELL COUNT**, the number of series li-ion cells in the battery, used for voltage level calculation, default is 13S (48V)
- **MIN CHARGE AMP**, in amps, while riding the charge current metric will sometimes go above 0, this threshold is the minimum value for W73 to consider the bike as charging (purely visual), default is 2A
- **BASE MAX RANGE**, in km, the stock range of the bike, used as a reference to calculate battery level and actual range from retrieved range metric, default is 60km
- **REAL MAX RANGE**, in km, the actual range of the bike, used to compensate the range metric for saggy battery, riding conditions, dual battery setups, or custom batteries, default is 60km

- **AUTO CONNECT**, if this device is detected while scanning mode it will be automatically selected, this is disabled by SWAP BIKES
- **AUTO APPLY**, if on: when connecting the last settings used in the app will apply to the bike, if off: the bike's settings will be retrieved to update the app
- **USE DEVICE THEME**, if on: when the app starts it will use the device's theme setting, if off: the app will use the last used theme
- **ADVANCED**, stats for nerds

# Building
The project is currently on Unity 2021.3.4f1 and is ready to build with the target platform Android.
- Project settings : 
- Minimum API Level - 28
- Target API Level - 33
- Scripting Backend - IL2CPP
- ARMv7 + ARM64
- Uses custom Main Manifest

# Reverse engineering BLE
See the [WIKI](https://github.com/AxelFougues/Walker73/wiki)
