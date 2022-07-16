//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface PHImageResult
{
    struct CGImage *_imageRef;	// 24 = 0x18
    _Bool _isPlaceholder;	// 32 = 0x20
    _Bool _degraded;	// 33 = 0x21
    NSNumber *_exifOrientation;	// 40 = 0x28
    NSString *_uniformTypeIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b6268
@property(copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy, nonatomic) NSNumber *exifOrientation; // @synthesize exifOrientation=_exifOrientation;
- (_Bool)isDegraded;	// IMP=0x00000000000b6225
- (void)setDegraded:(_Bool)arg1;	// IMP=0x00000000000b6215
- (_Bool)isPlaceholder;	// IMP=0x00000000000b6205
- (void)setIsPlaceholder:(_Bool)arg1;	// IMP=0x00000000000b61f5
- (long long)uiOrientation;	// IMP=0x00000000000b61a6
- (id)imageData;	// IMP=0x00000000000b60cc
- (void)setImageData:(id)arg1;	// IMP=0x00000000000b60af
- (id)imageURL;	// IMP=0x00000000000b6092
- (void)setImageURL:(id)arg1;	// IMP=0x00000000000b6075
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 averagePixelLuminance:(id)arg3;	// IMP=0x00000000000b5f91
- (struct CGImage *)imageRef;	// IMP=0x00000000000b5f80
- (void)setImageRef:(struct CGImage *)arg1;	// IMP=0x00000000000b5f49
- (id)sanitizedInfoDictionary;	// IMP=0x00000000000b5e3e
- (id)allowedInfoKeys;	// IMP=0x00000000000b5ddb
- (_Bool)containsValidData;	// IMP=0x00000000000b5d5e
- (void)dealloc;	// IMP=0x00000000000b5d1d

@end
