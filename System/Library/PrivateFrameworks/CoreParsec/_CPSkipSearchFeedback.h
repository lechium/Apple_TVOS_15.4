//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSkipSearchFeedback-Protocol.h>

@class NSData, NSString;

@interface _CPSkipSearchFeedback : PBCodable <_CPProcessableFeedback, _CPSkipSearchFeedback, NSSecureCoding>
{
    int _triggerEvent;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    NSString *_input;	// 24 = 0x18
    NSString *_experimentId;	// 32 = 0x20
    NSString *_treatmentId;	// 40 = 0x28
    NSString *_experimentNamespaceId;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000064502
@property(copy, nonatomic) NSString *experimentNamespaceId; // @synthesize experimentNamespaceId=_experimentNamespaceId;
@property(copy, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(copy, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063ea4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000063d1b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000063d0e
- (id)init;	// IMP=0x0000000000063bb7
- (id)initWithTriggerEvent:(int)arg1 input:(id)arg2 experimentId:(id)arg3 treatmentId:(id)arg4;	// IMP=0x000000000008dd97
- (id)initWithTriggerEvent:(int)arg1 input:(id)arg2;	// IMP=0x000000000008dd13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

