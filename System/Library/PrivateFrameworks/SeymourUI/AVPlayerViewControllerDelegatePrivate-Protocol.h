//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourUI/AVScanningDelegate-Protocol.h>

@class AVPlayerViewController, NSDate;

@protocol AVPlayerViewControllerDelegatePrivate <AVScanningDelegate>

@optional
- (void)playerViewController:(AVPlayerViewController *)arg1 willResumePlaybackAfterUserNavigatedFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3;
- (void)dismissPlayerViewController:(AVPlayerViewController *)arg1;
@end

