//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSSet, NSUUID;

@interface HMDLightProfileNaturalLightingActionModel
{
}

+ (id)properties;	// IMP=0x00000000004ce22d
- (id)dependentUUIDs;	// IMP=0x00000000004ce5a2
@property(getter=isNaturalLightingEnabled) _Bool naturalLightingEnabled;

// Remaining properties
@property(retain) NSUUID *accessoryUUID; // @dynamic accessoryUUID;
@property(retain) NSUUID *lightProfileUUID; // @dynamic lightProfileUUID;
@property(retain) NSNumber *naturalLightingEnabledField; // @dynamic naturalLightingEnabledField;
@property(retain) NSSet *serviceUUIDs; // @dynamic serviceUUIDs;

@end

