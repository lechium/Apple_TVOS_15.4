//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/NSCopying-Protocol.h>
#import <PhotoFoundation/PFFile-Protocol.h>

@class NSDate, NSString, NSURL;

@interface PFFile : NSObject <PFFile, NSCopying>
{
    NSURL *_url;	// 8 = 0x8
    NSString *_uti;	// 16 = 0x10
    unsigned long long _pathHash;	// 24 = 0x18
    struct stat *_fileInfo;	// 32 = 0x20
    NSString *_cachedPath;	// 40 = 0x28
}

+ (id)createEmptyTempFileInBaseDirectory:(id)arg1 withSubDirectoryNamed:(id)arg2 filenamePrefix:(id)arg3 pathExtension:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000012123
+ (id)createEmptyTempFileInDirectoryNamed:(id)arg1 filenamePrefix:(id)arg2 pathExtension:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001206b
+ (_Bool)createEmptyFileAtURL:(id)arg1;	// IMP=0x0000000000011e5b
+ (id)pathByTidyingExtensionInPath:(id)arg1 withExtension:(id)arg2;	// IMP=0x0000000000011d35
+ (void)reenableOSCachingForFileDescriptor:(int)arg1;	// IMP=0x0000000000011d0b
+ (int)disableOSCachingForURL:(id)arg1;	// IMP=0x0000000000011cac
+ (id)fileWithPath:(id)arg1;	// IMP=0x0000000000011c52
+ (id)fileWithURL:(id)arg1;	// IMP=0x0000000000011bf8
+ (id)assetType:(id)arg1;	// IMP=0x0000000000011be3
+ (long long)sizeOf:(id)arg1 includeSubFolders:(_Bool)arg2;	// IMP=0x0000000000011b48
+ (id)realPathFromFileAlias:(id)arg1;	// IMP=0x00000000000119ec
+ (id)fileAttributesAtPath:(id)arg1 traverseLink:(_Bool)arg2;	// IMP=0x00000000000119d7
+ (id)fileAttributesAtPath:(id)arg1 traverseLink:(_Bool)arg2 fixCreationDate:(_Bool)arg3;	// IMP=0x00000000000117f2
+ (id)uniqueFileSystemNameForName:(id)arg1 inDirectory:(id)arg2;	// IMP=0x0000000000011155
+ (id)resourceIdentifierForURL:(id)arg1;	// IMP=0x00000000000110e4
+ (_Bool)directoryExists:(id)arg1;	// IMP=0x0000000000011094
+ (_Bool)fileExists:(id)arg1;	// IMP=0x0000000000011045
+ (_Bool)pathExists:(id)arg1;	// IMP=0x0000000000011005
- (void).cxx_destruct;	// IMP=0x000000000000f5c8
@property(readonly, nonatomic) unsigned long long pathHash; // @synthesize pathHash=_pathHash;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (id)newFileIOStream;	// IMP=0x000000000000f545
- (id)newFileIStream;	// IMP=0x000000000000f4e0
- (void)setLabelNumber:(id)arg1;	// IMP=0x000000000000f45a
- (id)labelNumber;	// IMP=0x000000000000f3ca
- (id)volume;	// IMP=0x000000000000f259
- (id)directoryEnumerator;	// IMP=0x000000000000f1dc
- (_Bool)isLockedInFinder;	// IMP=0x000000000000f13a
- (id)unlockInFinder;	// IMP=0x000000000000f030
- (id)lockInFinder;	// IMP=0x000000000000ef26
- (id)attributes;	// IMP=0x000000000000eec1
- (id)creationDate;	// IMP=0x000000000000ee7c
- (id)modificationDate;	// IMP=0x000000000000ee37
- (id)extension;	// IMP=0x000000000000edb5
- (id)assetType;	// IMP=0x000000000000ed52
- (long long)folderSize_recursive:(_Bool)arg1;	// IMP=0x000000000000e9cb
- (long long)size;	// IMP=0x000000000000e991
- (unsigned short)posixPermissions;	// IMP=0x000000000000e96e
- (_Bool)pathExists;	// IMP=0x000000000000e8ed
- (_Bool)exists;	// IMP=0x000000000000e8d4
- (_Bool)isXMPType;	// IMP=0x000000000000e85f
- (_Bool)isFileAlias;	// IMP=0x000000000000e7e6
- (_Bool)isInTrash;	// IMP=0x000000000000e769
- (_Bool)tryLock;	// IMP=0x000000000000e761
- (void)unlock;	// IMP=0x000000000000e75b
- (void)lock;	// IMP=0x000000000000e755
@property(readonly) _Bool isDirectory;
@property(readonly) NSString *fileExtension;
@property(readonly) NSDate *fileModificationDate;
@property(readonly) NSDate *fileCreationDate;
@property(readonly) unsigned long long fileSize;
@property(readonly) NSString *fileName;
@property(readonly) NSString *path;
@property(readonly) NSString *UTI;
- (void)logFileAccess;	// IMP=0x000000000000e529
- (_Bool)isFile;	// IMP=0x000000000000e4fc
- (_Bool)isSymLink;	// IMP=0x000000000000e477
- (int)fileType;	// IMP=0x000000000000e405
- (id)name;	// IMP=0x000000000000e3b5
- (id)folderPath;	// IMP=0x000000000000e33e
- (id)fileByResolvingFileAlias;	// IMP=0x000000000000e27e
- (id)newFileByAppendingPathComponent:(id)arg1;	// IMP=0x000000000000e1da
- (id)fileComponent;	// IMP=0x000000000000e166
- (const char *)fileSystemRepresentation;	// IMP=0x000000000000e0f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e089
- (_Bool)isEqualToFile:(id)arg1;	// IMP=0x000000000000dfdb
- (unsigned long long)hash;	// IMP=0x000000000000df80
- (const struct stat *)cachedStat;	// IMP=0x000000000000ded5
- (void)uncacheStat;	// IMP=0x000000000000deaf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000dea4
- (void)dealloc;	// IMP=0x000000000000de65
- (id)initWithPath:(id)arg1;	// IMP=0x000000000000ddaf
- (id)initWithURL:(id)arg1;	// IMP=0x000000000000dd2c

@end

