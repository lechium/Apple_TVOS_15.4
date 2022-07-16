//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHValidator : NSObject
{
}

+ (_Bool)isSupportedImageAtPath:(id)arg1;	// IMP=0x00000000001a0351
+ (_Bool)isSupportedMovieAtPath:(id)arg1;	// IMP=0x00000000001a02cf
+ (_Bool)isSupportedAudioAtPath:(id)arg1;	// IMP=0x00000000001a024d
+ (unsigned char)mediaTypeForURL:(id)arg1;	// IMP=0x00000000001a0118
+ (unsigned char)mediaTypeForContentType:(id)arg1;	// IMP=0x000000000019fca0
- (_Bool)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id *)arg2 videoDuration:(CDStruct_1b6d18a9 *)arg3 imageDisplayTime:(CDStruct_1b6d18a9 *)arg4 error:(id *)arg5;	// IMP=0x00000000001a1510
- (void)getLivePhotoImageMetadataFromURL:(id)arg1 pairingIdentifier:(id *)arg2;	// IMP=0x00000000001a14a9
- (_Bool)_validateLivePhotoResourceURLs:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a0e34
- (_Bool)_validateVideoURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a0bb9
- (_Bool)_validateImageSource:(struct CGImageSource *)arg1 error:(id *)arg2;	// IMP=0x00000000001a0a76
- (_Bool)isValidVideoPathExtension:(id)arg1;	// IMP=0x00000000001a0a03
- (_Bool)isValidImagePathExtension:(id)arg1;	// IMP=0x00000000001a0990
- (_Bool)validateData:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001a0895
- (_Bool)validateURLs:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001a0492
- (_Bool)validateURL:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001a03d3

@end
