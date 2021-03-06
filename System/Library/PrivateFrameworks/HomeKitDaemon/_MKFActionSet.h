//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFActionSet-Protocol.h>
#import <HomeKitDaemon/MKFActionSetPrivateExtensions-Protocol.h>

@class MKFActionSetDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFApplicationData, MKFHome;

@interface _MKFActionSet <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFActionSet, MKFActionSetPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x0000000000888ae0
+ (id)backingModelProtocol;	// IMP=0x0000000000888acf
+ (id)homeRelation;	// IMP=0x0000000000888a9f
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00000000008889e9
+ (Class)cd_modelClass;	// IMP=0x00000000004b4e12
+ (id)fetchRequest;	// IMP=0x0000000000b578fe
@property(readonly, retain, nonatomic) NSArray *triggers;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;	// IMP=0x000000000088896c
- (void)synchronizeActionsRelationWith:(id)arg1;	// IMP=0x000000000088894a
- (id)findActionsRelationOfTypeShortcutActionWithModelID:(id)arg1;	// IMP=0x0000000000888927
- (id)materializeOrCreateActionsRelationOfTypeShortcutActionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000888901
- (id)findActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg1;	// IMP=0x00000000008888de
- (id)materializeOrCreateActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000008888b8
- (id)findActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg1;	// IMP=0x0000000000888895
- (id)materializeOrCreateActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x000000000088886f
- (id)findActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg1;	// IMP=0x000000000088884c
- (id)materializeOrCreateActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000888826
- (id)materializeOrCreateActionsRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x000000000088879c
@property(readonly, retain, nonatomic) NSArray *actions;
- (id)castIfActionSet;	// IMP=0x000000000088873c
@property(readonly, copy, nonatomic) MKFActionSetDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) NSSet *actions_; // @dynamic actions_;
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(copy, nonatomic) NSDate *lastExecutionDate; // @dynamic lastExecutionDate;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *triggers_; // @dynamic triggers_;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

