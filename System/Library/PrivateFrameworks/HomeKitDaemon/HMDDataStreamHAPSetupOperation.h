//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDDataStreamSetupOperationMTU-Protocol.h>

@interface HMDDataStreamHAPSetupOperation <HMDDataStreamSetupOperationMTU>
{
    unsigned long long _maxControllerTransportMTU;	// 56 = 0x38
    long long _sessionIdentifier;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00000000001fb1bc
@property(nonatomic) long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) unsigned long long maxControllerTransportMTU; // @synthesize maxControllerTransportMTU=_maxControllerTransportMTU;
- (void)processTransportSetupResponse:(id)arg1;	// IMP=0x00000000001fab9f
- (void)startSetup;	// IMP=0x00000000001fa788
- (void)_readRequiredTransportCharacteristics;	// IMP=0x00000000001fa36b
- (void)setMaxControllerTransportMTU:(unsigned long long)arg1;	// IMP=0x00000000001fa353
- (id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 maxControllerTransportMTU:(unsigned long long)arg5 setupOperationReadRequired:(_Bool)arg6;	// IMP=0x00000000001fa2f1

@end

