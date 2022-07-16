//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying>
{
    NSMutableArray *_layoutFields;	// 8 = 0x8
    int _formType;	// 16 = 0x10
    unsigned int _radius;	// 20 = 0x14
    unsigned int _ttl;	// 24 = 0x18
    _Bool _enabled;	// 28 = 0x1c
    struct {
        unsigned int has_formType:1;
        unsigned int has_radius:1;
        unsigned int has_ttl:1;
        unsigned int has_enabled:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000107af76
+ (Class)layoutFieldType;	// IMP=0x000000000107a119
- (void).cxx_destruct;	// IMP=0x000000000107bc7a
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000107ba7d
- (unsigned long long)hash;	// IMP=0x000000000107b9af
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000107b824
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000107b5ca
- (void)copyTo:(id)arg1;	// IMP=0x000000000107b47c
- (void)writeTo:(id)arg1;	// IMP=0x000000000107b2ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000107b29c
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000107ad6f
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000107ad5d
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000107a77f
- (id)jsonRepresentation;	// IMP=0x000000000107a770
- (id)dictionaryRepresentation;	// IMP=0x000000000107a2a0
- (id)description;	// IMP=0x000000000107a1f1
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) unsigned int radius;
@property(nonatomic) _Bool hasEnabled;
@property(nonatomic) _Bool enabled;
- (id)layoutFieldAtIndex:(unsigned long long)arg1;	// IMP=0x000000000107a0fc
- (unsigned long long)layoutFieldsCount;	// IMP=0x000000000107a0df
- (void)addLayoutField:(id)arg1;	// IMP=0x000000000107a075
- (void)clearLayoutFields;	// IMP=0x000000000107a058
@property(retain, nonatomic) NSMutableArray *layoutFields;
- (int)StringAsFormType:(id)arg1;	// IMP=0x0000000001079ebc
- (id)formTypeAsString:(int)arg1;	// IMP=0x0000000001079def
@property(nonatomic) _Bool hasFormType;
@property(nonatomic) int formType;
@property(nonatomic) _Bool hasTtl;
@property(nonatomic) unsigned int ttl;

@end

