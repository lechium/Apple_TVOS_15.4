//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDSettingGroup-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

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

+ (id)supportedGroupsClasses;	// IMP=0x0000000000834aca
+ (id)supportedSettingsClasses;	// IMP=0x0000000000834a9a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000834a92
+ (id)logCategory;	// IMP=0x0000000000834a62
- (void).cxx_destruct;	// IMP=0x00000000008348af
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDAccessorySettingGroupDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property __weak HMDAccessorySettingGroup *mediaSystemSettingGroup; // @synthesize mediaSystemSettingGroup=_mediaSystemSettingGroup;
- (_Bool)compareSettingsTree:(id)arg1;	// IMP=0x0000000000833d1d
- (void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2 shouldAddMissingItems:(_Bool)arg3;	// IMP=0x00000000008326d2
- (_Bool)dataSourceShouldEncodeSetting:(id)arg1 withCoder:(id)arg2;	// IMP=0x0000000000832490
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008320b7
- (_Bool)shouldEncodeForCoder:(id)arg1;	// IMP=0x0000000000831e23
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008319c0
- (id)logIdentifier;	// IMP=0x0000000000831906
- (void)removeGroup:(id)arg1;	// IMP=0x0000000000831874
- (void)addGroup:(id)arg1;	// IMP=0x00000000008317cf
- (void)_setParentGroup:(id)arg1;	// IMP=0x00000000008314ba
- (void)_reevaluateParentGroup:(id)arg1;	// IMP=0x000000000083144c
- (id)groupWithIdentifier:(id)arg1;	// IMP=0x0000000000831227
@property(readonly, copy) NSArray *groups;
- (void)removeSetting:(id)arg1;	// IMP=0x000000000083112d
- (void)addSetting:(id)arg1;	// IMP=0x0000000000831088
- (id)settingWithIdentifier:(id)arg1;	// IMP=0x0000000000830e63
@property(readonly, copy) NSArray *settings;
- (_Bool)isPrivateToDevice;	// IMP=0x0000000000830d64
- (id)copyReplica;	// IMP=0x000000000083088a
- (id)copyIdentical;	// IMP=0x00000000008303b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008303a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008302cd
@property(readonly) unsigned long long hash;
- (id)_settingWithKeys:(id)arg1;	// IMP=0x0000000000830030
- (id)settingWithKeyPath:(id)arg1;	// IMP=0x000000000082ffa2
- (id)settingWithName:(id)arg1;	// IMP=0x000000000082fed5
- (id)subGroupWithName:(id)arg1;	// IMP=0x000000000082fe08
- (id)initWithName:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3;	// IMP=0x000000000082fc43
- (id)initWithModel:(id)arg1;	// IMP=0x000000000082fb85
- (id)init;	// IMP=0x000000000082fadd
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000007e465
- (id)fullDescription;	// IMP=0x000000000007e3c9
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

