//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIImage.h>

@interface CIImage (AXMExtras)
- (void)saveToURL:(id)arg1 withOrientation:(unsigned int)arg2 metrics:(id)arg3;	// IMP=0x00000000000662a6
- (void)writeImageInAllOrientationsToDirectoryAtURL:(id)arg1 metrics:(id)arg2;	// IMP=0x0000000000066201
- (id)addBorderWithBorderSize:(double)arg1;	// IMP=0x0000000000065f7b
- (id)mergeWithImage:(id)arg1 withSize:(struct CGSize)arg2 withMetrics:(id)arg3;	// IMP=0x0000000000065c96
- (id)rotatedImageWithInterfaceOrientation:(long long)arg1 isMirrored:(_Bool)arg2 appliedImageOrientation:(unsigned int *)arg3;	// IMP=0x0000000000065c51
- (id)rotatedImageWithInterfaceOrientation:(long long)arg1 displayOrientation:(long long)arg2 appliedImageOrientation:(unsigned int *)arg3;	// IMP=0x0000000000065c0c
- (unsigned int)_imageOrientationForInterfaceOrientation:(long long)arg1 isMirrored:(_Bool)arg2;	// IMP=0x0000000000065b7c
- (unsigned int)_imageOrientationForInterfaceOrientation:(long long)arg1 displayOrientation:(long long)arg2;	// IMP=0x000000000006592c
@end

