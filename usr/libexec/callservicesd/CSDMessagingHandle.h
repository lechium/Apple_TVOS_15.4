//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TUHandle;

@interface CSDMessagingHandle : PBCodable
{
    NSString *_isoCountryCode;	// 8 = 0x8
    NSString *_normalizedValue;	// 16 = 0x10
    int _type;	// 24 = 0x18
    NSString *_value;	// 32 = 0x20
    struct {
        unsigned int type:1;
    } _has;	// 40 = 0x28
}

+ (id)handleWithTUHandle:(id)arg1;	// IMP=0x0010000000141748
- (void).cxx_destruct;	// IMP=0x001000000003cb6e
- (void);	// IMP=0x001000000003cb5a
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSString *normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003ca5c
- (unsigned long long)hash;	// IMP=0x001000000003c9c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003c895
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003c7ae
- (void)copyTo:(id)arg1;	// IMP=0x001000000003c70b
- (void)writeTo:(id)arg1;	// IMP=0x001000000003c66d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003c660
- (id)dictionaryRepresentation;	// IMP=0x001000000003c295
- (id)description;	// IMP=0x001000000003c1e6
@property(readonly, nonatomic) _Bool hasIsoCountryCode;
@property(readonly, nonatomic) _Bool hasNormalizedValue;
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsType:(id)arg1;	// IMP=0x001000000003c0f8
- (id)typeAsString:(int)arg1;	// IMP=0x001000000003c078
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) TUHandle *tuHandle;

@end

