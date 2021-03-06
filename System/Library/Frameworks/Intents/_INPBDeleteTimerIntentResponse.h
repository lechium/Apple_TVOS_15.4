//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDeleteTimerIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBDeleteTimerIntentResponse : PBCodable <_INPBDeleteTimerIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_deletedTimers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bcf87
+ (Class)deletedTimersType;	// IMP=0x00000000000bcf76
- (void).cxx_destruct;	// IMP=0x00000000000bcdb4
@property(copy, nonatomic) NSArray *deletedTimers; // @synthesize deletedTimers=_deletedTimers;
- (id)dictionaryRepresentation;	// IMP=0x00000000000bcb87
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bc9e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bc966
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bc8d4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bc7d5
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bc6a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bc698
- (id)deletedTimersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000bc67b
@property(readonly, nonatomic) unsigned long long deletedTimersCount;
- (void)addDeletedTimers:(id)arg1;	// IMP=0x00000000000bc5e4
- (void)clearDeletedTimers;	// IMP=0x00000000000bc5c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

