//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class SHMatcherResponse;
@protocol SHMatcher;

@protocol SHMatcherDelegate <NSObject>
- (void)matcher:(id <SHMatcher>)arg1 didFinishWithOutcome:(long long)arg2;
- (void)matcher:(id <SHMatcher>)arg1 didFail:(SHMatcherResponse *)arg2;
- (void)matcher:(id <SHMatcher>)arg1 didNotFindMatch:(SHMatcherResponse *)arg2;
- (void)matcher:(id <SHMatcher>)arg1 didFindMatch:(SHMatcherResponse *)arg2;
@end

