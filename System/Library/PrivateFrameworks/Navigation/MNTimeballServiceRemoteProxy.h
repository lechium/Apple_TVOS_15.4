//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeballServiceProxyDelegate-Protocol.h>
#import <Navigation/MNTimeballServiceProxyInterface-Protocol.h>

@class MNTimeballSubscriberStore, NSString, NSXPCConnection;
@protocol MNTimeballServiceProxyDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeballServiceRemoteProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballServiceProxyDelegate>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    MNTimeballSubscriberStore *_subscriberStore;	// 16 = 0x10
    _Bool _requestLeeching;	// 24 = 0x18
    id <MNTimeballServiceProxyDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009a7a0
@property(nonatomic) id <MNTimeballServiceProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2;	// IMP=0x000000000009a67c
- (void)didReceiveError:(id)arg1 forDestination:(id)arg2;	// IMP=0x000000000009a56c
- (void)completedUpdateForHandlerID:(id)arg1;	// IMP=0x000000000009a479
- (void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;	// IMP=0x000000000009a32e
- (void)unsubscribeFromDestination:(id)arg1;	// IMP=0x000000000009a2ac
- (void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;	// IMP=0x000000000009a1e6
- (void)unsubscribeFromAllDestinations;	// IMP=0x000000000009a1a5
- (void)subscribeToAllDestinations;	// IMP=0x000000000009a164
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4;	// IMP=0x000000000009a00a
- (id)_remoteObjectProxy;	// IMP=0x0000000000099e93
- (void)_closeConnection;	// IMP=0x0000000000099da6
- (void)_openConnection;	// IMP=0x0000000000099523
- (void)_registerForNavdRestart;	// IMP=0x0000000000099381
- (void)dealloc;	// IMP=0x0000000000099343
- (id)init;	// IMP=0x00000000000992c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

