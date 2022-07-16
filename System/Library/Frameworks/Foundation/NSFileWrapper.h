//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface NSFileWrapper : NSObject <NSSecureCoding>
{
    NSDictionary *_fileAttributes;	// 8 = 0x8
    NSString *_preferredFileName;	// 16 = 0x10
    NSString *_fileName;	// 24 = 0x18
    id _contents;	// 32 = 0x20
    id _icon;	// 40 = 0x28
    id _moreVars;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b404b
+ (id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x00000000001b075d
+ (_Bool)_canSafelyMapFilesAtPath:(id)arg1;	// IMP=0x00000000001b0448
+ (_Bool)_forPath:(id)arg1 getItemKind:(id *)arg2 modificationDate:(id *)arg3;	// IMP=0x00000000001aff90
+ (void)initialize;	// IMP=0x00000000001aedee
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;	// IMP=0x00000000001b45f5
+ (_Bool)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id *)arg6;	// IMP=0x00000000001b455c
+ (_Bool)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001b4480
+ (void)_writeAttributes:(id)arg1 toURL:(id)arg2;	// IMP=0x00000000001b42c2
+ (id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b426b
+ (id)_pathForURL:(id)arg1 reading:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000001b414b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b40c6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b4053
@property(readonly, copy) NSURL *symbolicLinkDestinationURL;
@property(readonly, copy) NSData *regularFileContents;
- (id)keyForFileWrapper:(id)arg1;	// IMP=0x00000000001b3c5d
@property(readonly, copy) NSDictionary *fileWrappers;
- (void)removeFileWrapper:(id)arg1;	// IMP=0x00000000001b39b3
- (void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2;	// IMP=0x00000000001b396f
- (id)_uniqueFileNameOfChild:(id)arg1;	// IMP=0x00000000001b3845
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;	// IMP=0x00000000001b3756
- (id)addFileWrapper:(id)arg1;	// IMP=0x00000000001b3500
- (void)_resetFileModificationDate;	// IMP=0x00000000001b3475
- (id)_addChild:(id)arg1 forUniqueFileName:(id)arg2;	// IMP=0x00000000001b3362
- (void)_initDirectoryContents;	// IMP=0x00000000001b3274
- (void)_removeParent:(id)arg1;	// IMP=0x00000000001b322b
- (void)_addParent:(id)arg1;	// IMP=0x00000000001b31ba
@property(readonly, copy) NSData *serializedRepresentation;
- (id)_newImpl;	// IMP=0x00000000001b2c1f
- (id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5;	// IMP=0x00000000001b24be
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001b21a4
- (void)_updateDescendantFileNames;	// IMP=0x00000000001b2014
- (id)_attributesToWrite;	// IMP=0x00000000001b1cc6
- (_Bool)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(_Bool)arg4 didHardLinking:(_Bool *)arg5 error:(id *)arg6;	// IMP=0x00000000001b1549
- (_Bool)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id *)arg2;	// IMP=0x00000000001b14e2
- (_Bool)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001b1266
- (_Bool)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000001b0e87
- (_Bool)matchesContentsOfURL:(id)arg1;	// IMP=0x00000000001b01a0
- (_Bool)_matchesItemKind:(id)arg1 modificationDate:(id)arg2;	// IMP=0x00000000001b005a
@property(copy) NSDictionary *fileAttributes;
@property(copy) NSString *filename;
@property(copy) NSString *preferredFilename;
- (void)_observePreferredFileNameOfChild:(id)arg1;	// IMP=0x00000000001afaee
@property(readonly, getter=isSymbolicLink) _Bool symbolicLink;
@property(readonly, getter=isRegularFile) _Bool regularFile;
@property(readonly, getter=isDirectory) _Bool directory;
- (void)dealloc;	// IMP=0x00000000001af87a
- (id)initWithSerializedRepresentation:(id)arg1;	// IMP=0x00000000001af529
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;	// IMP=0x00000000001af466
- (id)initRegularFileWithContents:(id)arg1;	// IMP=0x00000000001af359
- (id)initDirectoryWithFileWrappers:(id)arg1;	// IMP=0x00000000001af112
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001aeead
- (id)_init;	// IMP=0x00000000001aee3e
- (id)init;	// IMP=0x00000000001aee2a
- (id)_fullDescription:(_Bool)arg1;	// IMP=0x00000000001b467f

@end
