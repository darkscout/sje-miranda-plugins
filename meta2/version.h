// Set the version number here - it will affect the version resource and the version field of the pluginInfo structure
// (Be careful that you don't have the resource file open when you change this and rebuild, otherwise the changes may not 
// take effect within the version resource)

#define __MAJOR_VERSION				0
#define __MINOR_VERSION				0
#define __RELEASE_NUM				0
#define __BUILD_NUM					17

#define __FILEVERSION_STRING        __MAJOR_VERSION,__MINOR_VERSION,__RELEASE_NUM,__BUILD_NUM
#define __FILEVERSION_STRING_DOTS	__MAJOR_VERSION.__MINOR_VERSION.__RELEASE_NUM.__BUILD_NUM
#define __STRINGIFY(x)				#x
#define __VERSION_STRING			__STRINGIFY(__FILEVERSION_STRING_DOTS)

#ifdef _UNICODE
#define __PLUGIN_NAME				"MetaContacts mk2 (Unicode)"
#else
#define __PLUGIN_NAME				"MetaContacts mk2"
#endif
#define __FILENAME					"meta2.dll"

#define __DESC						"Merges multiple contacts into one"
#define __AUTHOR					"Scott Ellis"
#define __AUTHOREMAIL				"mail@scottellis.com.au"
#define __AUTHORWEB					"http://www.scottellis.com.au"
#define __COPYRIGHT					"� 2007 Scott Ellis"
