/*
 * Tic-tac-toe
 * MIT Licence, Copyright 2017 Chris Kempson (chriskempson.com)
 */

#pragma once
#include <string>
#include <vector>
#include "Image_resource.h"
#include "Sound_resource.h"
#include <string>

//had to make the variables of extern type in order to have them be global variables and Used
//in multiple .cpp files through the use of header files
extern std::string playerOneName;
extern std::string playerTwoName;


/**
 * Manages game resource files such as images and sounds
 */
class Resource_manager
{
public:
	/**
	 * Returns a loaded image
	 *
	 * @param file Resource file to return
	 * @return Image resource
	 */
	static Image_resource* get_image(char* file);

	/**
	 * Returns a loaded sound
	 *
	 * @param file Resource file to return
	 * @return Sound resource
	 */
	static Sound_resource* get_sound(char* file);

	/**
	 * Loads an image and stores it
	 *
	 * @param file Resource file to load
	 * @return Image resource
	 */
	static Image_resource* load_image(char* file);

	/**
	 * Loads a sound and stores it
	 *
	 * @param file Resource file to load
	 * @return Sound resource
	 */
	static Sound_resource* load_sound(char* file);

	/**
	 * Deletes a image
	 *
	 * @param file Resource file to unload
	 */
	static void unload_image(char* file);

	/**
	 * Deletes a sound
	 *
	 * @param file Resource file to unload
	 */
	static void unload_sound(char* file);

	static int get_num(int num);

	static int getinput;

private:
	/// Stores pointers to instances of an Image_resource
	static std::vector<std::pair<std::string, Image_resource*>> images;

	/// Stores pointers to instances of an Sound_resource
	static std::vector<std::pair<std::string, Sound_resource*>> sounds;
};
