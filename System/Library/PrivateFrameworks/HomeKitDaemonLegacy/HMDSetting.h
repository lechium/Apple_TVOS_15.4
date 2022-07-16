//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDSettingBaseProtocol-Protocol.h>

@class HMSettingValue, NSMutableArray, NSNumber, NSString, NSUUID;
@protocol HMFLocking;

@interface HMDSetting : NSObject <HMDSettingBaseProtocol>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _readOnly;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSUUID *_parentIdentifier;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSMutableArray *_constraints;	// 48 = 0x30
    NSString *_keyPath;	// 56 = 0x38
    NSNumber *_type;	// 64 = 0x40
    NSNumber *_properties;	// 72 = 0x48
    HMSettingValue *_internalValue;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009e9c
+ (id)logCategory;	// IMP=0x0000000000009e6c
+ (id)settingValueWithModel:(id)arg1;	// IMP=0x0000000000009bce
- (void).cxx_destruct;	// IMP=0x0000000000009b59
@property(copy) HMSettingValue *internalValue; // @synthesize internalValue=_internalValue;
@property(copy) NSNumber *properties; // @synthesize properties=_properties;
@property(copy) NSNumber *type; // @synthesize type=_type;
@property(getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000097be
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009708
- (id)constraintsByKeyPathWithCurrentKeyPath:(id)arg1;	// IMP=0x0000000000009491
- (_Bool)wouldValueUpdate:(id)arg1;	// IMP=0x0000000000009424
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007fa4
- (id)logIdentifier;	// IMP=0x0000000000007eea
- (_Bool)updateWithSettingValue:(id)arg1;	// IMP=0x0000000000007ca0
- (void)addConstraint:(id)arg1;	// IMP=0x0000000000007c1b
@property(retain) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy) id value;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 properties:(id)arg4 type:(id)arg5 value:(id)arg6 constraints:(id)arg7;	// IMP=0x0000000000007779
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000007630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

