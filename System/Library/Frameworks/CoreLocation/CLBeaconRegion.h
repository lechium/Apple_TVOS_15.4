//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLBeaconIdentityConstraint, NSNumber, NSUUID;

@interface CLBeaconRegion
{
    _Bool _notifyEntryStateOnDisplay;	// 8 = 0x8
    int _definitionMask;	// 12 = 0xc
    NSUUID *_UUID;	// 16 = 0x10
    NSNumber *_major;	// 24 = 0x18
    NSNumber *_minor;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004ee3e
+ (id)any;	// IMP=0x000000000004e984
@property(readonly, nonatomic) int definitionMask; // @synthesize definitionMask=_definitionMask;
@property _Bool notifyEntryStateOnDisplay; // @synthesize notifyEntryStateOnDisplay=_notifyEntryStateOnDisplay;
@property(readonly, copy, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(readonly, copy, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy, nonatomic) CLBeaconIdentityConstraint *beaconIdentityConstraint;
- (id)peripheralDataWithMeasuredPower:(id)arg1;	// IMP=0x000000000004f4c9
- (BOOL)_measuredPowerForDevice;	// IMP=0x000000000004f4b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004f384
- (unsigned long long)hash;	// IMP=0x000000000004f2f9
- (id)description;	// IMP=0x000000000004f266
- (void)dealloc;	// IMP=0x000000000004f1e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f13a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004efde
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004ee46
- (id)initWithBeaconIdentityConstraint:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000004ed39
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 notifyEntryStateOnDisplay:(_Bool)arg5;	// IMP=0x000000000004ec90
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;	// IMP=0x000000000004ec58
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;	// IMP=0x000000000004ec46
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;	// IMP=0x000000000004ebac
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;	// IMP=0x000000000004eb9a
- (id)initWithUUID:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000004eb1f
- (id)initWithProximityUUID:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000004eb0d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000004eab5
- (id)init;	// IMP=0x000000000004ea85
- (void)setGutsWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 notifyOnDisplay:(_Bool)arg4;	// IMP=0x000000000004e9e0
@property(readonly, copy, nonatomic) NSUUID *proximityUUID;

@end

