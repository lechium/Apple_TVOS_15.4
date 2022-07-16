//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLSedentaryAlarmDataDeprecated : PBCodable
{
    double _firedTime;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    int _type;	// 24 = 0x18
    _Bool _didWake;	// 28 = 0x1c
    _Bool _regularEntry;	// 29 = 0x1d
    CDStruct_b5306035 _has;	// 32 = 0x20
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool didWake; // @synthesize didWake=_didWake;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double firedTime; // @synthesize firedTime=_firedTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006231e5
- (unsigned long long)hash;	// IMP=0x0010000000622f93
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000622ece
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000622e30
- (void)copyTo:(id)arg1;	// IMP=0x0010000000622dd0
- (void)writeTo:(id)arg1;	// IMP=0x0010000000622d39
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000622d2c
- (id)dictionaryRepresentation;	// IMP=0x001000000062278e
- (id)description;	// IMP=0x0010000000622717
@property(nonatomic) _Bool hasTimestamp;
- (int)StringAsType:(id)arg1;	// IMP=0x00100000006225c0
- (id)typeAsString:(int)arg1;	// IMP=0x001000000062251c

@end
