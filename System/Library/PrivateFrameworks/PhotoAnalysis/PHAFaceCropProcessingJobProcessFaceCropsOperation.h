//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, PHAVisionServiceFaceProcessingWorker;
@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation
{
    id <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> _delegate;	// 8 = 0x8
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;	// 16 = 0x10
    NSArray *_faceCrops;	// 24 = 0x18
    unsigned long long _totalSteps;	// 32 = 0x20
    unsigned long long _currentStep;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000090f59
- (float)percentComplete;	// IMP=0x0000000000090ee8
- (void)main;	// IMP=0x0000000000090ca0
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000090c8c
- (id)delegate;	// IMP=0x0000000000090c73
- (id)initWithFaceProcessingWorker:(id)arg1 faceCrops:(id)arg2;	// IMP=0x0000000000090b92

@end

