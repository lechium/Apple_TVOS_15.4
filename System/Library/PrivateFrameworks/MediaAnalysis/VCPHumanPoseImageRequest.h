//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPImageHumanPoseAnalyzer;

@interface VCPHumanPoseImageRequest
{
    VCPImageHumanPoseAnalyzer *_analyzer;	// 32 = 0x20
    int _preferredWidth;	// 40 = 0x28
    int _preferredHeight;	// 44 = 0x2c
    unsigned int _preferredFormat;	// 48 = 0x30
}

+ (int)parseResults:(id)arg1 observations:(id)arg2;	// IMP=0x00000000001b6b56
- (void).cxx_destruct;	// IMP=0x00000000001b777e
- (_Bool)cleanupWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b775a
- (unsigned int)preferredPixelFormat;	// IMP=0x00000000001b774a
- (struct CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b76e0
- (_Bool)updateWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b75e8
- (id)processImage:(struct __CVBuffer *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001b7326
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000001b69ab
- (id)init;	// IMP=0x00000000001b6922

@end

