//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSURLSessionDelegate-Protocol.h>

@class HMIHomeKitClient, NSOperationQueue, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface HMIFeedbackSession : HMFObject <NSURLSessionDelegate, HMFLogging>
{
    HMIHomeKitClient *_homeKitClient;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSURLSession *_session;	// 24 = 0x18
    NSString *_feedbackServiceHost;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000000577d6
- (void).cxx_destruct;	// IMP=0x0000000000057838
@property(readonly) NSString *feedbackServiceHost; // @synthesize feedbackServiceHost=_feedbackServiceHost;
@property(readonly) NSURLSession *session; // @synthesize session=_session;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly) HMIHomeKitClient *homeKitClient; // @synthesize homeKitClient=_homeKitClient;
- (id)init;	// IMP=0x000000000005768d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

