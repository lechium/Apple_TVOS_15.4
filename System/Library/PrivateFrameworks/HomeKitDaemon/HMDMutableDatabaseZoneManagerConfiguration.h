//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMBCloudZoneConfiguration, HMDHomeKitVersion, NSSet;

@interface HMDMutableDatabaseZoneManagerConfiguration
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000045b593

// Remaining properties
@property(copy) HMBCloudZoneConfiguration *cloudZoneConfiguration; // @dynamic cloudZoneConfiguration;
@property(copy) NSSet *externalRecordTypesForSubscriptions; // @dynamic externalRecordTypesForSubscriptions;
@property(copy) HMDHomeKitVersion *minimumHomeKitVersion; // @dynamic minimumHomeKitVersion;
@property(copy) NSSet *requiredSupportedFeatures; // @dynamic requiredSupportedFeatures;
@property _Bool shouldCreateZone; // @dynamic shouldCreateZone;
@property(getter=isZoneOwner) _Bool zoneOwner; // @dynamic zoneOwner;

@end

