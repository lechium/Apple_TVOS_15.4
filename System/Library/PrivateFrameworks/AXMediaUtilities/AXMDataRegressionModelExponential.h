//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXMDataRegressionModelExponential
{
}

- (_Bool)dataSatisfiesInitialConditions;	// IMP=0x000000000000f2f0
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;	// IMP=0x000000000000f1b6
- (id)partialDerivatives;	// IMP=0x000000000000f0fe
- (void)getInitialParams:(double *)arg1;	// IMP=0x000000000000ef86
- (int)modelParameterCount;	// IMP=0x000000000000ef7b
- (CDUnknownBlockType)modelFunction;	// IMP=0x000000000000ef50
- (id)modelDescription;	// IMP=0x000000000000eedd

@end

