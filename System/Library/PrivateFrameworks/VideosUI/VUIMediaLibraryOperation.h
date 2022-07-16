//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSError, VUIAsynchronousWorkToken, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryOperation : VUIAsynchronousOperation
{
    VUIMediaLibrary *_mediaLibrary;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    VUIAsynchronousWorkToken *_asyncWorkToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c2877
@property(retain, nonatomic) VUIAsynchronousWorkToken *asyncWorkToken; // @synthesize asyncWorkToken=_asyncWorkToken;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)cancel;	// IMP=0x00000000000c278d
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x00000000000c26e8
- (id)init;	// IMP=0x00000000000c2679

@end

