//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNRouteGeniusDelegateProxy-Protocol.h>

@class NSString, NSXPCConnection;
@protocol MNRouteGeniusDelegateProxy, OS_dispatch_queue;

@interface MNRouteGeniusRemoteService : NSObject <MNRouteGeniusDelegateProxy>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _started;	// 24 = 0x18
    id <MNRouteGeniusDelegateProxy> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000093841
- (void)didUpdateRouteGenius:(id)arg1;	// IMP=0x0000000000093607
- (void)stop;	// IMP=0x0000000000093394
- (void)start;	// IMP=0x0000000000092dcf
- (void)dealloc;	// IMP=0x0000000000092d38
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000092c77
- (void)_q_closeConnection;	// IMP=0x0000000000092c1d
- (_Bool)_q_openConnectionIfNecessary;	// IMP=0x00000000000927ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
