//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnounceDaemon/ANAnalyticsAssistantProtocol-Protocol.h>

@interface ANAnalyticsAssistant : NSObject <ANAnalyticsAssistantProtocol>
{
}

- (int)_linearBucketAtInterval:(double)arg1 value:(double)arg2 max:(double)arg3;	// IMP=0x000000000004e606
- (id)_playerForAnnouncement:(id)arg1;	// IMP=0x000000000004e4f8
- (long long)bucketFromReceiveTime:(double)arg1;	// IMP=0x000000000004e4d0
- (long long)bucketFromDuration:(double)arg1;	// IMP=0x000000000004e4a8
- (long long)bucketFromSize:(long long)arg1;	// IMP=0x000000000004e47e
- (long long)boundGroupCount:(long long)arg1;	// IMP=0x000000000004e46b
- (struct ANAnalyticsAssistantSenderData)senderDataForAnnouncement:(id)arg1;	// IMP=0x000000000004e397
- (struct ANAnalyticsAssistantAudioData)audioDataForAnnouncement:(id)arg1;	// IMP=0x000000000004e2fd

@end
