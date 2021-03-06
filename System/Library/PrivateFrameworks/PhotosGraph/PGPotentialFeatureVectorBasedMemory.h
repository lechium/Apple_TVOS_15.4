//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSIndexSet, NSSet;

@interface PGPotentialFeatureVectorBasedMemory
{
    _Bool _isBirthday;	// 8 = 0x8
    NSDictionary *_matchingKeywords;	// 16 = 0x10
    NSDictionary *_referenceKeywords;	// 24 = 0x18
    NSDictionary *_momentKeywords;	// 32 = 0x20
    NSSet *_personNodes;	// 40 = 0x28
    NSIndexSet *_sortedCriteria;	// 48 = 0x30
    double _matchingScore;	// 56 = 0x38
    double _contentScore;	// 64 = 0x40
    double _neighborScore;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000540c36
@property double neighborScore; // @synthesize neighborScore=_neighborScore;
@property double contentScore; // @synthesize contentScore=_contentScore;
@property double matchingScore; // @synthesize matchingScore=_matchingScore;
@property(retain) NSIndexSet *sortedCriteria; // @synthesize sortedCriteria=_sortedCriteria;
@property _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property(retain) NSSet *personNodes; // @synthesize personNodes=_personNodes;
@property(retain) NSDictionary *momentKeywords; // @synthesize momentKeywords=_momentKeywords;
@property(retain) NSDictionary *referenceKeywords; // @synthesize referenceKeywords=_referenceKeywords;
@property(retain) NSDictionary *matchingKeywords; // @synthesize matchingKeywords=_matchingKeywords;

@end

