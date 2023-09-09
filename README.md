# Computer Graphics Final Project - Farm Land

**Course Code:** CSE422  
**Semester:** 11th Semester  

Welcome to the Computer Graphics Final Project - Farm Land! This interactive project, designed as the culmination of the CSE422 course, showcases a captivating digital farm land environment developed using C programming. The project offers users an engaging experience with features such as car movement, dynamic day and night lighting effects, starfall, airplane animation, and immersive sound effects.

## Project Setup

To run this project on your computer, follow these straightforward steps:

1. **Download Project Files**: Download all project files from the [GitHub repository](link-to-your-github-repo).

2. **Create a New Glut Project**: Set up a new GLUT (OpenGL Utility Toolkit) project on your computer. If you're new to GLUT, you can find resources online to help you get started.

3. **Copy Main File**: Copy the `main.cpp` file from the GitHub repository.

4. **Copy Headers and Sound Folder**: Include the header files and the "Sound" folder from the GitHub repository into your newly created project folder.

## Sound Playback Issue

Please be aware that you may encounter sound playback issues due to the use of full file paths in the `PlaySound` function. To resolve this, perform the following steps:

1. **Navigate to the Sound Folder**: Locate the "Sound" folder within the project directory.

2. **Copy Full Path**: Copy the full path to the "Sound" folder.

3. **Update PlaySound Functions**: Open the `main.cpp` file, and whenever you encounter the `PlaySound` function, replace the path in use with the full path you copied in step 2.

## Usage Instructions

Enjoy exploring the Farm Land project with the following interactive features:

- **Car Movement**: Press 't' to activate car movement. Navigate the car around the environment.

- **Traffic Lights**: Control the traffic lights with keyboard shortcuts:
  - 'r' for a red signal
  - 'g' for a green signal

- **Day and Night Views**: Switch between day and night views:
  - 'd' for day view
  - 'n' for night view

- **Car Movement Controls**:
  - 'KEY_UP' to move the car upward
  - 'KEY_DOWN' to move the car downward

- **Main Menu**: Access the main menu by clicking the right mouse button.

## Screenshots

![Farm Land Screenshot 1](images/farm-land-screenshot-1.png)

![Farm Land Screenshot 2](images/farm-land-screenshot-2.png)

## Project Author

- **Name:** Md Tasluf Morshed
- **Contact:** tasluf665@gmail.com

We hope you have a fantastic time interacting with the Computer Graphics Final Project - Farm Land. If you have any questions or encounter issues, please feel free to reach out.

Happy exploring!

**Note:** This project was developed as part of the 11th-semester coursework (CSE422).
