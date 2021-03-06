//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class NSNumber, NSString;

@interface HMDAccessoryNetworkProtectionGroupModel <HMDBackingStoreModelObjectCDRepresentable>
{
}

+ (id)properties;	// IMP=0x0000000000816d30
+ (id)modelIDForHome:(id)arg1 manufacturer:(id)arg2 category:(id)arg3;	// IMP=0x0000000000816b39
+ (id)modelNamespace;	// IMP=0x0000000000816b09
+ (Class)cd_entityClass;	// IMP=0x0000000000890d4f
+ (id)cd_parentReferenceName;	// IMP=0x0000000000890d42

// Remaining properties
@property(copy, nonatomic) NSNumber *category; // @dynamic category;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *targetProtectionMode; // @dynamic targetProtectionMode;

@end

