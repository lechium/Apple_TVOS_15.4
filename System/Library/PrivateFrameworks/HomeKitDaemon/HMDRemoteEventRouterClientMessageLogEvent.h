//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDRemoteEventRouterClientMessageLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    long long _messageType;	// 8 = 0x8
}

+ (_Bool)submitEventWithDurationInMilliseconds;	// IMP=0x0000000000845a5c
@property(readonly) long long messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithMessageType:(long long)arg1;	// IMP=0x0000000000845942

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

