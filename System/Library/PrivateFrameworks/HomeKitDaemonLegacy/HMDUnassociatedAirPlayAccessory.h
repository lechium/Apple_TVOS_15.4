//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDAccessoryAssociation-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMFPairingIdentity, NSString;

@interface HMDUnassociatedAirPlayAccessory <HMFLogging, HMDAccessoryAssociation>
{
    HMFPairingIdentity *_pairingIdentity;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000002d600b
+ (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;	// IMP=0x00000000002d5f8c
- (void).cxx_destruct;	// IMP=0x00000000002d53a7
- (id)logIdentifier;	// IMP=0x00000000002d5395
- (void)associateToHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d4b5d
@property(readonly) _Bool supportsAssociation;
@property(copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;	// IMP=0x00000000002d467f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

