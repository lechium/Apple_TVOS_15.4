//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class NSDate, NSString;

@interface HMDActionSetModel <HMDBackingStoreModelObjectCDRepresentable>
{
}

+ (id)properties;	// IMP=0x000000000023abc4
+ (id)cd_getMKFActionSetFromActionSet:(id)arg1;	// IMP=0x00000000004b4ed3
+ (id)cd_getMKFActionSetFromActionSetUUID:(id)arg1;	// IMP=0x00000000004b4e41
+ (Class)cd_entityClass;	// IMP=0x00000000004b4e30
+ (id)cd_parentReferenceName;	// IMP=0x00000000004b4e23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDate *lastExecutionDate; // @dynamic lastExecutionDate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end
