//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSDownloadManagerObserver-Protocol.h>

@class NSSet, SSDownloadManager;

@protocol SSDownloadManagerObserverPrivate <SSDownloadManagerObserver>

@optional
- (void)downloadManager:(SSDownloadManager *)arg1 downloadsDidChange:(NSSet *)arg2;
@end

