//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPTopicStore;

@interface PPSpotlightScoring : NSObject
{
    PPTopicStore *_topicStore;	// 8 = 0x8
    long long _sandboxExtensionHandle;	// 16 = 0x10
}

+ (id)defaultInstance;	// IMP=0x000000000004a25a
- (void).cxx_destruct;	// IMP=0x000000000004a0dc
- (_Bool)refreshSpotlightScoringCacheWithError:(id *)arg1;	// IMP=0x000000000004a0c6
- (id)spotlightQueryScore:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049bd3
- (void)dealloc;	// IMP=0x0000000000049b39
- (id)initWithTopicStore:(id)arg1;	// IMP=0x000000000004994a

@end
