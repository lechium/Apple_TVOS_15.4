//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCapture/NSObject-Protocol.h>

@class AVCaptureConnection, AVCaptureDepthDataOutput, AVDepthData;

@protocol AVCaptureDepthDataOutputDelegate <NSObject>

@optional
- (void)depthDataOutput:(AVCaptureDepthDataOutput *)arg1 didDropDepthData:(AVDepthData *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(AVCaptureConnection *)arg4 reason:(long long)arg5;
- (void)depthDataOutput:(AVCaptureDepthDataOutput *)arg1 didOutputDepthData:(AVDepthData *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(AVCaptureConnection *)arg4;
@end
