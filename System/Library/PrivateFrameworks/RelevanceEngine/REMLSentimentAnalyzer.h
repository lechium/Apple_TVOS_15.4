//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class REContentRanker;

@interface REMLSentimentAnalyzer : NSObject <NSCopying>
{
    REContentRanker *_contentRanker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d85c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d857e
- (id)sentimentForTokens:(id)arg1;	// IMP=0x00000000000d8443
- (id)sentimentForText:(id)arg1;	// IMP=0x00000000000d83f3
- (id)initWithContentRanker:(id)arg1;	// IMP=0x00000000000d8388

@end
