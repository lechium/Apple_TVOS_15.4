//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class NSString;

@interface MLNormalizer <MLModelSpecificationLoader>
{
    int _norm;	// 8 = 0x8
}

+ (id)normFrom:(int)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6;	// IMP=0x000000000014f50a
+ (id)normFrom:(int)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5;	// IMP=0x000000000014f3eb
+ (id)inputDescriptionFrom:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4;	// IMP=0x000000000014f2c9
+ (id)loadModelFromSpecification:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000014ef2b
@property(readonly, nonatomic) int norm; // @synthesize norm=_norm;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000014eafb
- (id)initWith:(int)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 configuration:(id)arg7;	// IMP=0x000000000014e8b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
