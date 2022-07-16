//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, NSArray, NSString;

@interface PPScoreInterpreterCoreMLModel : NSObject
{
    NSString *_coreMLModelPath;	// 8 = 0x8
    MLModel *_coreMLModel;	// 16 = 0x10
    NSString *_coreMLModelOutputName;	// 24 = 0x18
    NSArray *_coreMLInputFeatures;	// 32 = 0x20
    _Bool _hasOutputIndexedSubscript;	// 40 = 0x28
    NSArray *_argumentsToEvaluate;	// 48 = 0x30
}

+ (double)scoreForOutputValue:(id)arg1 outputIndexedSubscript:(long long)arg2;	// IMP=0x00000000000a540b
- (void).cxx_destruct;	// IMP=0x00000000000a52f3
@property(readonly, nonatomic) _Bool hasOutputIndexedSubscript; // @synthesize hasOutputIndexedSubscript=_hasOutputIndexedSubscript;
@property(readonly, nonatomic) NSArray *argumentsToEvaluate; // @synthesize argumentsToEvaluate=_argumentsToEvaluate;
- (double)predictionForEvaluatedFeatures:(id)arg1 withOutputIndexedSubscript:(long long)arg2;	// IMP=0x00000000000a5072
- (id)featureAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a505c
@property(readonly, nonatomic) unsigned long long numberOfFeatures;
- (void)loadInstanceVariablesFromFeatures:(id)arg1 outputSpecification:(id)arg2;	// IMP=0x00000000000a4e26
- (void)loadCoreMLModelIfNotAlreadyLoaded;	// IMP=0x00000000000a4c80
- (id)init;	// IMP=0x00000000000a4c7a
- (id)initWithModelPath:(id)arg1 features:(id)arg2 outputSpecification:(id)arg3;	// IMP=0x00000000000a4b90

@end

