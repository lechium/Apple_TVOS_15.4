//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, PFVideoComplement, PLSandboxedURL;

@interface PLStreamShareSource : NSObject
{
    PLSandboxedURL *_sandboxedMediaURL;	// 8 = 0x8
    PLSandboxedURL *_sandboxedVideoComplementImageURL;	// 16 = 0x10
    PLSandboxedURL *_sandboxedVideoComplementVideoURL;	// 24 = 0x18
    NSData *_mediaData;	// 32 = 0x20
    NSString *_fileExtension;	// 40 = 0x28
    NSURL *_mediaURL;	// 48 = 0x30
    PFVideoComplement *_videoComplement;	// 56 = 0x38
    long long _mediaType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000054115e
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) PFVideoComplement *videoComplement; // @synthesize videoComplement=_videoComplement;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(retain, nonatomic) NSData *mediaData; // @synthesize mediaData=_mediaData;
- (id)photoLibrary;	// IMP=0x00000000005410d6
- (void)cleanupResources;	// IMP=0x00000000005410c0
- (void)_cleanupIfNeededMediaAtURL:(id)arg1;	// IMP=0x0000000000540f2b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000540a47
- (id)serializedDictionary;	// IMP=0x00000000005406cf

@end

