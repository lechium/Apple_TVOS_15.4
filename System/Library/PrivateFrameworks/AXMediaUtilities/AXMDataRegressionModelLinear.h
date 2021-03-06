//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXMDataRegressionModelLinear
{
    double _rSquared;	// 56 = 0x38
}

@property(readonly, nonatomic) double rSquared; // @synthesize rSquared=_rSquared;
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;	// IMP=0x000000000007d02b
- (id)partialDerivatives;	// IMP=0x000000000007cf98
- (void)getInitialParams:(double *)arg1;	// IMP=0x000000000007cf87
- (int)modelParameterCount;	// IMP=0x000000000007cf7c
- (CDUnknownBlockType)modelFunction;	// IMP=0x000000000007cf60
- (double)fitDataWithModelParams:(double *)arg1 finalParams:(double *)arg2;	// IMP=0x000000000007cd7f
- (id)modelDescription;	// IMP=0x000000000007cd0c

@end

