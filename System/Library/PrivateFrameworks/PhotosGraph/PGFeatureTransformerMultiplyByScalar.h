//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGFeatureTransformerMultiplyByScalar
{
    float _scalarToMultiply;	// 8 = 0x8
}

+ (id)instanceWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000038f2e1
+ (id)name;	// IMP=0x000000000038f2d4
@property(readonly, nonatomic) float scalarToMultiply; // @synthesize scalarToMultiply=_scalarToMultiply;
- (id)applyTransformationToFloatVector:(id)arg1 error:(id *)arg2;	// IMP=0x000000000038f260
- (id)initWithScalarToMultiply:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;	// IMP=0x000000000038f216
- (id)initWithScalarToMultiply:(float)arg1;	// IMP=0x000000000038f1fd

@end

