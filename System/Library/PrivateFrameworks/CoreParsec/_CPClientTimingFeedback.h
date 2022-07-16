//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPClientTimingFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSString;

@interface _CPClientTimingFeedback : PBCodable <_CPProcessableFeedback, _CPClientTimingFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_input;	// 16 = 0x10
    NSString *_eventName;	// 24 = 0x18
    unsigned long long _queryId;	// 32 = 0x20
    unsigned long long _nanosecondInterval;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000063b86
@property(nonatomic) unsigned long long nanosecondInterval; // @synthesize nanosecondInterval=_nanosecondInterval;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063793
- (void)writeTo:(id)arg1;	// IMP=0x000000000006365e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000063651
- (id)init;	// IMP=0x0000000000063550
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000008a4c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end
