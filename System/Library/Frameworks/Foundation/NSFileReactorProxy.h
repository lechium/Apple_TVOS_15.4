//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileAccessNode, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject
{
    NSXPCConnection *_client;	// 8 = 0x8
    id _reactorID;	// 16 = 0x10
    NSFileAccessNode *_itemLocation;	// 24 = 0x18
    unsigned int _effectiveUserIdentifier;	// 32 = 0x20
}

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001fde3a
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fdf0d
- (id)_clientProxy;	// IMP=0x00000000001fdf05
- (_Bool)allowedForURL:(id)arg1;	// IMP=0x00000000001fde32
- (id)description;	// IMP=0x00000000001fde19
- (id)descriptionWithIndenting:(id)arg1;	// IMP=0x00000000001fdc9f
- (void)invalidate;	// IMP=0x00000000001fdc99
- (void)forwardUsingProxy:(id)arg1;	// IMP=0x00000000001fdc93
- (id)itemLocation;	// IMP=0x00000000001fdc7c
- (void)setItemLocation:(id)arg1;	// IMP=0x00000000001fdc76
@property unsigned int effectiveUserIdentifier;
- (id)reactorID;	// IMP=0x00000000001fdc4d
- (id)client;	// IMP=0x00000000001fdc36
- (void)dealloc;	// IMP=0x00000000001fdbc9
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;	// IMP=0x00000000001fdb3d

@end

