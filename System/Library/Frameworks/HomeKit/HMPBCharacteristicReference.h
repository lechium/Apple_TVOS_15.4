//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMPBServiceReference, NSData;

@interface HMPBCharacteristicReference : PBCodable <NSCopying>
{
    HMPBServiceReference *_serviceReference;	// 8 = 0x8
    NSData *_uniqueIdentifier;	// 16 = 0x10
}

+ (id)characteristicReferenceWithCharacteristic:(id)arg1;	// IMP=0x000000000020d9fb
+ (id)characteristicReferenceWithData:(id)arg1;	// IMP=0x000000000020d9ae
- (void).cxx_destruct;	// IMP=0x000000000009d5ff
@property(retain, nonatomic) NSData *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) HMPBServiceReference *serviceReference; // @synthesize serviceReference=_serviceReference;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000009d53b
- (unsigned long long)hash;	// IMP=0x000000000009d4ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009d426
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009d388
- (void)copyTo:(id)arg1;	// IMP=0x000000000009d325
- (void)writeTo:(id)arg1;	// IMP=0x000000000009d2c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009d2bb
- (id)dictionaryRepresentation;	// IMP=0x000000000009d20b
- (id)description;	// IMP=0x000000000009d15c
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasServiceReference;

@end

