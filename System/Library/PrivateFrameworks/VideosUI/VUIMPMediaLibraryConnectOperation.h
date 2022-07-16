//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class MPMediaLibrary, NSError, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VUIMPMediaLibraryConnectOperation : VUIAsynchronousOperation
{
    _Bool _success;	// 8 = 0x8
    CDUnknownBlockType _progressBlock;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    MPMediaLibrary *_mediaLibrary;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_progressTimer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001b5873
@property(retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void)_notifyClientOfProgress:(float)arg1;	// IMP=0x00000000001b5670
- (void)_stopProgressTimer;	// IMP=0x00000000001b561d
- (void)_startProgressTimer;	// IMP=0x00000000001b54c9
- (void)executionDidBegin;	// IMP=0x00000000001b519a
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x00000000001b50f5
- (id)init;	// IMP=0x00000000001b5086

@end
