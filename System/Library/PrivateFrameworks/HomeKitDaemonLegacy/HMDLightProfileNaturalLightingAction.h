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

+ (id)logCategory;	// IMP=0x00000000004b4e90
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x00000000004b48a1
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b4899
+ (id)actionWithDictionaryRepresentation:(id)arg1 actionSet:(id)arg2;	// IMP=0x00000000004b45cf
- (void).cxx_destruct;	// IMP=0x00000000004b446c
@property(retain, nonatomic) NSArray *lightServices; // @synthesize lightServices=_lightServices;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, copy) NSUUID *lightProfileUUID; // @synthesize lightProfileUUID=_lightProfileUUID;
- (id)attributeDescriptions;	// IMP=0x00000000004b420c
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000004b39d6
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000004b3593
- (Class)modelClass;	// IMP=0x00000000004b3582
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004b2f22
- (void)handleAccessoryProfileAddedNotification:(id)arg1;	// IMP=0x00000000004b2bd8
- (id)stateDump;	// IMP=0x00000000004b2bc6
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000004b2ac1
- (id)dictionaryRepresentation;	// IMP=0x00000000004b298b
- (unsigned long long)type;	// IMP=0x00000000004b2980
- (_Bool)isActionForCharacteristic:(id)arg1;	// IMP=0x00000000004b28ab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b278f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b23d8
@property(getter=isNaturalLightingEnabled) _Bool naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
@property(retain) HMDLightProfile *lightProfile; // @synthesize lightProfile=_lightProfile;
- (_Bool)isUnsecuringAction;	// IMP=0x00000000004b224a
- (id)associatedAccessories;	// IMP=0x00000000004b2189
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x00000000004b20c8
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3 actionSet:(id)arg4;	// IMP=0x00000000004b2007
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3 actionSet:(id)arg4 notificationCenter:(id)arg5;	// IMP=0x00000000004b1e8e

@end

