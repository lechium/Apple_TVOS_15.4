//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface FSNode : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_url;	// 8 = 0x8
    unsigned long long _cacheExpiration;	// 16 = 0x10
    unsigned int _isDirectory:2;	// 24 = 0x18
    unsigned int _hasReferringAliasNode:1;	// 24 = 0x18
    unsigned int _canUseFileCache:1;	// 24 = 0x18
    unsigned int _isInitialized:1;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e9bd
+ (id)_resolvedNodeFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000001027a
+ (id)_resolvedURLFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000010113
+ (id)systemDataVolumeNode;	// IMP=0x000000000001128c
+ (id)rootVolumeNode;	// IMP=0x00000000000111be
+ (_Bool)canReadMetadataOfURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x00000000000126c4
+ (_Bool)canWriteURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x00000000000126ab
+ (_Bool)canReadURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x0000000000012692
+ (_Bool)canAccessURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2 operation:(const char *)arg3;	// IMP=0x00000000000123e3
+ (_Bool)getFileSystemRepresentation:(char [1024])arg1 forBookmarkData:(id)arg2;	// IMP=0x0000000000013cf1
+ (_Bool)isBookmarkDataFull:(id)arg1;	// IMP=0x0000000000013c69
+ (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 forBookmarkData:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000013be1
+ (id)nameForBookmarkData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013a57
+ (id)pathForBookmarkData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001383c
+ (unsigned char)compareBookmarkData:(id)arg1 toBookmarkData:(id)arg2;	// IMP=0x00000000000135ec
+ (id)injectSimulatorRootIntoBookmarkData:(id)arg1;	// IMP=0x00000000000131d6
+ (id)removeSimulatorRootFromBookmarkData:(id)arg1;	// IMP=0x0000000000013042
+ (id)simulatorRootPath;	// IMP=0x0000000000012eff
- (void).cxx_destruct;	// IMP=0x000000000000e9c5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e7ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e6e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e4ce
- (id)redactedDescription;	// IMP=0x000000000000e479
- (id)description;	// IMP=0x000000000000e395
- (unsigned long long)hash;	// IMP=0x000000000000e31f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e13b
- (void)prepareForReuse;	// IMP=0x000000000000e074
- (id)initWithURL:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000db35
- (id)initTemporaryNodeOnVolume:(id)arg1 flags:(unsigned int)arg2 fileDescriptor:(int *)arg3 error:(id *)arg4;	// IMP=0x000000000000f08d
- (id)initWithConfigurationString:(int)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000efac
- (id)initWithDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 lastPathComponent:(id)arg3 createIntermediateDirectories:(_Bool)arg4 flags:(unsigned int)arg5 error:(id *)arg6;	// IMP=0x000000000000ecce
- (id)initWithFileSystemRepresentation:(const char *)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000eb50
- (id)initWithPath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000e9d5
- (_Bool)checkResourceIsReachableAndReturnError:(id *)arg1;	// IMP=0x000000000000fcbe
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000fc51
- (_Bool)getTemporaryResourceValue:(id *)arg1 forKey:(id)arg2;	// IMP=0x000000000000fc39
- (void)removeCachedResourceValueForKey:(id)arg1;	// IMP=0x000000000000fbe1
- (_Bool)setResourceValue:(id)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x000000000000fa3c
- (_Bool)getResourceValue:(id *)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x000000000000f6d0
- (void)clearURLPropertyCacheIfStale;	// IMP=0x000000000000f631
@property(readonly, nonatomic) NSURL *URL;
- (id)temporaryDirectoryNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000010544
- (id)resolvedNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000010450
- (void)setReferringAliasNode:(id)arg1;	// IMP=0x00000000000100d4
@property(readonly, nonatomic) FSNode *referringAliasNode;
- (id)diskImageURLWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000010054
- (id)volumeNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x000000000000ffb7
- (id)childNodeWithRelativePath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000fce7
@property(readonly, nonatomic) _Bool hasHiddenExtension;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic, getter=isRegularFile) _Bool regularFile;
@property(readonly, nonatomic) _Bool hasPackageBit;
@property(readonly, nonatomic, getter=isAliasFile) _Bool aliasFile;
@property(readonly, nonatomic, getter=isSymbolicLink) _Bool symbolicLink;
@property(readonly, nonatomic, getter=isResolvable) _Bool resolvable;
@property(readonly, nonatomic, getter=isExecutable) _Bool executable;
@property(readonly, nonatomic, getter=isBusyDirectory) _Bool busyDirectory;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
- (_Bool)getIsDirectory_NoIO:(_Bool *)arg1;	// IMP=0x0000000000010640
- (id)extensionWithError:(id *)arg1;	// IMP=0x0000000000010fc9
- (id)nameWithError:(id *)arg1;	// IMP=0x0000000000010e81
- (id)canonicalPathWithError:(id *)arg1;	// IMP=0x0000000000010e67
- (id)pathWithError:(id *)arg1;	// IMP=0x0000000000010e50
- (_Bool)getFileSystemRepresentation:(char [1024])arg1 error:(id *)arg2;	// IMP=0x0000000000010d9a
- (id)canonical:(_Bool)arg1 pathWithError:(id *)arg2;	// IMP=0x0000000000010bd0
@property(readonly, nonatomic, getter=isOnLocalVolume) _Bool onLocalVolume;
@property(readonly, nonatomic, getter=isOnDiskImage) _Bool onDiskImage;
- (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00000000000113cf
@property(readonly, nonatomic, getter=isMountTrigger) _Bool mountTrigger;
@property(readonly, nonatomic, getter=isVolume) _Bool volume;
- (_Bool)getOwnerUID:(unsigned int *)arg1 error:(id *)arg2;	// IMP=0x0000000000011619
- (_Bool)getFileIdentifier:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000011594
- (_Bool)getInodeNumber:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x000000000001150f
- (_Bool)getDeviceNumber:(int *)arg1 error:(id *)arg2;	// IMP=0x000000000001148a
- (id)bundleIdentifierWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x0000000000011930
- (id)bundleIdentifierWithError:(id *)arg1;	// IMP=0x0000000000011919
- (id)bundleInfoDictionaryWithError:(id *)arg1;	// IMP=0x00000000000117d4
- (struct __CFBundle *)copyCFBundleWithError:(id *)arg1;	// IMP=0x000000000001169e
- (_Bool)getWriterBundleIdentifier:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000001209e
- (_Bool)getHFSType:(unsigned int *)arg1 creator:(unsigned int *)arg2 error:(id *)arg3;	// IMP=0x0000000000011d98
- (_Bool)getLength:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000011d13
- (_Bool)getContentModificationDate:(double *)arg1 error:(id *)arg2;	// IMP=0x0000000000011cff
- (_Bool)getCreationDate:(double *)arg1 error:(id *)arg2;	// IMP=0x0000000000011aa1
- (_Bool)setFinderInfo:(const CDUnion_739f5cf2 *)arg1 error:(id *)arg2;	// IMP=0x0000000000012245
- (_Bool)getFinderInfo:(CDUnion_739f5cf2 *)arg1 error:(id *)arg2;	// IMP=0x00000000000120ed
- (_Bool)canReadMetadataFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x000000000001261b
- (_Bool)canWriteFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x00000000000125a4
- (_Bool)canReadFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x000000000001252d
- (_Bool)setExtendedAttribute:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;	// IMP=0x0000000000012c20
- (id)extendedAttributeWithName:(id)arg1 options:(int)arg2 error:(id *)arg3;	// IMP=0x0000000000012763
- (id)initByResolvingBookmarkData:(id)arg1 relativeToNode:(id)arg2 bookmarkDataIsStale:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000000001380f
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToNode:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x000000000001360a
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 relativeToNode:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000013358
- (id)bookmarkDataRelativeToNode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001333b

@end

