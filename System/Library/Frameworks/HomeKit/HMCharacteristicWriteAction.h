//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCharacteristic, NSString, NSUUID;

@interface HMCharacteristicWriteAction <NSSecureCoding, HMObjectMerge>
{
    HMCharacteristic *_characteristic;	// 16 = 0x10
    id _targetValue;	// 24 = 0x18
}

+ (id)allowedTargetValueClassesForShortcuts;	// IMP=0x00000000000b4695
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b468d
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;	// IMP=0x00000000000b447a
- (void).cxx_destruct;	// IMP=0x00000000000b4364
- (id)encodeAsProtoBuf;	// IMP=0x00000000000b3d63
- (id)initWithProtoBuf:(id)arg1 home:(id)arg2;	// IMP=0x00000000000b3a8d
- (_Bool)isKindOfAllowedTargetValueClass:(id)arg1;	// IMP=0x00000000000b3941
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b379b
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000b362b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b3625
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b3455
- (_Bool)_handleUpdates:(id)arg1;	// IMP=0x00000000000b338c
- (id)_serializeForAdd;	// IMP=0x00000000000b3133
- (_Bool)requiresDeviceUnlock;	// IMP=0x00000000000b30ef
- (_Bool)isValid;	// IMP=0x00000000000b2ff8
- (void)_updateTargetValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b2d9d
- (void)updateTargetValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b2a2e
@property(copy, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
@property(retain, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (unsigned long long)type;	// IMP=0x00000000000b2654
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;	// IMP=0x00000000000b2469
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 uuid:(id)arg3;	// IMP=0x00000000000b23c8
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2;	// IMP=0x00000000000b22fa
- (id)commonInitWith:(id)arg1 targetValue:(id)arg2;	// IMP=0x00000000000b220f
- (id)initWithUUID:(id)arg1;	// IMP=0x00000000000b2159

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end

