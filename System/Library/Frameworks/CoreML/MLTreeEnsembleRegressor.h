//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLCompiledModelLoader-Protocol.h>
#import <CoreML/MLModelSpecificationLoader-Protocol.h>
#import <CoreML/MLSpecificationCompiler-Protocol.h>

@class NSArray, NSString;

@interface MLTreeEnsembleRegressor <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler>
{
    shared_ptr_0841df90 _mmapped_model;	// 8 = 0x8
    vector_ce5fcef0 _cached_model;	// 24 = 0x18
    unsigned long long num_dimensions;	// 48 = 0x30
    NSArray *output_classes;	// 56 = 0x38
}

+ (id)loadModelFromCompiledArchive:(void *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;	// IMP=0x000000000009bb69
+ (id)compiledVersionForSpecification:(void *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009bb2f
+ (id)compileSpecification:(void *)arg1 toArchive:(void *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000009b87c
+ (id)loadModelFromSpecification:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009b84c
+ (id)loadModelFromSpecificationWithCompilationOptions:(void *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009b1df
- (id).cxx_construct;	// IMP=0x000000000009b1b4
- (void).cxx_destruct;	// IMP=0x000000000009b16b
- (void)vectorRegress:(double *)arg1 dest:(double *)arg2;	// IMP=0x000000000009b13f
- (double)scalarRegress:(double *)arg1;	// IMP=0x000000000009b0fd
- (double)scalarRegress:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009afc6
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009adf6
- (const char *)_model_data;	// IMP=0x000000000009adcb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
