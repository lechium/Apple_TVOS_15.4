//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPauseTimerIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBPauseTimerIntentResponse : PBCodable <_INPBPauseTimerIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_pausedTimers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e4054
+ (Class)pausedTimersType;	// IMP=0x00000000002e4043
- (void).cxx_destruct;	// IMP=0x00000000002e3e81
@property(copy, nonatomic) NSArray *pausedTimers; // @synthesize pausedTimers=_pausedTimers;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e3c54
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e3ab5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e3a33
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e39a1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e38a2
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e3772
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e3765
- (id)pausedTimersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002e3748
@property(readonly, nonatomic) unsigned long long pausedTimersCount;
- (void)addPausedTimers:(id)arg1;	// IMP=0x00000000002e36b1
- (void)clearPausedTimers;	// IMP=0x00000000002e3694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
