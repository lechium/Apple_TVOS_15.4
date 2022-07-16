//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMLightProfile, NSArray, NSString, NSUUID;

@interface HMLightProfileNaturalLightingAction <NSSecureCoding, HMObjectMerge, HMFLogging, HMFObject>
{
    _Bool _naturalLightingEnabled;	// 16 = 0x10
    HMLightProfile *_lightProfile;	// 24 = 0x18
    NSUUID *_lightProfileUUID;	// 32 = 0x20
}

+ (id)shortDescription;	// IMP=0x00000000000e79ec
+ (id)logCategory;	// IMP=0x00000000000e79bc
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e79b4
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;	// IMP=0x00000000000e7611
+ (id)new;	// IMP=0x00000000000e7569
- (void).cxx_destruct;	// IMP=0x00000000000e7538
@property(readonly) NSUUID *lightProfileUUID; // @synthesize lightProfileUUID=_lightProfileUUID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)logIdentifier;	// IMP=0x00000000000e7278
@property(retain) HMLightProfile *lightProfile; // @synthesize lightProfile=_lightProfile;
@property(getter=isNaturalLightingEnabled) _Bool naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
- (void)updateNaturalLightingEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e6fe3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e6e2f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e6d79
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e6991
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000e6836
- (id)initWithPBNaturalLightingAction:(id)arg1 home:(id)arg2;	// IMP=0x00000000000e6490
- (id)encodeAsProtoBuf;	// IMP=0x00000000000e61b0
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;	// IMP=0x00000000000e60d2
- (_Bool)isValid;	// IMP=0x00000000000e60ca
- (unsigned long long)type;	// IMP=0x00000000000e60bf
- (_Bool)_handleUpdates:(id)arg1;	// IMP=0x00000000000e6080
- (id)_serializeForAdd;	// IMP=0x00000000000e5f2f
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3;	// IMP=0x00000000000e5e6e
- (id)initWithLightProfile:(id)arg1 naturalLightingEnabled:(_Bool)arg2;	// IMP=0x00000000000e5db4
- (id)initWithUUID:(id)arg1;	// IMP=0x00000000000e5cfe
- (id)init;	// IMP=0x00000000000e5c56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end
