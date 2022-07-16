//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class NSString;

@interface MLGLMRegression <MLModelSpecificationLoader>
{
    struct vector<double, std::allocator<double>> intercept;	// 8 = 0x8
    struct vector<std::vector<double>, std::allocator<std::vector<double>>> weights;	// 32 = 0x20
    int postEvalTransForm;	// 56 = 0x38
    struct shared_ptr<CoreML::Specification::Model> m_spec;	// 64 = 0x40
}

+ (id)loadModelFromSpecification:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000cdc96
- (id).cxx_construct;	// IMP=0x00000000000cd8d0
- (void).cxx_destruct;	// IMP=0x00000000000cd882
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000cd400
- (id)initWithLRSpec:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000cce09
- (id)initWithSpecification:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ccdf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

