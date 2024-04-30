# 2023-2024 TCNJ Senior Project: Bluetooth-Wireless-Audio-Relay
### Kevin Hofmann, Dennis Donnelly, Michael DeGeorge, and Jack McGinley

## Our Mission
Our mission is to create a wireless bluetooth audio relay that will allow users to record some source of audio on a microphone and be able to wirelessly stream that file to our app on an android device that will allow the user to playback their audio recording.

## Current State of the Project
As of the end of our school year, the project is currently in two parts. The audio playback portion and the audio streaming portion. Due to time constraints and a change in our projects direction to be more tutorial focused, these two portions were not able to be combined into one, leaving room for future groups to use our foundation and included tutorial (seen below) to make better use of their time, being able to skip the early troubleshooting and error fixing.
### Audio Playback
The audio playback folder consists of all files needed in order to run the code to allow the recording of audio via the device's microphone. The user will then be able to playback the audio recorded during that time from start to finish until a new audio recording is recorded and stopped overriding the old recording. This portion of the code was made using Java for the backend and Kotlin using Jetpack Compose for the front end user interface.
### Audio Streaming
The audio streaming folder consists of all files needed in order to run the code to allow the streaming of audio via the device's microphone directly to an output device that is connected via Bluetooth. The user will be able to set the phone or device running the application anywhere they would like to hear live audio from and have that audio be live streamed directly into the output device. This portion of the code was made using Java for the backend and Kotlin using Jetpack Compose for the front end user interface.
#### Note that there is unused and commented out code within the streaming audio code from the audio playback code (specifically any code that is titled audio player or has mention of audio player). This is there in hopes that future groups will be able to combine the two projects into one

## Future Developments
A major focus of this project was to act as the foundation for future projects. Using our tutorial, we wanted to help future groups at The College of New Jersey skip the tedium and frustration of starting a new project. Using this as a building block, we hope our tutorial and code can be used in future projects in order to develop use cases we had in mind from complex projects like creating a hearing aid that will be able to playback X amount of seconds of a conversation to help those that are hard of hearing to simpler projects like using it as a baby monitor where you could set up the device in a room and hear what is going on while being in another.

## How to Import from GitHub
1. Clone the GitHub Repository:
   - Open Android Studio.
   - Click on "Get from Version Control" or go to `File > New > Project from Version Control`.
   - Sign into GitHub to select the repository you wish to clone.
   - Note that you must have git installed on your device.
   - Click "Clone" and wait for the project to be cloned.

2. Open the Cloned Project:
   - Android Studio will open the cloned project automatically.
   - If the project doesn't open automatically, you can open it manually by selecting `File > Open` and selecting the project directory.

3. Configure the Project:
   - Android Studio may prompt you to configure the project, such as selecting the SDK version and other project-specific settings. Follow the prompts to configure the project.

4. Build and Run the Project:
   - Once the project is imported, you can build and run it on an emulator or a physical device by clicking the "Run" button in Android Studio.

5. Sync Gradle Files (if needed):
   - If the project uses Gradle, Android Studio may prompt you to sync the Gradle files. Click "Sync Now" to sync the Gradle files and update the project dependencies.

## Project Tutorials
Software Tutorial: https://rb.gy/rmf3bg

Hardware Tutorial: https://rb.gy/7zgii6
