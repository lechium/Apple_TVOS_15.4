//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCBAEngagementFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSString;

@interface _CPCBAEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPCBAEngagementFeedback, NSSecureCoding>
{
    int _cbaType;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    unsigned long long _queryId;	// 24 = 0x18
    NSString *_url;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003b827
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int cbaType; // @synthesize cbaType=_cbaType;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b597
- (void)writeTo:(id)arg1;	// IMP=0x000000000003b4a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003b497
- (id)init;	// IMP=0x000000000003b3cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

