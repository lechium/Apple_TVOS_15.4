//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLDebugInstrumentationData, MTLLoadedFile, NSArray, NSData, NSString;
@protocol MTLDevice, OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface MTLDynamicLibraryContainer : NSObject
{
    MTLLoadedFile *_fileMapping;	// 8 = 0x8
    id <MTLDevice> _device;	// 16 = 0x10
    NSObject<OS_dispatch_data> *_vendorData;	// 24 = 0x18
    NSArray *_exportedFunctions;	// 32 = 0x20
    NSArray *_exportedVariables;	// 40 = 0x28
    NSArray *_importedSymbols;	// 48 = 0x30
    NSArray *_importedLibraries;	// 56 = 0x38
    NSString *_installName;	// 64 = 0x40
    NSData *_airData;	// 72 = 0x48
    unsigned long long _airOffset;	// 80 = 0x50
    unsigned long long _airSize;	// 88 = 0x58
    int _airVersion;	// 96 = 0x60
    CDStruct_41a22ec7 _libraryUUID;	// 100 = 0x64
    MTLDebugInstrumentationData *_debugInstrumentationData;	// 136 = 0x88
}

- (_Bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000288ac
- (id)airData;	// IMP=0x000000000002887e
- (oneway void)release;	// IMP=0x00000000000287cc
- (void)dealloc;	// IMP=0x0000000000028721
- (id)initWithURL:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000027f01
- (id)initWithLibrary:(struct MTLLibraryData *)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000027ce6

@end

