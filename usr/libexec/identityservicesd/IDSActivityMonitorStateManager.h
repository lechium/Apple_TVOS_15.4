//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, IDSActivityPushListener, IDSDAccountController, IDSDServiceController, IDSPeerIDManager, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSActivityStateProvider;

@interface IDSActivityMonitorStateManager : NSObject
{
    NSMutableSet *_listeningOnActivities;	// 8 = 0x8
    NSMutableDictionary *_listenersByActivity;	// 16 = 0x10
    id <IDSActivityStateProvider> _stateProvider;	// 24 = 0x18
    IDSActivityPushListener *_pushListener;	// 32 = 0x20
    FTMessageDelivery *_messageDelivery;	// 40 = 0x28
    IDSPeerIDManager *_peerIDManager;	// 48 = 0x30
    IDSDAccountController *_accountController;	// 56 = 0x38
    IDSDServiceController *_serviceController;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x002000000001e410
- (void).cxx_destruct;	// IMP=0x0020000000023150
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(retain, nonatomic) IDSActivityPushListener *pushListener; // @synthesize pushListener=_pushListener;
@property(retain, nonatomic) id <IDSActivityStateProvider> stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) NSMutableDictionary *listenersByActivity; // @synthesize listenersByActivity=_listenersByActivity;
@property(retain, nonatomic) NSMutableSet *listeningOnActivities; // @synthesize listeningOnActivities=_listeningOnActivities;
- (void)pushListener:(id)arg1 receivedUpdatePush:(id)arg2;	// IMP=0x0010000000021d20
- (void)_updateListener;	// IMP=0x0010000000021b20
- (void)_subscribeForInfo:(id)arg1 withDescription:(id)arg2 resolvedTokens:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000020fc0
- (void)unsubscribeForActivity:(id)arg1 subActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000020660
- (void)subscribeForInfo:(id)arg1 onActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f6a0
- (void)ackUpdatesForActivity:(id)arg1;	// IMP=0x001000000001f620
- (id)currentSubscriptionsForActivity:(id)arg1;	// IMP=0x001000000001f580
- (void)removeSubscriptionForActivity:(id)arg1 subActivity:(id)arg2;	// IMP=0x001000000001f4d0
- (void)storeSubscription:(id)arg1 forActivity:(id)arg2;	// IMP=0x001000000001f420
- (id)storedUpdatesForActivity:(id)arg1;	// IMP=0x001000000001f340
- (_Bool)isListeningOnActivity:(id)arg1;	// IMP=0x001000000001f2d0
- (_Bool)stopListeningOnActivity:(id)arg1;	// IMP=0x001000000001f110
- (_Bool)startListeningOnActivity:(id)arg1;	// IMP=0x001000000001ef40
- (void)removeListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x001000000001ecf0
- (void)addListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x001000000001eb60
- (void)setup;	// IMP=0x001000000001eab0
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 queue:(id)arg6;	// IMP=0x001000000001e890
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 pushListener:(id)arg6;	// IMP=0x001000000001e670

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
