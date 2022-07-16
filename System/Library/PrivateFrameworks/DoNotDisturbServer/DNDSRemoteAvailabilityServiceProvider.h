//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/BSServiceConnectionListenerDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDRemoteAvailabilityServiceServerProtocol-Protocol.h>

@class BSServiceConnectionListener, DNDSClientDetailsProvider, NSMutableSet, NSString;
@protocol DNDSRemoteAvailabilityServiceProviderDelegate;

@interface DNDSRemoteAvailabilityServiceProvider : NSObject <BSServiceConnectionListenerDelegate, DNDRemoteAvailabilityServiceServerProtocol>
{
    BSServiceConnectionListener *_requestListener;	// 8 = 0x8
    DNDSClientDetailsProvider *_clientDetailsProvider;	// 16 = 0x10
    struct os_unfair_lock_s _accessLock;	// 24 = 0x18
    NSMutableSet *_connections;	// 32 = 0x20
    id <DNDSRemoteAvailabilityServiceProviderDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000012f33
@property(nonatomic) __weak id <DNDSRemoteAvailabilityServiceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000012eb0
- (void)_addConnection:(id)arg1;	// IMP=0x0000000000012e54
- (void)_handleClientConnectionInvalidated:(id)arg1;	// IMP=0x0000000000012da9
- (void)_handleClientConnectionInterrupted:(id)arg1;	// IMP=0x0000000000012cfe
- (void)getIsLocalUserAvailableWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012ce1
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000001289d
- (void)invalidate;	// IMP=0x0000000000012887
- (void)resume;	// IMP=0x0000000000012847
- (void)dealloc;	// IMP=0x0000000000012809
- (id)initWithClientDetailsProvider:(id)arg1;	// IMP=0x000000000001263e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
