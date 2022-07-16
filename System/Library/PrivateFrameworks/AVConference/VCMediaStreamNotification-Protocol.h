//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSArray, VCMediaKeyIndex, VCMediaStream;

@protocol VCMediaStreamNotification <NSObject>
- (void)mediaStream:(VCMediaStream *)arg1 didReceiveNewMediaKeyIndex:(VCMediaKeyIndex *)arg2;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;

@optional
- (void)mediaStream:(VCMediaStream *)arg1 didReceiveFlushRequestWithPayloads:(NSArray *)arg2;
@end

