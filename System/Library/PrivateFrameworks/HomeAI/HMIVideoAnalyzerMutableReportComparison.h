//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMIVideoAnalyzerMutableReportComparison : HMFObject
{
    float _precision;	// 8 = 0x8
    float _recall;	// 12 = 0xc
    NSArray *_truePositiveKeys;	// 16 = 0x10
    NSArray *_falseNegativeKeys;	// 24 = 0x18
    NSArray *_falsePositiveKeys;	// 32 = 0x20
    long long _truePositive;	// 40 = 0x28
    long long _falseNegative;	// 48 = 0x30
    long long _falsePositive;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000037c54
@property(readonly) long long falsePositive; // @synthesize falsePositive=_falsePositive;
@property(readonly) long long falseNegative; // @synthesize falseNegative=_falseNegative;
@property(readonly) long long truePositive; // @synthesize truePositive=_truePositive;
@property(readonly) NSArray *falsePositiveKeys; // @synthesize falsePositiveKeys=_falsePositiveKeys;
@property(readonly) NSArray *falseNegativeKeys; // @synthesize falseNegativeKeys=_falseNegativeKeys;
@property(readonly) NSArray *truePositiveKeys; // @synthesize truePositiveKeys=_truePositiveKeys;
@property(readonly) float recall; // @synthesize recall=_recall;
@property(readonly) float precision; // @synthesize precision=_precision;
- (id)attributeDescriptions;	// IMP=0x0000000000037921
- (id)description;	// IMP=0x0000000000037917
- (id)initWithTruePositiveKeys:(id)arg1 falseNegativeKeys:(id)arg2 falsePositiveKeys:(id)arg3 groupByKey:(_Bool)arg4;	// IMP=0x000000000003756c

@end
