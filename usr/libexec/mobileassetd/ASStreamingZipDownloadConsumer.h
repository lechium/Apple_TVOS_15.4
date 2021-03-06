//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, SZExtractor;

@interface ASStreamingZipDownloadConsumer
{
    SZExtractor *_extractor;	// 24 = 0x18
    NSString *_expectedHash;	// 32 = 0x20
    long long _expectedSize;	// 40 = 0x28
    NSURL *_tmpPath;	// 48 = 0x30
}

- (void)finish;	// IMP=0x0020000000007643
- (void)suspend;	// IMP=0x001000000000754f
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000707e
- (void)resumeAtOffset:(long long)arg1;	// IMP=0x0010000000007016
- (void)dealloc;	// IMP=0x0010000000006fbe
- (id)initWithURL:(id)arg1 downloadSize:(long long)arg2 expectedHash:(id)arg3;	// IMP=0x0010000000006f2d
- (void)_createExtractor;	// IMP=0x0010000000006db4
- (id)_hashToString:(id)arg1;	// IMP=0x0010000000006d1b

@end

