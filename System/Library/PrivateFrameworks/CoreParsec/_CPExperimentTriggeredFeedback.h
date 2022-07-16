//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPExperimentTriggeredFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSString, _CPCounterfactualInfo;

@interface _CPExperimentTriggeredFeedback : PBCodable <_CPProcessableFeedback, _CPExperimentTriggeredFeedback, NSSecureCoding>
{
    unsigned long long _queryID;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    _CPCounterfactualInfo *_counterfactual;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005bbd5
@property(retain, nonatomic) _CPCounterfactualInfo *counterfactual; // @synthesize counterfactual=_counterfactual;
@property(nonatomic) unsigned long long timestamp;
@property(nonatomic) unsigned long long queryID; // @synthesize queryID=_queryID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005b98d
- (void)writeTo:(id)arg1;	// IMP=0x000000000005b8ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005b89f
- (id)init;	// IMP=0x000000000005b803
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000090208

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end
