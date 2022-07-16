//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface VCPHumanPoseEspressoSession : NSObject
{
    MISSING_TYPE **_heatmapNms;	// 8 = 0x8
    int _width;	// 16 = 0x10
    int _height;	// 20 = 0x14
    int _revision;	// 24 = 0x18
    MISSING_TYPE **_modelOutput16bit;	// 32 = 0x20
    int _modelOutputSize;	// 40 = 0x28
    _Bool _loadModel;	// 44 = 0x2c
    void *_plan;	// 48 = 0x30
    void *_ctx;	// 56 = 0x38
    CDStruct_2bc666a5 _net;	// 64 = 0x40
    CDStruct_0a65202a _outputBlob;	// 80 = 0x50
}

- (int)processFrame:(struct __CVBuffer *)arg1 withOptions:(id)arg2 results:(id)arg3;	// IMP=0x000000000015c1d5
- (int)requiredInputFormat:(int *)arg1 height:(int *)arg2 format:(unsigned int *)arg3;	// IMP=0x000000000015c1a6
- (int)keypointsFromTensor:(MISSING_TYPE **)arg1 width:height:channels:withOptions:results: /* Error: Ran out of types for this method. */;	// IMP=0x000000000015a5ad
- (int)keypointsFromTensor:(CDStruct_0a65202a *)arg1 withOptions:(id)arg2 results:(id)arg3;	// IMP=0x000000000015a440
- (id)keypointsToObservation:(id)arg1;	// IMP=0x0000000000159fab
- (void)dealloc;	// IMP=0x0000000000159ef8
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000159a90

@end
