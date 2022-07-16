//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSTimer, NSXPCConnection, NSXPCListener, PKInAppPaymentService, PKPaymentAuthorizationCoordinatorExportedObject, PKPaymentRequest;
@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationCoordinator : NSObject <NSXPCListenerDelegate>
{
    _Bool _didPresent;	// 8 = 0x8
    id <PKPaymentAuthorizationServiceProtocol> _serviceProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    NSTimer *_timer;	// 40 = 0x28
    PKPaymentRequest *_paymentRequest;	// 48 = 0x30
    NSString *_hostIdentifier;	// 56 = 0x38
    PKPaymentAuthorizationCoordinatorExportedObject *_exportedObject;	// 64 = 0x40
    CDUnknownBlockType _presentationCompletionBlock;	// 72 = 0x48
    PKInAppPaymentService *_inAppPaymentService;	// 80 = 0x50
    NSXPCListener *_listener;	// 88 = 0x58
    double _connectionTimeout;	// 96 = 0x60
}

+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 webDomain:(id)arg3;	// IMP=0x000000000014a16a
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 webDomain:(id)arg2;	// IMP=0x000000000014a150
+ (_Bool)canMakePayments;	// IMP=0x0000000000149fe0
- (void).cxx_destruct;	// IMP=0x000000000014b838
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) PKInAppPaymentService *inAppPaymentService; // @synthesize inAppPaymentService=_inAppPaymentService;
@property(copy, nonatomic) CDUnknownBlockType presentationCompletionBlock; // @synthesize presentationCompletionBlock=_presentationCompletionBlock;
@property(retain, nonatomic) PKPaymentAuthorizationCoordinatorExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool didPresent; // @synthesize didPresent=_didPresent;
@property(nonatomic) __weak id <PKPaymentAuthorizationServiceProtocol> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (void)_viewServiceTimerFired:(id)arg1;	// IMP=0x000000000014b6ff
- (void)_invokeCallbackWithSuccess:(_Bool)arg1;	// IMP=0x000000000014b5eb
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014b520
- (id)_remoteObjectProxy;	// IMP=0x000000000014b50a
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000014b157
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000014ae58
- (void)presentWithOrientation:(id)arg1 sceneIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000014a9db
- (void)presentWithSceneIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014a9c1
- (void)presentWithOrientation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014a9aa
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000014a993
@property(readonly) id <PKPaymentAuthorizationHostProtocol> hostDelegate;
@property(nonatomic, setter=_setPrivateDelegate:) __weak id <PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorDelegate> delegate;
- (void)dealloc;	// IMP=0x000000000014a83e
- (id)initWithPaymentRequest:(id)arg1;	// IMP=0x000000000014a45e
- (id)init;	// IMP=0x000000000014a44a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
