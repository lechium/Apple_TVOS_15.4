//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSettingGroup-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableSet, NSString, NSUUID;
@protocol HMDAccessorySettingGroupDataSource;

@interface HMDAccessorySettingGroup : HMFObject <HMFLogging, NSSecureCoding, HMDSettingGroup>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_settings;	// 16 = 0x10
    NSMutableSet *_groups;	// 24 = 0x18
    HMDAccessorySettingGroup *_mediaSystemSettingGroup;	// 32 = 0x20
    NSUUID *_parentIdentifier;	// 40 = 0x28
    NSString *_keyPath;	// 48 = 0x30
    id <HMDAccessorySettingGroupDataSource> _dataSource;	// 56 = 0x38
    NSUUID *_identifier;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
}

+ (id)supportedGroupsClasses;	// IMP=0x00000000008e3228
+ (id)supportedSettingsClasses;	// IMP=0x00000000008e31f8
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000008e31f0
+ (id)logCategory;	// IMP=0x00000000008e31c0
- (void).cxx_destruct;	// IMP=0x00000000008e300d
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDAccessorySettingGroupDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property __weak HMDAccessorySettingGroup *mediaSystemSettingGroup; // @synthesize mediaSystemSettingGroup=_mediaSystemSettingGroup;
- (_Bool)compareSettingsTree:(id)arg1;	// IMP=0x00000000008e247b
- (void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2 shouldAddMissingItems:(_Bool)arg3;	// IMP=0x00000000008e0e30
- (_Bool)dataSourceShouldEncodeSetting:(id)arg1 withCoder:(id)arg2;	// IMP=0x00000000008e0bee
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008e0815
- (_Bool)shouldEncodeForCoder:(id)arg1;	// IMP=0x00000000008e0581
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008e011e
- (id)logIdentifier;	// IMP=0x00000000008e0064
- (void)removeGroup:(id)arg1;	// IMP=0x00000000008dffd2
- (void)addGroup:(id)arg1;	// IMP=0x00000000008dff2d
- (void)_setParentGroup:(id)arg1;	// IMP=0x00000000008dfc18
- (void)_reevaluateParentGroup:(id)arg1;	// IMP=0x00000000008dfbaa
- (id)groupWithIdentifier:(id)arg1;	// IMP=0x00000000008df985
@property(readonly, copy) NSArray *groups;
- (void)removeSetting:(id)arg1;	// IMP=0x00000000008df88b
- (void)addSetting:(id)arg1;	// IMP=0x00000000008df7e6
- (id)settingWithIdentifier:(id)arg1;	// IMP=0x00000000008df5c1
@property(readonly, copy) NSArray *settings;
- (_Bool)isPrivateToDevice;	// IMP=0x00000000008df4c2
- (id)copyReplica;	// IMP=0x00000000008defe8
- (id)copyIdentical;	// IMP=0x00000000008deb11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008deaff
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008dea2b
@property(readonly) unsigned long long hash;
- (id)_settingWithKeys:(id)arg1;	// IMP=0x00000000008de78e
- (id)settingWithKeyPath:(id)arg1;	// IMP=0x00000000008de700
- (id)settingWithName:(id)arg1;	// IMP=0x00000000008de633
- (id)subGroupWithName:(id)arg1;	// IMP=0x00000000008de566
- (id)initWithName:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3;	// IMP=0x00000000008de3a1
- (id)initWithModel:(id)arg1;	// IMP=0x00000000008de2e3
- (id)init;	// IMP=0x00000000008de23b
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000080385
- (id)fullDescription;	// IMP=0x00000000000802e9
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

