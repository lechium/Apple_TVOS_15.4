//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>
#import <AssistantServices/AFNotifyObserverDelegate-Protocol.h>
#import <AssistantServices/AFSiriActivationService-Protocol.h>
#import <AssistantServices/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;
@protocol AFSiriActivationListenerDelegate, OS_dispatch_queue;

@interface AFSiriActivationListener : NSObject <NSXPCListenerDelegate, AFNotifyObserverDelegate, AFSiriActivationService, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
    id <AFSiriActivationListenerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fb514
- (void)_myriadEventWithRequestInfo:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fb179
- (void)_deliverButtonEventFromContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fae14
- (void)_deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fa9d0
- (void)_activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fa635
- (void)_prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fa29a
- (void)_invalidate;	// IMP=0x00000000000fa1d2
- (void)_stop;	// IMP=0x00000000000fa11c
- (void)_startWithDelegate:(id)arg1;	// IMP=0x00000000000fa044
- (oneway void)handleIntentForwardingAction:(id)arg1 inBackgroundApplicationWithBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f9d07
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f9916
- (oneway void)handleContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f829b
- (oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000f7df2
- (oneway void)activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f79b6
- (oneway void)prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f759f
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00000000000f74d2
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000f7333
- (void)invalidate;	// IMP=0x00000000000f72d2
- (void)stop;	// IMP=0x00000000000f7271
- (void)startWithDelegate:(id)arg1;	// IMP=0x00000000000f71c9
- (void)dealloc;	// IMP=0x00000000000f7104
- (id)initWithServicePort:(long long)arg1;	// IMP=0x00000000000f6d24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

