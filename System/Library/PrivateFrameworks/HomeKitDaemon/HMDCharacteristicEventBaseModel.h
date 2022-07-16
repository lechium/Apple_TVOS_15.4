//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class NSNumber, NSString;

@interface HMDCharacteristicEventBaseModel <HMDBackingStoreModelObjectCDRepresentable>
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 className:(Class)arg4 message:(id)arg5 checkForSupport:(_Bool)arg6 outCharateristic:(id *)arg7;	// IMP=0x00000000007db74f
+ (id)properties;	// IMP=0x00000000007db6ec
+ (Class)cd_entityClass;	// IMP=0x00000000000411f2
- (id)dependentUUIDs;	// IMP=0x00000000007dbb6a
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000041010
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000040e07

// Remaining properties
@property(retain, nonatomic) NSString *accessory; // @dynamic accessory;
@property(retain, nonatomic) NSNumber *characteristicID; // @dynamic characteristicID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *serviceID; // @dynamic serviceID;
@property(readonly) Class superclass;

@end
