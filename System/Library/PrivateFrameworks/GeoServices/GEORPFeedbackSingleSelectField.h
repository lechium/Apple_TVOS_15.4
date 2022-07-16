//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPFeedbackFieldOption, NSMutableArray, PBDataReader;

@interface GEORPFeedbackSingleSelectField : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_options;	// 16 = 0x10
    GEORPFeedbackFieldOption *_selected;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_options:1;
        unsigned int read_selected:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000dcb6c3
+ (Class)optionsType;	// IMP=0x0000000000dcad60
- (void).cxx_destruct;	// IMP=0x0000000000dcc0cc
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000dcbf25
- (unsigned long long)hash;	// IMP=0x0000000000dcbec9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dcbdd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dcbac4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000dcb97d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000dcb6df
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000dcb6d0
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000dcb5b7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000dcb5a5
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000dcb27e
- (id)jsonRepresentation;	// IMP=0x0000000000dcb26f
- (id)dictionaryRepresentation;	// IMP=0x0000000000dcaf5f
- (id)description;	// IMP=0x0000000000dcaeb0
@property(retain, nonatomic) GEORPFeedbackFieldOption *selected;
@property(readonly, nonatomic) _Bool hasSelected;
- (id)optionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dcad2f
- (unsigned long long)optionsCount;	// IMP=0x0000000000dcad03
- (void)addOptions:(id)arg1;	// IMP=0x0000000000dcac4f
- (void)clearOptions;	// IMP=0x0000000000dcac27
@property(retain, nonatomic) NSMutableArray *options;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000dca431
- (id)init;	// IMP=0x0000000000dca3d5

@end

