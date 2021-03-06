//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFOutgoingInvitation-Protocol.h>
#import <HomeKitDaemon/MKFOutgoingInvitationPrivateExtensions-Protocol.h>

@class MKFOutgoingInvitationDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFHome;

@interface _MKFOutgoingInvitation <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFOutgoingInvitation, MKFOutgoingInvitationPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x0000000000763d55
+ (id)backingModelProtocol;	// IMP=0x0000000000763d44
+ (id)homeRelation;	// IMP=0x0000000000763d14
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0000000000763c5e
+ (Class)cd_modelClass;	// IMP=0x00000000004af107
+ (id)fetchRequest;	// IMP=0x0000000000b57f3e
- (id)castIfOutgoingInvitation;	// IMP=0x0000000000763c55
@property(readonly, copy, nonatomic) MKFOutgoingInvitationDatabaseID *databaseID;

// Remaining properties
@property(copy, nonatomic) NSNumber *announceAccessLevel; // @dynamic announceAccessLevel;
@property(copy, nonatomic) NSNumber *cameraAccessLevel; // @dynamic cameraAccessLevel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *expiryDate;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(copy, nonatomic) NSUUID *idsIdentifier;
@property(copy, nonatomic) NSNumber *invitationState;
@property(copy, nonatomic) NSString *inviteeUserID; // @dynamic inviteeUserID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSNumber *privilege; // @dynamic privilege;
@property(copy, nonatomic) NSNumber *remoteAccessAllowed; // @dynamic remoteAccessAllowed;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

