//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSRemoteAlertHandleClient-Protocol.h>
#import <SpringBoardServices/SBSRemoteAlertHandleServiceClientInterface-Protocol.h>

@class BSServiceConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SBSRemoteAlertHandleXPCClient : NSObject <SBSRemoteAlertHandleServiceClientInterface, SBSRemoteAlertHandleClient>
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;	// 16 = 0x10
    BSServiceConnection *_connection;	// 24 = 0x18
    _Bool _connectionActivated;	// 32 = 0x20
    _Bool _connectionInvalidated;	// 33 = 0x21
    NSMutableDictionary *_handleIDToHandle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000383ce
- (void)_invalidateHandleForHandleID:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000382fc
- (void)_handleError:(id)arg1;	// IMP=0x00000000000380c9
- (id)_connection;	// IMP=0x0000000000037b3c
- (void)invalidateRemoteAlertHandle:(id)arg1;	// IMP=0x0000000000037aa3
- (void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000000379e3
- (id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;	// IMP=0x0000000000037824
- (id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(_Bool)arg2 configurationContext:(id)arg3;	// IMP=0x00000000000373e1
- (oneway void)remoteAlertHandleWithID:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00000000000373c8
- (oneway void)remoteAlertHandleWithIDDidDeactivate:(id)arg1;	// IMP=0x000000000003737d
- (oneway void)remoteAlertHandleWithIDDidActivate:(id)arg1;	// IMP=0x0000000000037332
- (id)init;	// IMP=0x00000000000372ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
