//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class HMDAccountIdentifier, NSString;

@interface HMDAccountModel <HMDBackingStoreModelObjectCDRepresentable>
{
}

+ (id)properties;	// IMP=0x0000000000474149
+ (id)schemaHashRoot;	// IMP=0x0000000000474128
+ (Class)cd_entityClass;	// IMP=0x000000000095de2c
+ (id)cd_parentReferenceName;	// IMP=0x000000000095de1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) HMDAccountIdentifier *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end

