//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSectionRankingFeedback-Protocol.h>

@class NSArray, NSData, NSString, _CPResultSectionForFeedback;

@interface _CPSectionRankingFeedback : PBCodable <_CPProcessableFeedback, _CPSectionRankingFeedback, NSSecureCoding>
{
    unsigned int _localSectionPosition;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    NSArray *_results;	// 24 = 0x18
    _CPResultSectionForFeedback *_section;	// 32 = 0x20
    double _personalizationScore;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000078215
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) unsigned int localSectionPosition; // @synthesize localSectionPosition=_localSectionPosition;
@property(retain, nonatomic) _CPResultSectionForFeedback *section; // @synthesize section=_section;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077d60
- (void)writeTo:(id)arg1;	// IMP=0x0000000000077b2b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000077b1e
- (id)resultsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000077acb
- (unsigned long long)resultsCount;	// IMP=0x0000000000077aae
- (void)addResults:(id)arg1;	// IMP=0x0000000000077a34
- (void)clearResults;	// IMP=0x0000000000077a17
- (id)init;	// IMP=0x000000000007796c
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000007e1e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

