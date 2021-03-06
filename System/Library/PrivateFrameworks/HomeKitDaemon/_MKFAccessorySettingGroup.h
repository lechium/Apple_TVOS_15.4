//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFAccessorySettingGroup-Protocol.h>
#import <HomeKitDaemon/MKFAccessorySettingGroupPrivateExtensions-Protocol.h>

@class MKFAccessorySettingGroupDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFAccessorySettingGroup, MKFAppleMediaAccessory, MKFHome;

@interface _MKFAccessorySettingGroup <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySettingGroup, MKFAccessorySettingGroupPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x0000000000360cbb
+ (id)backingModelProtocol;	// IMP=0x0000000000360caa
+ (id)homeRelation;	// IMP=0x0000000000360c7a
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0000000000360bc4
+ (Class)cd_modelClass;	// IMP=0x00000000008de20c
+ (id)fetchRequest;	// IMP=0x0000000000b5787e
- (void)removeSettingsObject:(id)arg1;	// IMP=0x0000000000360ba8
- (void)addSettingsObject:(id)arg1;	// IMP=0x0000000000360b8c
- (void)synchronizeSettingsRelationWith:(id)arg1;	// IMP=0x0000000000360b6a
- (id)findSettingsRelationWithModelID:(id)arg1;	// IMP=0x0000000000360b47
- (id)materializeOrCreateSettingsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000360b21
@property(readonly, retain, nonatomic) NSArray *settings;
- (void)removeChildrenObject:(id)arg1;	// IMP=0x0000000000360aae
- (void)addChildrenObject:(id)arg1;	// IMP=0x0000000000360a92
- (void)synchronizeChildrenRelationWith:(id)arg1;	// IMP=0x0000000000360a70
- (id)findChildrenRelationWithModelID:(id)arg1;	// IMP=0x0000000000360a4d
- (id)materializeOrCreateChildrenRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000360a27
@property(readonly, retain, nonatomic) NSArray *children;
@property(readonly) id <MKFHome> home;
- (id)castIfAccessorySettingGroup;	// IMP=0x000000000036090e
@property(readonly, copy, nonatomic) MKFAccessorySettingGroupDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x00000000003607fe
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFAppleMediaAccessory> accessory; // @dynamic accessory;
@property(retain, nonatomic) NSSet *children_; // @dynamic children_;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) id <MKFAccessorySettingGroup> parent; // @dynamic parent;
@property(retain, nonatomic) NSSet *settings_; // @dynamic settings_;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

