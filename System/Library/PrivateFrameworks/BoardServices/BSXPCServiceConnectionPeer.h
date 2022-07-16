//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSDescriptionProviding-Protocol.h>

@class BSProcessHandle, NSMutableDictionary, NSMutableSet, NSString;

@interface BSXPCServiceConnectionPeer : NSObject <BSDescriptionProviding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_lock_entitlements;	// 16 = 0x10
    NSMutableSet *_lock_connections;	// 24 = 0x18
    unsigned long long _lock_lastConnectedGenerationCount;	// 32 = 0x20
    BSProcessHandle *_processHandle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000010b11
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000010aef
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000010a8b
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000108bf
- (id)succinctDescription;	// IMP=0x000000000001085b
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000000ffc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
