//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject
{
    SSXPCConnection *_connection;	// 8 = 0x8
    long long _manifestType;	// 16 = 0x10
}

- (void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d117a
- (void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d110e
- (void)removeItemWithAssetPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d105b
- (void)rebuildManifestWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d0fa8
@property(readonly) long long manifestType;
- (void)getPathsForFilesWithClass:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d0ca4
- (void)dealloc;	// IMP=0x00000000000d0c69
- (id)initWithManifestType:(long long)arg1;	// IMP=0x00000000000d0bf8
- (id)init;	// IMP=0x00000000000d0be4

@end

