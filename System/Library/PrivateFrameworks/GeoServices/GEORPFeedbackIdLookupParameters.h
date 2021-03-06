//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackIdLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _feedbackComponentTypes;	// 24 = 0x18
    NSMutableArray *_feedbackIds;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackComponentTypes:1;
        unsigned int read_feedbackIds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001247418
+ (Class)feedbackIdType;	// IMP=0x000000000124634c
- (void).cxx_destruct;	// IMP=0x00000000012482d3
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000001248282
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001247fba
- (unsigned long long)hash;	// IMP=0x0000000001247f6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001247e88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001247b80
- (void)copyTo:(id)arg1;	// IMP=0x00000000012479ed
- (void)writeTo:(id)arg1;	// IMP=0x00000000012476fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012476ed
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001247165
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001247153
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001246c3a
- (id)jsonRepresentation;	// IMP=0x0000000001246b28
- (id)dictionaryRepresentation;	// IMP=0x00000000012467fa
- (id)description;	// IMP=0x000000000124674b
- (int)StringAsFeedbackComponentTypes:(id)arg1;	// IMP=0x000000000124665c
- (id)feedbackComponentTypesAsString:(int)arg1;	// IMP=0x00000000012465c3
- (void)setFeedbackComponentTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000012465a1
- (int)feedbackComponentTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000012464cb
- (void)addFeedbackComponentType:(int)arg1;	// IMP=0x0000000001246492
- (void)clearFeedbackComponentTypes;	// IMP=0x0000000001246476
@property(readonly, nonatomic) int *feedbackComponentTypes;
@property(readonly, nonatomic) unsigned long long feedbackComponentTypesCount;
- (id)feedbackIdAtIndex:(unsigned long long)arg1;	// IMP=0x000000000124631b
- (unsigned long long)feedbackIdsCount;	// IMP=0x00000000012462ef
- (void)addFeedbackId:(id)arg1;	// IMP=0x000000000124623b
- (void)clearFeedbackIds;	// IMP=0x0000000001246213
@property(retain, nonatomic) NSMutableArray *feedbackIds;
- (void)dealloc;	// IMP=0x0000000001245a7b
- (id)initWithData:(id)arg1;	// IMP=0x0000000001245a1f
- (id)init;	// IMP=0x00000000012459c3

@end

