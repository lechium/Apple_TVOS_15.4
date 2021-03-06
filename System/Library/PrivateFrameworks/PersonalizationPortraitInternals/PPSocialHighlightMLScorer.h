//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPSocialHighlightScorer-Protocol.h>

@class MLModel, NSString;
@protocol OS_dispatch_queue;

@interface PPSocialHighlightMLScorer : NSObject <PPSocialHighlightScorer>
{
    MLModel *_model;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_modelQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007b427
- (double)scoreSocialHighlight:(id)arg1;	// IMP=0x000000000007acda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

