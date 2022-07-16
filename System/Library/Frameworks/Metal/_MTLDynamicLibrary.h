//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLDynamicLibrarySPI-Protocol.h>

@class MTLDebugInstrumentationData, MTLDynamicLibraryContainer, NSArray, NSObject, NSString;
@protocol MTLDevice, OS_dispatch_data;

@interface _MTLDynamicLibrary <MTLDynamicLibrarySPI>
{
    NSString *_libraryPath;	// 24 = 0x18
    MTLDynamicLibraryContainer *_container;	// 32 = 0x20
    NSArray *_relocations;	// 40 = 0x28
    _Bool _shaderValidationEnabled;	// 48 = 0x30
}

@property(readonly, nonatomic) _Bool shaderValidationEnabled; // @synthesize shaderValidationEnabled=_shaderValidationEnabled;
@property(copy, nonatomic) NSArray *relocations; // @synthesize relocations=_relocations;
@property(readonly) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
- (_Bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000294a7
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029482
- (id)container;	// IMP=0x0000000000029471
- (id)airData;	// IMP=0x0000000000029454
@property(readonly) const CDStruct_41a22ec7 *libraryUUID;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000292b5
- (void)dealloc;	// IMP=0x000000000002924f
- (id)initWithURL:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000029145
- (id)initWithURL:(id)arg1 device:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002912d
- (id)initWithLibrary:(id)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002903c
@property(retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) NSString *installName;
@property(readonly) NSArray *importedLibraries;
@property(readonly) NSArray *importedSymbols;
@property(readonly) NSArray *exportedVariables;
@property(readonly) NSArray *exportedFunctions;
@property(readonly) NSObject<OS_dispatch_data> *binaryData;
@property(readonly) id <MTLDevice> device;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

