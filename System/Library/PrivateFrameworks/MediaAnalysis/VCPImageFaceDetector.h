//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPImageFaceDetector
{
}

+ (id)faceDetector;	// IMP=0x0000000000078b54
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x0000000000079bb2
- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 landscape:(_Bool)arg4 results:(id)arg5;	// IMP=0x0000000000079616
- (int)processTile:(struct __CVBuffer *)arg1 results:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x0000000000079603
- (_Bool)isDuplicate:(struct CGRect)arg1 withRect:(struct CGRect)arg2;	// IMP=0x0000000000079534
- (int)faceDetection:(struct __CVBuffer *)arg1 faces:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x0000000000078b6d

@end

