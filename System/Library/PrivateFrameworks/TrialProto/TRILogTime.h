//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@interface TRILogTime : PBCodable <NSCopying>
{
    unsigned long long _secondsSince1970;	// 8 = 0x8
    int _minutesDstOffset;	// 16 = 0x10
    int _secondsFromUtc;	// 20 = 0x14
    struct {
        unsigned int secondsSince1970:1;
        unsigned int minutesDstOffset:1;
        unsigned int secondsFromUtc:1;
    } _has;	// 24 = 0x18
}

+ (id)logTimeFromDate:(id)arg1;	// IMP=0x0000000000025d60
@property(nonatomic) int minutesDstOffset; // @synthesize minutesDstOffset=_minutesDstOffset;
@property(nonatomic) int secondsFromUtc; // @synthesize secondsFromUtc=_secondsFromUtc;
@property(nonatomic) unsigned long long secondsSince1970; // @synthesize secondsSince1970=_secondsSince1970;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001896f
- (unsigned long long)hash;	// IMP=0x000000000001890c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018839
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000187a1
- (void)copyTo:(id)arg1;	// IMP=0x000000000001872c
- (void)writeTo:(id)arg1;	// IMP=0x000000000001869b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001868e
- (id)dictionaryRepresentation;	// IMP=0x000000000001822a
- (id)description;	// IMP=0x000000000001817b
@property(nonatomic) _Bool hasMinutesDstOffset;
@property(nonatomic) _Bool hasSecondsFromUtc;
@property(nonatomic) _Bool hasSecondsSince1970;

@end

