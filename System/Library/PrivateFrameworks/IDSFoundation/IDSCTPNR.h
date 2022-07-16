//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <IDSFoundation/CoreTelephonyClientDelegate-Protocol.h>
#import <IDSFoundation/CoreTelephonyClientPNRDelegate-Protocol.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, IDSCTPNRInfo, NSString;
@protocol IDSCTPNRDelegate;

@interface IDSCTPNR : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientPNRDelegate>
{
    id _coreTelephonyClient;	// 8 = 0x8
    NSString *_labelID;	// 16 = 0x10
    id _context;	// 24 = 0x18
    id <IDSCTPNRDelegate> _PNRDelegate;	// 32 = 0x20
    long long _carrierShortcodeSupported;	// 40 = 0x28
    struct os_unfair_lock_s _contextLock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000cbb9f
@property(nonatomic) struct os_unfair_lock_s contextLock; // @synthesize contextLock=_contextLock;
@property(nonatomic) long long carrierShortcodeSupported; // @synthesize carrierShortcodeSupported=_carrierShortcodeSupported;
@property(nonatomic) __weak id <IDSCTPNRDelegate> PNRDelegate; // @synthesize PNRDelegate=_PNRDelegate;
@property(retain, nonatomic) NSString *labelID; // @synthesize labelID=_labelID;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
- (void)subscriptionInfoDidChange;	// IMP=0x00000000000cbb08
- (void)pnrResponseReceived:(id)arg1 pnrRspData:(id)arg2;	// IMP=0x00000000000cba10
- (void)pnrRequestSent:(id)arg1 pnrReqData:(id)arg2;	// IMP=0x00000000000cb99f
- (void)pnrReadyStateNotification:(id)arg1 regState:(_Bool)arg2;	// IMP=0x00000000000cb94c
- (void)_resetCarrierShortcodeSupportedCachedValue;	// IMP=0x00000000000cb88f
- (void)operatorBundleChange:(id)arg1;	// IMP=0x00000000000cb819
- (void)carrierBundleChange:(id)arg1;	// IMP=0x00000000000cb7a3
- (_Bool)isRelevantContext:(id)arg1;	// IMP=0x00000000000cb702
- (_Bool)issuePNRForMechanism:(id)arg1 pushToken:(id)arg2 attemptCount:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cb2b6
@property(readonly, nonatomic) IDSCTPNRInfo *PNRInfo;
@property(readonly, nonatomic) _Bool userOptInRequired;
@property(readonly, nonatomic) _Bool isSIMReady;
@property(readonly, nonatomic) _Bool isPNRSupported;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)_telephonyRequestForPushToken:(id)arg1 phoneNumberValidationMechanism:(id)arg2 attemptCount:(unsigned int)arg3;	// IMP=0x00000000000ca81a
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property(readonly, copy) NSString *description;
- (id)_initWithCoreTelephonyClient:(id)arg1 SIM:(id)arg2;	// IMP=0x00000000000ca339

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
