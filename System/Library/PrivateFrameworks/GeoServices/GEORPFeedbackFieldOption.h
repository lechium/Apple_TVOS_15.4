//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPFeedbackFieldOptionAnnotations, NSMutableArray, NSString, PBDataReader;

@interface GEORPFeedbackFieldOption : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEORPFeedbackFieldOptionAnnotations *_annotations;	// 16 = 0x10
    NSString *_defaultText;	// 24 = 0x18
    NSString *_localizedText;	// 32 = 0x20
    NSMutableArray *_tags;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _key;	// 60 = 0x3c
    struct {
        unsigned int has_key:1;
        unsigned int read_annotations:1;
        unsigned int read_defaultText:1;
        unsigned int read_localizedText:1;
        unsigned int read_tags:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000db3902
+ (Class)tagType;	// IMP=0x0000000000db1282
- (void).cxx_destruct;	// IMP=0x0000000000db49f1
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000db47ed
- (unsigned long long)hash;	// IMP=0x0000000000db4721
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000db4594
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000db420a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000db405d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000db3d39
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000db3d2a
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000db3487
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000db3475
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000db1ff3
- (id)jsonRepresentation;	// IMP=0x0000000000db1fe4
- (id)dictionaryRepresentation;	// IMP=0x0000000000db1481
- (id)description;	// IMP=0x0000000000db13d2
@property(retain, nonatomic) GEORPFeedbackFieldOptionAnnotations *annotations;
@property(readonly, nonatomic) _Bool hasAnnotations;
- (id)tagAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000db1251
- (unsigned long long)tagsCount;	// IMP=0x0000000000db1225
- (void)addTag:(id)arg1;	// IMP=0x0000000000db1171
- (void)clearTags;	// IMP=0x0000000000db1149
@property(retain, nonatomic) NSMutableArray *tags;
@property(retain, nonatomic) NSString *defaultText;
@property(readonly, nonatomic) _Bool hasDefaultText;
@property(retain, nonatomic) NSString *localizedText;
@property(readonly, nonatomic) _Bool hasLocalizedText;
- (int)StringAsKey:(id)arg1;	// IMP=0x0000000000daf860
- (id)keyAsString:(int)arg1;	// IMP=0x0000000000daef6c
@property(nonatomic) _Bool hasKey;
@property(nonatomic) int key;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000daeea9
- (id)init;	// IMP=0x0000000000daee4d

@end

