//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BMCoreAnalyticsEvents : NSObject
{
}

+ (void)sendEvent:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000003a9e
+ (id)dictionaryWithUnreadableSegment:(double)arg1 stream:(long long)arg2 size:(unsigned int)arg3;	// IMP=0x0000000000003970
+ (id)dictionaryWithBookmarkResumeFailureTime:(double)arg1 bookmarkCreationTime:(double)arg2 publicStream:(long long)arg3;	// IMP=0x000000000000383f
+ (id)dictionaryWithPrunePublicStream:(long long)arg1 deletionInterval:(double)arg2 eventDeletionCount:(unsigned int)arg3;	// IMP=0x0000000000003714
+ (id)dictionaryWithAllStreamsEventWritten:(_Bool)arg1 size:(unsigned int)arg2 streamIdentifier:(id)arg3;	// IMP=0x00000000000035f4
+ (id)dictionaryWithIntentEventWritten:(_Bool)arg1 size:(unsigned int)arg2;	// IMP=0x0000000000003500
+ (id)dictionaryWithAppLaunchEventWritten:(_Bool)arg1 size:(unsigned int)arg2;	// IMP=0x000000000000340c
+ (id)dictionaryWithUnreadableEventTime:(double)arg1 stream:(long long)arg2 segmentTime:(double)arg3;	// IMP=0x00000000000032dc
+ (void)sendUnreadableSegment:(double)arg1 stream:(long long)arg2 size:(unsigned int)arg3;	// IMP=0x000000000000328a
+ (void)sendBookmarkResumeFailureTime:(double)arg1 bookmarkCreationTime:(double)arg2 publicStream:(long long)arg3;	// IMP=0x0000000000003238
+ (void)sendPrunePublicStream:(long long)arg1 deletionInterval:(double)arg2 eventDeletionCount:(unsigned int)arg3;	// IMP=0x00000000000031e6
+ (void)sendAllStreamsEventWritten:(_Bool)arg1 size:(unsigned int)arg2 streamIdentifier:(id)arg3;	// IMP=0x0000000000003194
+ (void)sendIntentEventWritten:(_Bool)arg1 size:(unsigned int)arg2;	// IMP=0x0000000000003142
+ (void)sendAppLaunchEventWritten:(_Bool)arg1 size:(unsigned int)arg2;	// IMP=0x00000000000030f0
+ (void)sendUnreadableEventTime:(double)arg1 stream:(long long)arg2 segmentTime:(double)arg3;	// IMP=0x000000000000309e

@end

