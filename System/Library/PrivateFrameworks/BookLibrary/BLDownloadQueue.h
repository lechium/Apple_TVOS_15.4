//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookLibraryCore/BLDownloadQueueNonUI.h>

@interface BLDownloadQueue : BLDownloadQueueNonUI
{
}

+ (id)sharedInstance;	// IMP=0x00000000000036b7
- (void)addDownloadsWithManifestRequest:(id)arg1 uiManager:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003a1d
- (void)purchaseWithRequest:(id)arg1 uiManager:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003964
- (void)purchaseWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000394d
- (id)init;	// IMP=0x00000000000037f3

@end

