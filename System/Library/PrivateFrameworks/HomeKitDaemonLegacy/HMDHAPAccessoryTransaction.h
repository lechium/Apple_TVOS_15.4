//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPAccessory, HMFConnectivityInfo, NSArray, NSData, NSDate, NSNumber, NSSet, NSString;

@interface HMDHAPAccessoryTransaction
{
    HAPAccessory *_hapAccessoryLocal;	// 8 = 0x8
}

+ (id)properties;	// IMP=0x0000000000372da5
- (void).cxx_destruct;	// IMP=0x0000000000372d92
@property(retain, nonatomic) HAPAccessory *hapAccessoryLocal; // @synthesize hapAccessoryLocal=_hapAccessoryLocal;
- (id)dependentUUIDs;	// IMP=0x0000000000372965

// Remaining properties
@property(retain, nonatomic) NSNumber *accessoryFlags; // @dynamic accessoryFlags;
@property(retain, nonatomic) NSData *accessorySetupHash; // @dynamic accessorySetupHash;
@property(retain, nonatomic) NSString *bridgeUUID; // @dynamic bridgeUUID;
@property(retain, nonatomic) NSData *broadcastKey; // @dynamic broadcastKey;
@property(retain, nonatomic) NSNumber *certificationStatus; // @dynamic certificationStatus;
@property(retain, nonatomic) NSNumber *communicationProtocol; // @dynamic communicationProtocol;
@property(retain, nonatomic) HMFConnectivityInfo *connectivityInfo; // @dynamic connectivityInfo;
@property(retain, nonatomic) NSNumber *hardwareSupport; // @dynamic hardwareSupport;
@property(retain, nonatomic) NSNumber *hasOnboardedForNaturalLighting; // @dynamic hasOnboardedForNaturalLighting;
@property(copy, nonatomic) NSSet *initialServiceTypeUUIDs; // @dynamic initialServiceTypeUUIDs;
@property(retain, nonatomic) NSNumber *keyUpdatedStateNumber; // @dynamic keyUpdatedStateNumber;
@property(retain, nonatomic) NSDate *keyUpdatedTime; // @dynamic keyUpdatedTime;
@property(retain, nonatomic) NSNumber *needsOnboarding; // @dynamic needsOnboarding;
@property(retain, nonatomic) NSString *pairingUsername; // @dynamic pairingUsername;
@property(retain, nonatomic) NSData *publicKey; // @dynamic publicKey;
@property(retain, nonatomic) NSNumber *sleepInterval; // @dynamic sleepInterval;
@property(retain, nonatomic) NSNumber *suspendedState; // @dynamic suspendedState;
@property(retain, nonatomic) NSArray *targetUUIDs; // @dynamic targetUUIDs;
@property(retain, nonatomic) NSArray *transportInformation; // @dynamic transportInformation;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(retain, nonatomic) NSNumber *wiFiTransportCapabilities; // @dynamic wiFiTransportCapabilities;

@end
