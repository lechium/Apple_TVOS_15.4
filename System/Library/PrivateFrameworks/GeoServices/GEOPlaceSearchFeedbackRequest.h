//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionGUID;	// 8 = 0x8
    long long _businessID;	// 24 = 0x18
    double _timestamp;	// 32 = 0x20
    int _feedbackType;	// 40 = 0x28
    int _localSearchProviderID;	// 44 = 0x2c
    int _numberOfResults;	// 48 = 0x30
    int _positionInResults;	// 52 = 0x34
    int _sequenceNumber;	// 56 = 0x38
    struct {
        unsigned int has_sessionGUID:1;
        unsigned int has_businessID:1;
        unsigned int has_timestamp:1;
        unsigned int has_feedbackType:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_numberOfResults:1;
        unsigned int has_positionInResults:1;
        unsigned int has_sequenceNumber:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000006ecea0
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006ee0f4
- (unsigned long long)hash;	// IMP=0x00000000006edeee
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006edd01
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006edbe7
- (void)copyTo:(id)arg1;	// IMP=0x00000000006edacd
- (Class)responseClass;	// IMP=0x00000000006edabc
- (unsigned int)requestTypeCode;	// IMP=0x00000000006edab1
- (void)writeTo:(id)arg1;	// IMP=0x00000000006ed948
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006ed2e4
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000006ece9a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000006ece88
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000006eca1b
- (id)jsonRepresentation;	// IMP=0x00000000006eca0c
- (id)dictionaryRepresentation;	// IMP=0x00000000006ec694
- (id)description;	// IMP=0x00000000006ec5e5
@property(nonatomic) _Bool hasLocalSearchProviderID;
@property(nonatomic) int localSearchProviderID;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) int sequenceNumber;
@property(nonatomic) _Bool hasPositionInResults;
@property(nonatomic) int positionInResults;
@property(nonatomic) _Bool hasNumberOfResults;
@property(nonatomic) int numberOfResults;
- (int)StringAsFeedbackType:(id)arg1;	// IMP=0x00000000006ec3cc
- (id)feedbackTypeAsString:(int)arg1;	// IMP=0x00000000006ec34d
@property(nonatomic) _Bool hasFeedbackType;
@property(nonatomic) int feedbackType;
@property(nonatomic) _Bool hasBusinessID;
@property(nonatomic) long long businessID;
@property(nonatomic) _Bool hasSessionGUID;
@property(nonatomic) struct GEOSessionID sessionGUID;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;

@end
