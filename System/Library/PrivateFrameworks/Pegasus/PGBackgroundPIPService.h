//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pegasus/BSServiceConnectionListenerDelegate-Protocol.h>
#import <Pegasus/_PGBackgroundPIPServiceConnectionTargetDelegate-Protocol.h>

@class BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue, PGBackgroundPIPServiceDelegate;

__attribute__((visibility("hidden")))
@interface PGBackgroundPIPService : NSObject <BSServiceConnectionListenerDelegate, _PGBackgroundPIPServiceConnectionTargetDelegate>
{
    BSServiceConnectionListener *_connectionListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_mutableIdentifiersForAuthorizedActivitySessions;	// 24 = 0x18
    NSMutableSet *_lock_targets;	// 32 = 0x20
    NSMutableDictionary *_lock_targetsByActivitySessionIdentifier;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 48 = 0x30
    id <PGBackgroundPIPServiceDelegate> _delegate;	// 56 = 0x38
    NSSet *_identifiersForAuthorizedActivitySessions;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002f938
@property(readonly, copy, nonatomic) NSSet *identifiersForAuthorizedActivitySessions; // @synthesize identifiersForAuthorizedActivitySessions=_identifiersForAuthorizedActivitySessions;
@property(nonatomic) __weak id <PGBackgroundPIPServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_targetForIdentifier:(id)arg1;	// IMP=0x000000000002f8a0
- (void)revokeAuthorizationActivitySessionWithIdentifier:(id)arg1;	// IMP=0x000000000002f859
- (_Bool)hasAcquiredAuthorizationForActivitySessionWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;	// IMP=0x000000000002f746
- (void)pipDidStopForRemoteObject:(id)arg1;	// IMP=0x000000000002f577
- (void)pipDidStartForRemoteObject:(id)arg1;	// IMP=0x000000000002f457
- (void)backgroundPIPTargetDidInvalidate:(id)arg1;	// IMP=0x000000000002f445
- (void)backgroundPIPTargetRequestsAuthorization:(id)arg1;	// IMP=0x000000000002ef75
- (void)_handleInvalidatedTarget:(id)arg1;	// IMP=0x000000000002ebba
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000002e555
- (void)dealloc;	// IMP=0x000000000002e513
- (void)startListener;	// IMP=0x000000000002e4fd
- (id)init;	// IMP=0x000000000002e303

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

