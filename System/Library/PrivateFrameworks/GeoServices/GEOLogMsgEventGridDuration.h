//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying>
{
    NSMutableArray *_endStateErrorReasons;	// 8 = 0x8
    int _displayType;	// 16 = 0x10
    unsigned int _durationMs;	// 20 = 0x14
    int _endState;	// 24 = 0x18
    int _previousState;	// 28 = 0x1c
    struct {
        unsigned int has_displayType:1;
        unsigned int has_durationMs:1;
        unsigned int has_endState:1;
        unsigned int has_previousState:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000135b601
+ (Class)endStateErrorReasonType;	// IMP=0x000000000135a3cd
- (void).cxx_destruct;	// IMP=0x000000000135c1ef
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000135bff2
- (unsigned long long)hash;	// IMP=0x000000000135bf25
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000135bda5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000135bb4b
- (void)copyTo:(id)arg1;	// IMP=0x000000000135b9fd
- (void)writeTo:(id)arg1;	// IMP=0x000000000135b82d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000135b81e
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000135b2c4
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000135b2b2
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000135ac4f
- (id)jsonRepresentation;	// IMP=0x000000000135ac40
- (id)dictionaryRepresentation;	// IMP=0x000000000135a722
- (id)description;	// IMP=0x000000000135a673
- (int)StringAsDisplayType:(id)arg1;	// IMP=0x000000000135a60c
- (id)displayTypeAsString:(int)arg1;	// IMP=0x000000000135a5b6
@property(nonatomic) _Bool hasDisplayType;
@property(nonatomic) int displayType;
- (int)StringAsPreviousState:(id)arg1;	// IMP=0x000000000135a4b2
- (id)previousStateAsString:(int)arg1;	// IMP=0x000000000135a44b
@property(nonatomic) _Bool hasPreviousState;
@property(nonatomic) int previousState;
- (id)endStateErrorReasonAtIndex:(unsigned long long)arg1;	// IMP=0x000000000135a3b0
- (unsigned long long)endStateErrorReasonsCount;	// IMP=0x000000000135a393
- (void)addEndStateErrorReason:(id)arg1;	// IMP=0x000000000135a329
- (void)clearEndStateErrorReasons;	// IMP=0x000000000135a30c
@property(retain, nonatomic) NSMutableArray *endStateErrorReasons;
- (int)StringAsEndState:(id)arg1;	// IMP=0x000000000135a234
- (id)endStateAsString:(int)arg1;	// IMP=0x000000000135a1b4
@property(nonatomic) _Bool hasEndState;
@property(nonatomic) int endState;
@property(nonatomic) _Bool hasDurationMs;
@property(nonatomic) unsigned int durationMs;

@end

