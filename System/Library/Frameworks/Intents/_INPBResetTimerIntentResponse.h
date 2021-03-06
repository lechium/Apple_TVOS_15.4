//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBResetTimerIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBResetTimerIntentResponse : PBCodable <_INPBResetTimerIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_resetTimers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000217f15
+ (Class)resetTimersType;	// IMP=0x0000000000217f04
- (void).cxx_destruct;	// IMP=0x0000000000217d42
@property(copy, nonatomic) NSArray *resetTimers; // @synthesize resetTimers=_resetTimers;
- (id)dictionaryRepresentation;	// IMP=0x0000000000217b15
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000217976
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002178f4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000217862
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000217763
- (void)writeTo:(id)arg1;	// IMP=0x0000000000217633
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000217626
- (id)resetTimersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000217609
@property(readonly, nonatomic) unsigned long long resetTimersCount;
- (void)addResetTimers:(id)arg1;	// IMP=0x0000000000217572
- (void)clearResetTimers;	// IMP=0x0000000000217555

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

