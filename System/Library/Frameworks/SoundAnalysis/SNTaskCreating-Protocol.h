//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoundAnalysis/SNRequest-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol SNTaskCreating <SNRequest>
- (void (^)(void))launchTaskWithQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(void (^)(NSError *))arg2 resultsHandler:(void (^)(id <SNResult>))arg3;
@end

