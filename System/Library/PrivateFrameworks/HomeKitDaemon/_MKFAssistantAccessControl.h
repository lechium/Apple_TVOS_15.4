//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFAssistantAccessControl-Protocol.h>
#import <HomeKitDaemon/MKFAssistantAccessControlPrivateExtensions-Protocol.h>

@class MKFAssistantAccessControlDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFAccessory, MKFHome;

@interface _MKFAssistantAccessControl <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAssistantAccessControl, MKFAssistantAccessControlPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x00000000005ac02d
+ (id)backingModelProtocol;	// IMP=0x00000000005ac01c
+ (id)homeRelation;	// IMP=0x00000000005abfec
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00000000005abfd3
+ (Class)cd_modelClass;	// IMP=0x00000000007c9591
+ (id)fetchRequest;	// IMP=0x0000000000b579be
@property(readonly) id <MKFHome> home;
- (id)castIfAssistantAccessControl;	// IMP=0x00000000005abf7a
@property(readonly, copy, nonatomic) MKFAssistantAccessControlDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFAccessory> accessory; // @dynamic accessory;
@property(copy, nonatomic) NSString *changeTag; // @dynamic changeTag;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *enabled; // @dynamic enabled;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSNumber *options; // @dynamic options;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

