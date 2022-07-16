//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMPBAccessoryReference, NSData;

@interface HMPBServiceReference : PBCodable <NSCopying>
{
    HMPBAccessoryReference *_accessoryReference;	// 8 = 0x8
    NSData *_uniqueIdentifier;	// 16 = 0x10
}

+ (id)serviceReferenceWithService:(id)arg1;	// IMP=0x0000000000213841
+ (id)serviceReferenceWithData:(id)arg1;	// IMP=0x00000000002137f4
- (void).cxx_destruct;	// IMP=0x00000000000afe05
@property(retain, nonatomic) NSData *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) HMPBAccessoryReference *accessoryReference; // @synthesize accessoryReference=_accessoryReference;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000afd41
- (unsigned long long)hash;	// IMP=0x00000000000afcf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000afc2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000afb8e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000afb2b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000aface
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000afac1
- (id)dictionaryRepresentation;	// IMP=0x00000000000afa11
- (id)description;	// IMP=0x00000000000af962
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasAccessoryReference;

@end
