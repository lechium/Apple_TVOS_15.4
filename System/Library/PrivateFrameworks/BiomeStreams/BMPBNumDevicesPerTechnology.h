//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBNumDevicesPerTechnology : PBCodable <NSCopying>
{
    int _number;	// 8 = 0x8
    NSString *_technologyString;	// 16 = 0x10
    struct {
        unsigned int number:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000039fd
@property(nonatomic) int number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *technologyString; // @synthesize technologyString=_technologyString;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000003965
- (unsigned long long)hash;	// IMP=0x0000000000003912
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003851
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000037b9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003756
- (void)writeTo:(id)arg1;	// IMP=0x00000000000036f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000036e5
- (id)dictionaryRepresentation;	// IMP=0x0000000000003414
- (id)description;	// IMP=0x0000000000003365
@property(nonatomic) _Bool hasNumber;
@property(readonly, nonatomic) _Bool hasTechnologyString;

@end
