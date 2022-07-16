//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICURLSession, NSDictionary, NSOperationQueue, NSString;

@interface JaliscoLoadChapterArtworkOperation
{
    NSDictionary *_chapterArtworkToLoad;	// 8 = 0x8
    NSString *_powerAssertionIdentifier;	// 16 = 0x10
    ICURLSession *_artworkDownloadSession;	// 24 = 0x18
    NSOperationQueue *_artworkDownloadOperationQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001c849
- (void)cancel;	// IMP=0x001000000001c800
- (void)main;	// IMP=0x001000000001bdef
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 dictionary:(id)arg3;	// IMP=0x001000000001bc32
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001bbac

@end

