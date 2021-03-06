//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSString;

@interface HMPBMetadataService : PBCodable <NSCopying>
{
    NSString *_desc;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000025d489
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000025d3dc
- (unsigned long long)hash;	// IMP=0x000000000025d38f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025d2c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025d229
- (void)copyTo:(id)arg1;	// IMP=0x000000000025d1c6
- (void)writeTo:(id)arg1;	// IMP=0x000000000025d169
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025d15c
- (id)dictionaryRepresentation;	// IMP=0x000000000025d0d9
- (id)description;	// IMP=0x000000000025d02a
@property(readonly, nonatomic) _Bool hasDesc;
@property(readonly, nonatomic) _Bool hasType;

@end

