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

# Reverse engineering BLE
See the [WIKI](https://github.com/AxelFougues/Walker73/wiki)
