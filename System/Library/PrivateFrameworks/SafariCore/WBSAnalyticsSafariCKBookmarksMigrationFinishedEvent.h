//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@class NSString;

@interface WBSAnalyticsSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying>
{
    unsigned long long _duration;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    NSString *_errorCode;	// 24 = 0x18
    NSString *_errorDomain;	// 32 = 0x20
    int _migratorType;	// 40 = 0x28
    int _result;	// 44 = 0x2c
    struct {
        unsigned int duration:1;
        unsigned int timestamp:1;
        unsigned int migratorType:1;
        unsigned int result:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000033719
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000335db
- (unsigned long long)hash;	// IMP=0x000000000003350a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033399
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033280
- (void)copyTo:(id)arg1;	// IMP=0x00000000000331a8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000330bd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000330b0
- (id)dictionaryRepresentation;	// IMP=0x0000000000032a7f
- (id)description;	// IMP=0x00000000000329d0
@property(readonly, nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
- (int)StringAsResult:(id)arg1;	// IMP=0x0000000000032944
- (id)resultAsString:(int)arg1;	// IMP=0x00000000000328ef
@property(nonatomic) _Bool hasResult;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) _Bool hasDuration;
- (int)StringAsMigratorType:(id)arg1;	// IMP=0x00000000000327dd
- (id)migratorTypeAsString:(int)arg1;	// IMP=0x0000000000032788
@property(nonatomic) _Bool hasMigratorType;
@property(nonatomic) int migratorType; // @synthesize migratorType=_migratorType;
@property(nonatomic) _Bool hasTimestamp;

@end

