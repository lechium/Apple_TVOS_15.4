//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDLightProfile, HMFUnfairLock, NSArray, NSNotificationCenter, NSUUID;

@interface HMDLightProfileNaturalLightingAction
{
    _Bool _naturalLightingEnabled;	// 8 = 0x8
    HMDLightProfile *_lightProfile;	// 16 = 0x10
    NSUUID *_lightProfileUUID;	// 24 = 0x18
    HMFUnfairLock *_lock;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSArray *_lightServices;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0000000000508db9
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x00000000005087ca
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005087c2
+ (id)actionWithDictionaryRepresentation:(id)arg1 actionSet:(id)arg2;	// IMP=0x00000000005084f8
- (void).cxx_destruct;	// IMP=0x0000000000508395
@property(retain, nonatomic) NSArray *lightServices; // @synthesize lightServices=_lightServices;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, copy) NSUUID *lightProfileUUID; // @synthesize lightProfileUUID=_lightProfileUUID;
- (id)attributeDescriptions;	// IMP=0x0000000000508135
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000005078ff
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000005074bc
- (Class)modelClass;	// IMP=0x00000000005074ab
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000506e4b
- (void)handleAccessoryProfileAddedNotification:(id)arg1;	// IMP=0x0000000000506b01
- (id)stateDump;	// IMP=0x0000000000506aef
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000005069ea
- (id)dictionaryRepresentation;	// IMP=0x00000000005068b4
- (unsigned long long)type;	// IMP=0x00000000005068a9
- (_Bool)isActionForCharacteristic:(id)arg1;	// IMP=0x00000000005067d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005066b8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000506301
@property(getter=isNaturalLightingEnabled) _Bool naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
@property(retain) HMDLightProfile *lightProfile; // @synthesize lightProfile=_lightProfile;
- (_Bool)isUnsecuringAction;	// IMP=0x0000000000506173
- (id)associatedAccessories;	// IMP=0x00000000005060b2
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x0000000000505ff1
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3 actionSet:(id)arg4;	// IMP=0x0000000000505f30
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3 actionSet:(id)arg4 notificationCenter:(id)arg5;	// IMP=0x0000000000505db7

@end

