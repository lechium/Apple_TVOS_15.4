//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPPairSetupSessionClientDelegate-Protocol.h>

@class HAPPairSetupSession, NSError, NSString;
@protocol HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerTransport;

@interface HAP2AccessoryServerPairingDriverPairSetupWorkItem <HAPPairSetupSessionClientDelegate>
{
    _Bool _invalidSetupCode;	// 8 = 0x8
    id <HAP2AccessoryServerPairingDriverDelegate> _delegate;	// 16 = 0x10
    id <HAP2AccessoryServerTransport> _transport;	// 24 = 0x18
    HAPPairSetupSession *_pairingSession;	// 32 = 0x20
    unsigned long long _pairSetupType;	// 40 = 0x28
    double _backoffInterval;	// 48 = 0x30
    NSError *_cancelError;	// 56 = 0x38
}

+ (id)pairSetupWithType:(unsigned long long)arg1;	// IMP=0x00000000001c76b8
- (void).cxx_destruct;	// IMP=0x00000000001c6bb7
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(nonatomic) double backoffInterval; // @synthesize backoffInterval=_backoffInterval;
@property(nonatomic, getter=isInvalidSetupCode) _Bool invalidSetupCode; // @synthesize invalidSetupCode=_invalidSetupCode;
@property(readonly, nonatomic) unsigned long long pairSetupType; // @synthesize pairSetupType=_pairSetupType;
@property(retain, nonatomic) HAPPairSetupSession *pairingSession; // @synthesize pairingSession=_pairingSession;
@property(readonly, nonatomic) id <HAP2AccessoryServerTransport> transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) __weak id <HAP2AccessoryServerPairingDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;	// IMP=0x00000000001c69f8
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;	// IMP=0x00000000001c6913
- (void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c67fd
- (void)pairSetupSession:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x00000000001c66d9
- (void)pairSetupSessionDidStart:(id)arg1;	// IMP=0x00000000001c65dd
- (void)pairSetupSession:(id)arg1 didReceiveProductData:(id)arg2;	// IMP=0x00000000001c64c7
- (void)pairSetupSession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;	// IMP=0x00000000001c63b1
- (id)pairSetupSession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;	// IMP=0x00000000001c6141
- (_Bool)pairSetupSession:(id)arg1 didPairWithPeer:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c5c8c
@property(readonly, copy) NSString *description;
- (void)_pairingStoppedWithError:(id)arg1;	// IMP=0x00000000001c5acf
- (void)_resetPairingState;	// IMP=0x00000000001c5a47
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000001c594b
- (void)runForPairingDriver:(id)arg1;	// IMP=0x00000000001c570c
- (id)initWithPairSetupType:(unsigned long long)arg1;	// IMP=0x00000000001c56ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
