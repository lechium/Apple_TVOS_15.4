//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFIntegerCharacteristic-Protocol.h>
#import <HomeKitDaemon/MKFIntegerCharacteristicPrivateExtensions-Protocol.h>

@class HMDCharacteristicMetadata, MKFIntegerCharacteristicDatabaseID, NSArray, NSData, NSDictionary, NSNumber, NSString, NSUUID;
@protocol MKFHome, MKFService;

@interface _MKFIntegerCharacteristic <MKFIntegerCharacteristic, MKFIntegerCharacteristicPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x0000000000319c2b
+ (id)backingModelProtocol;	// IMP=0x0000000000319c1a
+ (id)fetchRequest;	// IMP=0x0000000000b57dde
@property(readonly) id <MKFHome> home;
- (id)castIfIntegerCharacteristic;	// IMP=0x0000000000319bc1
@property(readonly, copy, nonatomic) MKFIntegerCharacteristicDatabaseID *databaseID;
- (void)pr_updateWithHAPMetadata:(id)arg1;	// IMP=0x0000000000319a69
@property(readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;

// Remaining properties
@property(retain, nonatomic) NSData *authorizationData;
@property(readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *format;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(copy, nonatomic) NSString *manufacturerDescription;
@property(copy, nonatomic) NSNumber *maximumValue; // @dynamic maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @dynamic minimumValue;
@property(readonly, copy) NSDictionary *pr_dictionaryRepresentation;
@property(copy, nonatomic) NSNumber *properties;
@property(readonly, retain, nonatomic) id <MKFService> service;
@property(copy, nonatomic) NSNumber *stepValue; // @dynamic stepValue;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSUUID *type;
@property(copy, nonatomic) NSString *units;
@property(retain, nonatomic) NSArray *validValues; // @dynamic validValues;

@end

