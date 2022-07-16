//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFUser-Protocol.h>
#import <HomeKitDaemon/MKFUserPrivateExtensions-Protocol.h>

@class HMDAccountHandle, HMDAccountIdentifier, MKFUserDatabaseID, NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFAnnounceUserSettings, MKFHome, MKFPresenceEvent;

@interface _MKFUser <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUser, MKFUserPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x000000000036c8be
+ (id)backingModelProtocol;	// IMP=0x000000000036c8ad
+ (id)homeRelation;	// IMP=0x000000000036c87d
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x000000000036c7c7
+ (Class)cd_modelClass;	// IMP=0x00000000006f69be
+ (id)fetchRequest;	// IMP=0x0000000000b5813e
@property(readonly, retain, nonatomic) NSArray *triggers;
- (id)findSettingsAnnounceRelationWithModelID:(id)arg1;	// IMP=0x000000000036c74d
- (id)materializeOrCreateSettingsAnnounceRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x000000000036c727
- (void)removePairedHAPAccessoriesObject:(id)arg1;	// IMP=0x000000000036c70b
- (void)addPairedHAPAccessoriesObject:(id)arg1;	// IMP=0x000000000036c6ef
@property(readonly, retain, nonatomic) NSArray *pairedHAPAccessories;
- (void)removeBulletinConditionsObject:(id)arg1;	// IMP=0x000000000036c67c
- (void)addBulletinConditionsObject:(id)arg1;	// IMP=0x000000000036c660
- (id)findBulletinConditionsRelationWithModelID:(id)arg1;	// IMP=0x000000000036c63d
- (id)materializeOrCreateBulletinConditionsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x000000000036c617
@property(readonly, retain, nonatomic) NSArray *bulletinConditions;
- (id)castIfUser;	// IMP=0x000000000036c5b7
@property(readonly, copy, nonatomic) MKFUserDatabaseID *databaseID;
- (_Bool)isOwner;	// IMP=0x000000000036c539

// Remaining properties
@property(retain, nonatomic) HMDAccountHandle *accountHandle; // @dynamic accountHandle;
@property(retain, nonatomic) HMDAccountIdentifier *accountIdentifier; // @dynamic accountIdentifier;
@property(copy, nonatomic) NSNumber *announceAccessAllowed; // @dynamic announceAccessAllowed;
@property(copy, nonatomic) NSNumber *announceAccessLevel; // @dynamic announceAccessLevel;
@property(retain, nonatomic) NSSet *bulletinConditions_; // @dynamic bulletinConditions_;
@property(copy, nonatomic) NSNumber *camerasAccessLevel; // @dynamic camerasAccessLevel;
@property(copy, nonatomic) NSString *changeTag; // @dynamic changeTag;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) NSSet *pairedHAPAccessories_; // @dynamic pairedHAPAccessories_;
@property(retain, nonatomic) NSDictionary *pairingIdentity; // @dynamic pairingIdentity;
@property(copy, nonatomic) NSNumber *presenceAuthorizationStatus; // @dynamic presenceAuthorizationStatus;
@property(readonly, retain, nonatomic) id <MKFPresenceEvent> presenceEvent; // @dynamic presenceEvent;
@property(copy, nonatomic) NSNumber *presenceRegionStatus; // @dynamic presenceRegionStatus;
@property(copy, nonatomic) NSDate *presenceUpdateTimeStamp; // @dynamic presenceUpdateTimeStamp;
@property(copy, nonatomic) NSNumber *privilege; // @dynamic privilege;
@property(copy, nonatomic) NSNumber *remoteAccessAllowed; // @dynamic remoteAccessAllowed;
@property(retain, nonatomic) id <MKFAnnounceUserSettings> settingsAnnounce; // @dynamic settingsAnnounce;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *triggers_; // @dynamic triggers_;
@property(copy, nonatomic) NSString *userID; // @dynamic userID;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

