//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFProductInventory-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface SFProductInventory : NSObject <SFProductInventory, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int type:1;
        unsigned int availabilityStatus:1;
        unsigned int distanceUnit:1;
    } _has;	// 8 = 0x8
    int _type;	// 12 = 0xc
    int _availabilityStatus;	// 16 = 0x10
    int _distanceUnit;	// 20 = 0x14
    NSString *_storeId;	// 24 = 0x18
    NSNumber *_distance;	// 32 = 0x20
    NSDate *_timestamp;	// 40 = 0x28
    NSString *_storeName;	// 48 = 0x30
    NSString *_storeAddress;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000185493
- (void).cxx_destruct;	// IMP=0x000000000018585f
@property(copy, nonatomic) NSString *storeAddress; // @synthesize storeAddress=_storeAddress;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int distanceUnit; // @synthesize distanceUnit=_distanceUnit;
@property(copy, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(nonatomic) int availabilityStatus; // @synthesize availabilityStatus=_availabilityStatus;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001856e9
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018559a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001854e8
- (_Bool)hasDistanceUnit;	// IMP=0x00000000001854da
- (_Bool)hasAvailabilityStatus;	// IMP=0x00000000001854c0
- (_Bool)hasType;	// IMP=0x00000000001854a8
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000183d15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

