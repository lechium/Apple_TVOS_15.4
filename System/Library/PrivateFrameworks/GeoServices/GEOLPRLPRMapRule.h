//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLPRLicensePlateStructure, NSMutableArray, PBDataReader;

@interface GEOLPRLPRMapRule : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _plateTypeIndexes;	// 16 = 0x10
    GEOLPRLicensePlateStructure *_mrLicensePlateStructure;	// 40 = 0x28
    NSMutableArray *_targetChars;	// 48 = 0x30
    NSMutableArray *_valueMappings;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_plateTypeIndexes:1;
        unsigned int read_mrLicensePlateStructure:1;
        unsigned int read_targetChars:1;
        unsigned int read_valueMappings:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000065fa18
+ (Class)valueMappingType;	// IMP=0x000000000065ea4f
+ (Class)targetCharType;	// IMP=0x000000000065e7ea
- (void).cxx_destruct;	// IMP=0x0000000000660cbc
@property(retain, nonatomic) GEOLPRLicensePlateStructure *mrLicensePlateStructure;
@property(readonly, nonatomic) _Bool hasMrLicensePlateStructure;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000660887
- (unsigned long long)hash;	// IMP=0x00000000006607f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006606b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000660253
- (void)copyTo:(id)arg1;	// IMP=0x000000000065ffec
- (void)writeTo:(id)arg1;	// IMP=0x000000000065fc32
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000065fc23
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000065f765
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000065f753
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000065f0a3
- (id)jsonRepresentation;	// IMP=0x000000000065f094
- (id)dictionaryRepresentation;	// IMP=0x000000000065eb0f
- (id)description;	// IMP=0x000000000065ea60
- (id)valueMappingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000065ea1e
- (unsigned long long)valueMappingsCount;	// IMP=0x000000000065e9f2
- (void)addValueMapping:(id)arg1;	// IMP=0x000000000065e93e
- (void)clearValueMappings;	// IMP=0x000000000065e916
@property(retain, nonatomic) NSMutableArray *valueMappings;
- (id)targetCharAtIndex:(unsigned long long)arg1;	// IMP=0x000000000065e7b9
- (unsigned long long)targetCharsCount;	// IMP=0x000000000065e78d
- (void)addTargetChar:(id)arg1;	// IMP=0x000000000065e6d9
- (void)clearTargetChars;	// IMP=0x000000000065e6b1
@property(retain, nonatomic) NSMutableArray *targetChars;
- (void)setPlateTypeIndexes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000065e574
- (unsigned int)plateTypeIndexesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000065e49e
- (void)addPlateTypeIndexes:(unsigned int)arg1;	// IMP=0x000000000065e465
- (void)clearPlateTypeIndexes;	// IMP=0x000000000065e449
@property(readonly, nonatomic) unsigned int *plateTypeIndexes;
@property(readonly, nonatomic) unsigned long long plateTypeIndexesCount;
- (void)dealloc;	// IMP=0x000000000065d895
- (id)initWithData:(id)arg1;	// IMP=0x000000000065d839
- (id)init;	// IMP=0x000000000065d7dd

@end

