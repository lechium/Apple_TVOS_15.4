//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPImageHandsAnalyzer;

@interface VCPHandPoseImageRequest
{
    VCPImageHandsAnalyzer *_analyzer;	// 32 = 0x20
    int _preferredWidth;	// 40 = 0x28
    int _preferredHeight;	// 44 = 0x2c
    unsigned int _preferredFormat;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001c4b76
- (_Bool)cleanupWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c4b52
- (unsigned int)preferredPixelFormat;	// IMP=0x00000000001c4b42
- (struct CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c4b24
- (_Bool)updateWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c4a2c
- (id)processImage:(struct __CVBuffer *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c485a
- (int)parseResults:(id)arg1 observations:(id)arg2;	// IMP=0x00000000001c405c
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000001c3df1
- (id)init;	// IMP=0x00000000001c3d68

@end

