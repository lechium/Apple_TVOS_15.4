//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriPrivateLearningAnalytics/BPSSubscriber-Protocol.h>

@class MISSING_TYPE;

@interface _TtC28SiriPrivateLearningAnalyticsP33_1C28A16D52A6DDC29A328441443490A627ScanConversationsSubscriber : NSObject <BPSSubscriber>
{
    MISSING_TYPE *downstream;	// 8 = 0x8
    MISSING_TYPE *currentConversation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000034c60
- (id)init;	// IMP=0x0000000000034be0
- (void)cancel;	// IMP=0x0000000000034570
- (void)receiveCompletion:(id)arg1;	// IMP=0x00000000000344b0
- (long long)receiveInput:(id)arg1;	// IMP=0x0000000000034230
- (void)receiveSubscription:(id)arg1;	// IMP=0x0000000000033c80

@end
