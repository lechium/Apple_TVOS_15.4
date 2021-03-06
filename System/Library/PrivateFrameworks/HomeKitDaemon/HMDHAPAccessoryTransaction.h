//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class HAPAccessory, HMFConnectivityInfo, NSArray, NSData, NSDate, NSNumber, NSSet, NSString;

@interface HMDHAPAccessoryTransaction <HMDBackingStoreModelObjectCDRepresentable>
{
    HAPAccessory *_hapAccessoryLocal;	// 8 = 0x8
}

+ (id)properties;	// IMP=0x00000000003baecd
+ (id)cd_getMKFHAPAccessoryFromAccessoryUUID:(id)arg1;	// IMP=0x00000000007ca185
+ (id)cd_getMKFHAPAccessoryFromAccessory:(id)arg1;	// IMP=0x00000000007ca0f3
+ (id)cd_getMKFServiceFromAccessoryUUID:(id)arg1 serviceInstanceId:(id)arg2 managedObject:(id)arg3 modelObjectField:(id)arg4;	// IMP=0x00000000007c9cda
+ (Class)cd_entityClass;	// IMP=0x00000000007c9cc9
+ (id)cd_parentReferenceName;	// IMP=0x00000000007c9cbc
- (void).cxx_destruct;	// IMP=0x00000000003baeba
@property(retain, nonatomic) HAPAccessory *hapAccessoryLocal; // @synthesize hapAccessoryLocal=_hapAccessoryLocal;
- (id)dependentUUIDs;	// IMP=0x00000000003baa8d

// Remaining properties
@property(retain, nonatomic) NSNumber *accessoryFlags; // @dynamic accessoryFlags;
@property(retain, nonatomic) NSData *accessorySetupHash; // @dynamic accessorySetupHash;
@property(retain, nonatomic) NSString *bridgeUUID; // @dynamic bridgeUUID;
@property(retain, nonatomic) NSData *broadcastKey; // @dynamic broadcastKey;
@property(retain, nonatomic) NSNumber *certificationStatus; // @dynamic certificationStatus;
@property(retain, nonatomic) NSNumber *communicationProtocol; // @dynamic communicationProtocol;
@property(retain, nonatomic) HMFConnectivityInfo *connectivityInfo; // @dynamic connectivityInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *hardwareSupport; // @dynamic hardwareSupport;
@property(retain, nonatomic) NSNumber *hasOnboardedForNaturalLighting; // @dynamic hasOnboardedForNaturalLighting;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSSet *initialServiceTypeUUIDs; // @dynamic initialServiceTypeUUIDs;
@property(retain, nonatomic) NSNumber *keyUpdatedStateNumber; // @dynamic keyUpdatedStateNumber;
@property(retain, nonatomic) NSDate *keyUpdatedTime; // @dynamic keyUpdatedTime;
@property(retain, nonatomic) NSNumber *needsOnboarding; // @dynamic needsOnboarding;
@property(retain, nonatomic) NSString *pairingUsername; // @dynamic pairingUsername;
@property(retain, nonatomic) NSData *publicKey; // @dynamic publicKey;
@property(retain, nonatomic) NSNumber *sleepInterval; // @dynamic sleepInterval;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSNumber *suspendedState; // @dynamic suspendedState;
@property(retain, nonatomic) NSArray *targetUUIDs; // @dynamic targetUUIDs;
@property(retain, nonatomic) NSArray *transportInformation; // @dynamic transportInformation;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(retain, nonatomic) NSNumber *wiFiTransportCapabilities; // @dynamic wiFiTransportCapabilities;

@end

