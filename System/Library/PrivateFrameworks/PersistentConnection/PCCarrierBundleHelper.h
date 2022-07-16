//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersistentConnection/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <PersistentConnection/CoreTelephonyClientDataDelegate-Protocol.h>

@class CTBundle, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSDictionary, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface PCCarrierBundleHelper : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate>
{
    CoreTelephonyClient *_ctClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CTXPCServiceSubscriptionContext *_currentDataContext;	// 24 = 0x18
    NSHashTable *_delegates;	// 32 = 0x20
    CTBundle *_bundle;	// 40 = 0x28
    NSDictionary *_cachedPushSettings;	// 48 = 0x30
}

+ (id)helper;	// IMP=0x0000000000016f11
- (void).cxx_destruct;	// IMP=0x0000000000017948
@property(copy, nonatomic) NSDictionary *cachedPushSettings; // @synthesize cachedPushSettings=_cachedPushSettings;
- (void)currentDataSimChanged:(id)arg1;	// IMP=0x0000000000017867
- (void)operatorBundleChange:(id)arg1;	// IMP=0x00000000000177b3
- (void)_updateCurrentDataSimContext:(id)arg1;	// IMP=0x0000000000017759
- (void)_processCarrierBundleChange:(id)arg1;	// IMP=0x0000000000017556
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000174b2
- (void)addDelegate:(id)arg1;	// IMP=0x00000000000173f9
- (_Bool)boolValueFromPushBundleForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000017319
- (id)copyValueFromPushBundleForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001710e
- (id)copyValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000016f74
- (id)init;	// IMP=0x0000000000016f66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

