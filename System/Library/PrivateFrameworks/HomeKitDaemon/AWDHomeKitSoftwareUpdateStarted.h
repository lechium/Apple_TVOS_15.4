//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitSoftwareUpdateStarted : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _duration;	// 16 = 0x10
    unsigned int _resultErrorCode;	// 20 = 0x14
    _Bool _isAutomaticUpdateEnabled;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int resultErrorCode:1;
        unsigned int isAutomaticUpdateEnabled:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) _Bool isAutomaticUpdateEnabled; // @synthesize isAutomaticUpdateEnabled=_isAutomaticUpdateEnabled;
@property(nonatomic) unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000099761e
- (unsigned long long)hash;	// IMP=0x00000000009975a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000099749e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009973ed
- (void)copyTo:(id)arg1;	// IMP=0x000000000099735f
- (void)writeTo:(id)arg1;	// IMP=0x00000000009972ae
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009972a1
- (id)dictionaryRepresentation;	// IMP=0x00000000009970fb
- (id)description;	// IMP=0x000000000099704c
@property(nonatomic) _Bool hasIsAutomaticUpdateEnabled;
@property(nonatomic) _Bool hasResultErrorCode;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end

