//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDSettingGroup-Protocol.h>

@class NSArray, NSMutableSet, NSString, NSUUID;

@interface HMDSettingGroup : NSObject <HMDSettingGroup>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSUUID *_parentIdentifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_keyPath;	// 32 = 0x20
    NSMutableSet *_settingsInternal;	// 40 = 0x28
    NSMutableSet *_groupsInternal;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000008018a1
- (void).cxx_destruct;	// IMP=0x000000000080184d
@property(retain) NSMutableSet *groupsInternal; // @synthesize groupsInternal=_groupsInternal;
@property(retain) NSMutableSet *settingsInternal; // @synthesize settingsInternal=_settingsInternal;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000080157f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008014c9
- (void)addGroup:(id)arg1;	// IMP=0x00000000008013d8
- (void)addSetting:(id)arg1;	// IMP=0x00000000008012e7
@property(readonly, copy) NSArray *groups;
@property(readonly, copy) NSArray *settings;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 groups:(id)arg4 settings:(id)arg5;	// IMP=0x00000000008010cb
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000800fb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

