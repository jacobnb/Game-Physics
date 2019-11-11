#ifndef LIB_H
#define LIB_H

#ifdef MYUNITYPLUGIN_EXPORT
	#define MYUNITYPLUGIN_SYMBOL __declspec(dllexport)
	

#else //!MYUNITYPLUGIN_EXPORT
	#ifdef MYUNITYPLUGIN_IMPORT
		#define MYUNITYPLUGIN_SYMBOL __declspec(dllimport)
	#else // !MYUNITYPLUGIN_IMPORT
		#define MYUNITYPLUGIN_IMPORT
	#endif // MYUNITYPLUGIN_IMPORT
#endif // MYUNITYPLUGIN_EXPORT

#endif // LIB_H