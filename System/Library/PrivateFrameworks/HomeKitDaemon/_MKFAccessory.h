//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFAccessory-Protocol.h>
#import <HomeKitDaemon/MKFAccessoryPrivateExtensions-Protocol.h>

@class MKFAccessoryDatabaseID, NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFAccessory, MKFApplicationData, MKFAssistantAccessControl, MKFHome, MKFRoom, MKFSoftwareUpdate;

@interface _MKFAccessory <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessory, MKFAccessoryPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x00000000001ce5b4
+ (id)backingModelProtocol;	// IMP=0x00000000001ce5a3
+ (id)homeRelation;	// IMP=0x00000000001ce573
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00000000001ce4bd
+ (Class)cd_modelClass;	// IMP=0x00000000007635e6
+ (id)fetchRequest;	// IMP=0x0000000000b577fe
- (id)materializeOrCreateSoftwareUpdateRelation:(_Bool *)arg1;	// IMP=0x00000000001ce497
- (void)removeHostedAccessoriesObject:(id)arg1;	// IMP=0x00000000001ce47b
- (void)addHostedAccessoriesObject:(id)arg1;	// IMP=0x00000000001ce45f
@property(readonly, retain, nonatomic) NSArray *hostedAccessories;
@property(readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property(readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property(readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;	// IMP=0x00000000001ce2dd
- (id)materializeOrCreateAccessControlRelation:(_Bool *)arg1;	// IMP=0x00000000001ce2b7
- (id)castIfAccessory;	// IMP=0x00000000001ce2ae
@property(readonly, copy, nonatomic) MKFAccessoryDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFAssistantAccessControl> accessControl; // @dynamic accessControl;
@property(copy, nonatomic) NSNumber *accessoryCategory; // @dynamic accessoryCategory;
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(retain, nonatomic) NSArray *appliedFirewallWANRules; // @dynamic appliedFirewallWANRules;
@property(retain, nonatomic) NSSet *cameraAccessModeBulletinRegistrations_; // @dynamic cameraAccessModeBulletinRegistrations_;
@property(retain, nonatomic) NSSet *cameraReachabilityBulletinRegistrations_; // @dynamic cameraReachabilityBulletinRegistrations_;
@property(retain, nonatomic) NSSet *cameraSignificantEventBulletinRegistrations_; // @dynamic cameraSignificantEventBulletinRegistrations_;
@property(copy, nonatomic) NSString *configurationAppIdentifier; // @dynamic configurationAppIdentifier;
@property(copy, nonatomic) NSString *configuredName; // @dynamic configuredName;
@property(copy, nonatomic) NSNumber *currentNetworkProtectionMode; // @dynamic currentNetworkProtectionMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *firmwareVersion; // @dynamic firmwareVersion;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(retain, nonatomic) id <MKFAccessory> hostAccessory; // @dynamic hostAccessory;
@property(retain, nonatomic) NSSet *hostedAccessories_; // @dynamic hostedAccessories_;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSNumber *initialCategoryIdentifier; // @dynamic initialCategoryIdentifier;
@property(copy, nonatomic) NSString *initialManufacturer; // @dynamic initialManufacturer;
@property(copy, nonatomic) NSString *initialModel; // @dynamic initialModel;
@property(copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970; // @dynamic lastNetworkAccessViolationOccurrenceSince1970;
@property(copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970; // @dynamic lastNetworkAccessViolationResetSince1970;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *model; // @dynamic model;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSNumber *networkClientIdentifier; // @dynamic networkClientIdentifier;
@property(copy, nonatomic) NSNumber *networkClientLAN; // @dynamic networkClientLAN;
@property(copy, nonatomic) NSString *networkClientProfileFingerprint; // @dynamic networkClientProfileFingerprint;
@property(copy, nonatomic) NSString *networkRouterUUID; // @dynamic networkRouterUUID;
@property(copy, nonatomic) NSString *pendingConfigurationIdentifier; // @dynamic pendingConfigurationIdentifier;
@property(copy, nonatomic) NSString *primaryProfileVersion; // @dynamic primaryProfileVersion;
@property(copy, nonatomic) NSString *productData; // @dynamic productData;
@property(copy, nonatomic) NSString *providedName; // @dynamic providedName;
@property(retain, nonatomic) id <MKFRoom> room; // @dynamic room;
@property(copy, nonatomic) NSString *serialNumber; // @dynamic serialNumber;
@property(retain, nonatomic) id <MKFSoftwareUpdate> softwareUpdate; // @dynamic softwareUpdate;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *suspendCapable; // @dynamic suspendCapable;
@property(copy, nonatomic) NSNumber *wiFiCredentialType; // @dynamic wiFiCredentialType;
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey; // @dynamic wiFiUniquePreSharedKey;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

