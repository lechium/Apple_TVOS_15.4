//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSUUID;

@interface DNDSMutableClientConnectionDetails
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000370c6
@property(nonatomic) _Bool wantsMeDeviceStateUpdates; // @dynamic wantsMeDeviceStateUpdates;
@property(nonatomic) _Bool wantsGlobalConfigurationUpdates; // @dynamic wantsGlobalConfigurationUpdates;
@property(copy, nonatomic) NSSet *activeAssertionUpdateClientIdentifiers; // @dynamic activeAssertionUpdateClientIdentifiers;
@property(nonatomic) _Bool wantsActiveModeUpdates; // @dynamic wantsActiveModeUpdates;
@property(nonatomic) _Bool wantsModeUpdates; // @dynamic wantsModeUpdates;
@property(nonatomic) _Bool wantsSettingsUpdates; // @dynamic wantsSettingsUpdates;
@property(nonatomic) _Bool wantsStateUpdates; // @dynamic wantsStateUpdates;
@property(copy, nonatomic) NSSet *assertionUpdateClientIdentifiers; // @dynamic assertionUpdateClientIdentifiers;
@property(copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID; // @dynamic interruptionInvalidationAssertionUUID;

@end
