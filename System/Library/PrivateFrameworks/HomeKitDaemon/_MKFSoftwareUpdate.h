//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFSoftwareUpdate-Protocol.h>
#import <HomeKitDaemon/MKFSoftwareUpdatePrivateExtensions-Protocol.h>

@class HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, MKFSoftwareUpdateDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFAccessory, MKFHome;

@interface _MKFSoftwareUpdate <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFSoftwareUpdate, MKFSoftwareUpdatePrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x000000000067e3ab
+ (id)backingModelProtocol;	// IMP=0x000000000067e39a
+ (id)homeRelation;	// IMP=0x000000000067e36a
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x000000000067e351
+ (Class)cd_modelClass;	// IMP=0x00000000007c204c
+ (id)fetchRequest;	// IMP=0x0000000000b5805e
@property(readonly) id <MKFHome> home;
- (id)castIfSoftwareUpdate;	// IMP=0x000000000067e2f8
@property(readonly, copy, nonatomic) MKFSoftwareUpdateDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFAccessory> accessory; // @dynamic accessory;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @dynamic documentationMetadata;
@property(copy, nonatomic) NSNumber *downloadSize; // @dynamic downloadSize;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(copy, nonatomic) NSNumber *installDuration; // @dynamic installDuration;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSDate *releaseDate; // @dynamic releaseDate;
@property(retain, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
