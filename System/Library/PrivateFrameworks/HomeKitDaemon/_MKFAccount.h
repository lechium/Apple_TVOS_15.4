//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFAccount-Protocol.h>
#import <HomeKitDaemon/MKFAccountPrivateExtensions-Protocol.h>

@class HMDAccountIdentifier, MKFAccountDatabaseID, NSArray, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFHomeManager;

@interface _MKFAccount <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccount, MKFAccountPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x0000000000040b44
+ (id)backingModelProtocol;	// IMP=0x0000000000040b33
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0000000000040a7d
+ (Class)cd_modelClass;	// IMP=0x000000000095de0e
+ (id)fetchRequest;	// IMP=0x0000000000b5789e
- (void)synchronizeHandlesRelationWith:(id)arg1;	// IMP=0x0000000000040a5b
- (id)findHandlesRelationWithModelID:(id)arg1;	// IMP=0x0000000000040a38
- (id)materializeOrCreateHandlesRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000040a12
@property(readonly, retain, nonatomic) NSArray *handles;
- (void)synchronizeDevicesRelationWith:(id)arg1;	// IMP=0x0000000000040999
- (id)findDevicesRelationWithModelID:(id)arg1;	// IMP=0x0000000000040976
- (id)materializeOrCreateDevicesRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000040950
@property(readonly, retain, nonatomic) NSArray *devices;
- (id)castIfAccount;	// IMP=0x00000000000408f0
@property(readonly, copy, nonatomic) MKFAccountDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *devices_; // @dynamic devices_;
@property(retain, nonatomic) NSSet *handles_; // @dynamic handles_;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHomeManager> homeManager; // @dynamic homeManager;
@property(retain, nonatomic) HMDAccountIdentifier *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSNumber *local; // @dynamic local;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

