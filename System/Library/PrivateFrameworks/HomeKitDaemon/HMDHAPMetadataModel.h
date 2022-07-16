//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface HMDHAPMetadataModel <HMDBackingStoreModelObjectCDRepresentable>
{
}

+ (id)allowedTypes;	// IMP=0x0000000000207a0d
+ (id)modelWithDictionary:(id)arg1;	// IMP=0x00000000002077b8
+ (id)metadataModelObjectUUID;	// IMP=0x0000000000207788
+ (id)properties;	// IMP=0x0000000000207758
+ (Class)cd_entityClass;	// IMP=0x00000000001b1a70
+ (id)cd_parentReferenceName;	// IMP=0x00000000001b1a63
- (id)metadataDictionary;	// IMP=0x00000000002075c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSData *legacyCloudData; // @dynamic legacyCloudData;
@property(retain, nonatomic) NSData *legacyIDSData; // @dynamic legacyIDSData;
@property(retain, nonatomic) NSNumber *metadataVersion; // @dynamic metadataVersion;
@property(retain, nonatomic) NSDictionary *rawPlist; // @dynamic rawPlist;
@property(retain, nonatomic) NSNumber *schemaVersion; // @dynamic schemaVersion;
@property(readonly) Class superclass;

@end

