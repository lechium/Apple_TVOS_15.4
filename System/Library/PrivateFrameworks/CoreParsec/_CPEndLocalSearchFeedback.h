//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPEndLocalSearchFeedback-Protocol.h>
#import <CoreParsec/_CPFeedbackUUID-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSString;

@interface _CPEndLocalSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPEndLocalSearchFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_uuid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006bc94
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ba93
- (void)writeTo:(id)arg1;	// IMP=0x000000000006b9f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006b9ec
- (id)init;	// IMP=0x000000000006b941
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000008a090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

