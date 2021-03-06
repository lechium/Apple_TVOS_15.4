//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AXMDataRegressionModel : NSObject
{
    double _error;	// 8 = 0x8
    double _score;	// 16 = 0x10
    double *_bestFitParameters;	// 24 = 0x18
    double *_x;	// 32 = 0x20
    double *_y;	// 40 = 0x28
    int _n;	// 48 = 0x30
    _Bool _isDisqualified;	// 52 = 0x34
    int _iterations;	// 56 = 0x38
}

+ (id)getModelForX:(double *)arg1 y:(double *)arg2 n:(int)arg3;	// IMP=0x00000000000846a2
@property(readonly, nonatomic) int iterations; // @synthesize iterations=_iterations;
@property(nonatomic) _Bool isDisqualified; // @synthesize isDisqualified=_isDisqualified;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) double error; // @synthesize error=_error;
@property(readonly, nonatomic) int n; // @synthesize n=_n;
@property(readonly, nonatomic) double *bestFitParameters; // @synthesize bestFitParameters=_bestFitParameters;
@property(readonly, nonatomic) double *y; // @synthesize y=_y;
@property(readonly, nonatomic) double *x; // @synthesize x=_x;
- (double)roundNumber:(double)arg1 withSignificantFigures:(unsigned long long)arg2;	// IMP=0x0000000000085a88
- (void)getSMA:(double *)arg1 lookback:(int)arg2;	// IMP=0x0000000000085a21
- (void)sortDataPoints;	// IMP=0x00000000000857cc
@property(readonly, nonatomic) _Bool dataSatisfiesInitialConditions;
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;	// IMP=0x0000000000085783
@property(readonly, nonatomic) NSArray *partialDerivatives;
- (void)disqualifyModelIfNecessary;	// IMP=0x0000000000085741
- (void)getInitialParams:(double *)arg1;	// IMP=0x000000000008570b
@property(readonly, nonatomic) int modelParameterCount;
@property(readonly, nonatomic) CDUnknownBlockType modelFunction;
- (void)computeScore;	// IMP=0x00000000000855ff
- (void)getDiagonal:(double *)arg1 size:(int)arg2 result:(double *)arg3;	// IMP=0x00000000000855b7
- (int)getMatrixInverse:(double *)arg1 size:(int)arg2 pivot:(int *)arg3 tmp:(double *)arg4 result:(double *)arg5;	// IMP=0x000000000008551c
- (void)getJacobianForParameters:(double *)arg1 gradient:(double *)arg2 result:(double *)arg3;	// IMP=0x0000000000085464
- (void)getGradientForX:(double)arg1 parameterValues:(double *)arg2 result:(double *)arg3;	// IMP=0x000000000008537d
- (void)getResidualsVector:(double *)arg1 result:(double *)arg2;	// IMP=0x00000000000852e1
- (void)getIdentityMatrixWithSize:(int)arg1 scalar:(double)arg2 result:(double *)arg3;	// IMP=0x00000000000852ae
- (double)magnitude:(double *)arg1 size:(int)arg2;	// IMP=0x0000000000085281
- (void)printMatrix:(double *)arg1 rows:(int)arg2 cols:(int)arg3;	// IMP=0x0000000000085141
- (double)fitDataWithModelParams:(double *)arg1 finalParams:(double *)arg2;	// IMP=0x0000000000084a46
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) NSString *modelDescription;
- (void)dealloc;	// IMP=0x000000000008464e
- (id)initWithXValues:(double *)arg1 yValues:(double *)arg2 count:(int)arg3;	// IMP=0x0000000000084584

@end

