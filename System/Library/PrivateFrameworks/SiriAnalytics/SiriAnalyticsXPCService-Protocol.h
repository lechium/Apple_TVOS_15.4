//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriAnalytics/NSObject-Protocol.h>

@class NSArray, SiriAnalyticsXPCLargeMessageEnvelope;

@protocol SiriAnalyticsXPCService <NSObject>
- (oneway void)publishLargeMessage:(SiriAnalyticsXPCLargeMessageEnvelope *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)resolveMessages:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (oneway void)publishMessages:(NSArray *)arg1 completion:(void (^)(void))arg2;
@end

