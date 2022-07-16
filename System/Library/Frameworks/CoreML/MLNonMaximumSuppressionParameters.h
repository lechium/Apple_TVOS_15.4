//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MLNonMaximumSuppressionParameters : NSObject
{
    _Bool _perClass;	// 8 = 0x8
    int _suppressionMethod;	// 12 = 0xc
    double _iouThreshold;	// 16 = 0x10
    double _confidenceThreshold;	// 24 = 0x18
    unsigned long long _minBoxes;	// 32 = 0x20
    long long _maxBoxes;	// 40 = 0x28
    unsigned long long _numClasses;	// 48 = 0x30
    NSString *_confidenceInputFeatureName;	// 56 = 0x38
    NSString *_coordinatesInputFeatureName;	// 64 = 0x40
    NSString *_iouThresholdInputFeatureName;	// 72 = 0x48
    NSString *_confidenceThresholdInputFeatureName;	// 80 = 0x50
    NSString *_confidenceOutputFeatureName;	// 88 = 0x58
    NSString *_coordinatesOutputFeatureName;	// 96 = 0x60
    NSArray *_labelNames;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001202d1
@property(retain) NSArray *labelNames; // @synthesize labelNames=_labelNames;
@property(retain) NSString *coordinatesOutputFeatureName; // @synthesize coordinatesOutputFeatureName=_coordinatesOutputFeatureName;
@property(retain) NSString *confidenceOutputFeatureName; // @synthesize confidenceOutputFeatureName=_confidenceOutputFeatureName;
@property(retain) NSString *confidenceThresholdInputFeatureName; // @synthesize confidenceThresholdInputFeatureName=_confidenceThresholdInputFeatureName;
@property(retain) NSString *iouThresholdInputFeatureName; // @synthesize iouThresholdInputFeatureName=_iouThresholdInputFeatureName;
@property(retain) NSString *coordinatesInputFeatureName; // @synthesize coordinatesInputFeatureName=_coordinatesInputFeatureName;
@property(retain) NSString *confidenceInputFeatureName; // @synthesize confidenceInputFeatureName=_confidenceInputFeatureName;
@property _Bool perClass; // @synthesize perClass=_perClass;
@property unsigned long long numClasses; // @synthesize numClasses=_numClasses;
@property long long maxBoxes; // @synthesize maxBoxes=_maxBoxes;
@property unsigned long long minBoxes; // @synthesize minBoxes=_minBoxes;
@property double confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
@property double iouThreshold; // @synthesize iouThreshold=_iouThreshold;
@property int suppressionMethod; // @synthesize suppressionMethod=_suppressionMethod;
- (id)objectBoundingBoxOutputDescription;	// IMP=0x0000000000120043

@end
