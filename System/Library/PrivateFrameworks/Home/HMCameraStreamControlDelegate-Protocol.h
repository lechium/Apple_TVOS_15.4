//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HMCameraStreamControl, NSError;

@protocol HMCameraStreamControlDelegate <NSObject>

@optional
- (void)cameraStreamControl:(HMCameraStreamControl *)arg1 didStopStreamWithError:(NSError *)arg2;
- (void)cameraStreamControlDidStartStream:(HMCameraStreamControl *)arg1;
@end

