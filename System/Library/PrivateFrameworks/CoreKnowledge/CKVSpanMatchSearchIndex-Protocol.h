//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreKnowledge/NSObject-Protocol.h>

@class CKVTokenChain, NSArray, NSLocale;

@protocol CKVSpanMatchSearchIndex <NSObject>
- (NSLocale *)locale;
- (NSArray *)searchIndexForTokenChain:(CKVTokenChain *)arg1;
- (void)prewarm;
@end

