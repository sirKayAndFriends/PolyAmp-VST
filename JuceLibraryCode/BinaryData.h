/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   QuicksandBold_otf;
    const int            QuicksandBold_otfSize = 29324;

    extern const char*   QuicksandBoldItalic_otf;
    const int            QuicksandBoldItalic_otfSize = 29368;

    extern const char*   QuicksandItalic_otf;
    const int            QuicksandItalic_otfSize = 30404;

    extern const char*   QuicksandLight_otf;
    const int            QuicksandLight_otfSize = 25852;

    extern const char*   QuicksandLightItalic_otf;
    const int            QuicksandLightItalic_otfSize = 27908;

    extern const char*   QuicksandRegular_otf;
    const int            QuicksandRegular_otfSize = 28196;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 6;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
