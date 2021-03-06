//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPModelR2D2;

@interface VCPMotionFlowRequest
{
    VCPModelR2D2 *_model;	// 32 = 0x20
    int _numLevels;	// 40 = 0x28
    int _startLevel;	// 44 = 0x2c
    int _preferredWidth;	// 48 = 0x30
    int _preferredHeight;	// 52 = 0x34
    unsigned int _preferredFormat;	// 56 = 0x38
    struct __CVBuffer *_firstBuffer;	// 64 = 0x40
    struct __CVBuffer *_secondBuffer;	// 72 = 0x48
    struct __CVBuffer *_outputFlow;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000172fdb
- (void)dealloc;	// IMP=0x0000000000172efd
- (_Bool)cleanupWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000172e52
- (unsigned int)preferredPixelFormat;	// IMP=0x0000000000172e42
- (struct CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000172dd8
- (_Bool)updateWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000172c9a
- (id)estimateMotionBetweenFirstImage:(struct __CVBuffer *)arg1 andSecondImage:(struct __CVBuffer *)arg2 error:(id *)arg3;	// IMP=0x0000000000172900
- (int)createInput:(struct __CVBuffer *)arg1 withImage:(struct __CVBuffer *)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4;	// IMP=0x00000000001727b5
- (int)copyImage:(struct __CVBuffer *)arg1 toBuffer:(struct __CVBuffer *)arg2 withChannels:(int)arg3;	// IMP=0x00000000001722ab
- (int)releaseInputAndOutputBuffers;	// IMP=0x000000000017225a
- (int)allocateInputAndOutputBuffers;	// IMP=0x0000000000172150
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000171fb9
- (id)init;	// IMP=0x0000000000171f30

@end

