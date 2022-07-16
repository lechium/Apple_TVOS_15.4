//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadManager, NSString;

@interface SplunkSessionDelegate : NSObject
{
    DownloadManager *_downloadManager;	// 8 = 0x8
}

@property(readonly, nonatomic) DownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000001edff
- (void)dealloc;	// IMP=0x001000000001edd0
- (id)initWithDownloadManager:(id)arg1;	// IMP=0x001000000001ed93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

