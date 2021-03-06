//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PVContext;
@protocol PVVisionIntegrating;

@interface PVVisionAnalyzer : NSObject
{
    id <PVVisionIntegrating> _visionIntegration;	// 8 = 0x8
    PVContext *_context;	// 16 = 0x10
    NSDictionary *_detectionOptions;	// 24 = 0x18
    NSDictionary *_detailsExtractionOptions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000039e5
- (id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000001f9a
- (float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)arg1;	// IMP=0x0000000000001f18
- (long long)_expressionTypeFromExpressionString:(id)arg1;	// IMP=0x0000000000001e1e
- (struct CGPoint)centroidForLandmarkRegion:(id)arg1;	// IMP=0x0000000000001d74
- (void)configureRequest:(id)arg1;	// IMP=0x0000000000001d09
- (id)initWithContext:(id)arg1 visionIntegration:(id)arg2;	// IMP=0x0000000000001c70

@end

