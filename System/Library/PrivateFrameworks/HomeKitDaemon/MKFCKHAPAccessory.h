//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSNumber, NSString;

@interface MKFCKHAPAccessory
{
}

+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000006e53ce
+ (id)fetchRequest;	// IMP=0x0000000000b574be
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000006e5b20
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000006e5453
- (id)fetchLocalModelWithContext:(id)arg1;	// IMP=0x00000000006e540c

// Remaining properties
@property(copy, nonatomic) NSNumber *category; // @dynamic category;
@property(copy, nonatomic) NSNumber *certificationStatus; // @dynamic certificationStatus;
@property(nonatomic) _Bool hasOnboardedForNaturalLighting; // @dynamic hasOnboardedForNaturalLighting;
@property(retain, nonatomic) NSData *publicKey; // @dynamic publicKey;
@property(retain, nonatomic) NSDictionary *serviceApplicationData; // @dynamic serviceApplicationData;
@property(retain, nonatomic) NSDictionary *serviceAssociatedServiceTypes; // @dynamic serviceAssociatedServiceTypes;
@property(retain, nonatomic) NSDictionary *serviceConfiguredNames; // @dynamic serviceConfiguredNames;
@property(retain, nonatomic) NSDictionary *serviceProperties; // @dynamic serviceProperties;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;

@end

