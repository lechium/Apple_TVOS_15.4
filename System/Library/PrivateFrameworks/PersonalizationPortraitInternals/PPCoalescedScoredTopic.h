//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject
{
    unsigned short _occurrencesInSource;	// 8 = 0x8
    PPScoredItem *_scoredTopic;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000117c0a
@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) PPScoredItem *scoredTopic; // @synthesize scoredTopic=_scoredTopic;
- (id)init;	// IMP=0x0000000000117bf0
- (id)initWithScoredTopic:(id)arg1 occurrencesInSource:(unsigned short)arg2;	// IMP=0x0000000000117b79

@end

