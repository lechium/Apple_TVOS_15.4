//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBAnnouncementRecord-Protocol.h>

@class NSString, _INPBHomeFilter;

@interface _INPBAnnouncementRecord : PBCodable <_INPBAnnouncementRecord, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int duration:1;
    } _has;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    _INPBHomeFilter *_originator;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000481287
- (void).cxx_destruct;	// IMP=0x0000000000480ff8
@property(retain, nonatomic) _INPBHomeFilter *originator; // @synthesize originator=_originator;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)dictionaryRepresentation;	// IMP=0x0000000000480e52
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004809d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004808e6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000480854
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000480755
- (void)writeTo:(id)arg1;	// IMP=0x000000000048065f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000480652
@property(readonly, nonatomic) _Bool hasOriginator;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

