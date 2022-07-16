//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface DEDAttachmentHandler : NSObject
{
    _Bool _compressOnAttach;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b71d
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property _Bool compressOnAttach; // @synthesize compressOnAttach=_compressOnAttach;
- (id)directoryForBugSessionWithIdentifier:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3;	// IMP=0x000000000000b6ce
- (id)directoryForBugSessionWithIdentifier:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3 createIfNeeded:(_Bool)arg4;	// IMP=0x000000000000b310
- (id)directoryForBugSessionWithIdentifier:(id)arg1 rootDirectory:(id)arg2 createIfNeeded:(_Bool)arg3;	// IMP=0x000000000000afeb
- (id)dedDirectory;	// IMP=0x000000000000af94
- (id)identifierForAdoptingFile:(id)arg1;	// IMP=0x000000000000af33
- (unsigned long long)directorySizeForBugSessionIdentifier:(id)arg1;	// IMP=0x000000000000ae3d
- (void)removeDirectoryForBugSessionIdentifier:(id)arg1;	// IMP=0x000000000000acba
- (id)directoryForBugSessionIdentifier:(id)arg1;	// IMP=0x000000000000abfa
- (id)_createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 withSessionIdentifier:(id)arg3 device:(id)arg4 withRootDir:(id)arg5;	// IMP=0x000000000000a90d
- (id)createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 withSessionIdentifier:(id)arg3 device:(id)arg4;	// IMP=0x000000000000a80a
- (id)collectedGroupsWithSessionIdentifier:(id)arg1 matchingExtensions:(id)arg2;	// IMP=0x0000000000009f14
- (void)removeDEFiles:(id)arg1 withSessionIdentifier:(id)arg2;	// IMP=0x0000000000009da1
- (id)_processAttachments:(id)arg1 withSessionIdentifier:(id)arg2 extension:(id)arg3 rootDir:(id)arg4;	// IMP=0x00000000000098ae
- (id)processAttachments:(id)arg1 withSessionIdentifier:(id)arg2 extension:(id)arg3;	// IMP=0x00000000000097c6
- (id)init;	// IMP=0x0000000000009737

@end
