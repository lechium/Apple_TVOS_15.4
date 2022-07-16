//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TILanguageModelOfflineLearningStrategy-Protocol.h>

@class NSString, TILanguageModelOfflineLearningTask;

@interface TILanguageModelOfflineLearningStrategyMecabraFavonius : NSObject <TILanguageModelOfflineLearningStrategy>
{
    TILanguageModelOfflineLearningTask *_learningTask;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001a4cbd
@property(readonly) TILanguageModelOfflineLearningTask *learningTask; // @synthesize learningTask=_learningTask;
- (void)didFinishLearning;	// IMP=0x00000000001a4ca3
- (id)identifyLanguagesForMessages:(id)arg1;	// IMP=0x00000000001a497f
- (_Bool)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;	// IMP=0x00000000001a4562
- (_Bool)incrementUsageCountsForMessages:(id)arg1 withAdaptationContext:(id)arg2;	// IMP=0x00000000001a4463
- (id)filterMessages:(id)arg1;	// IMP=0x00000000001a4309
- (id)initWithClientIdentifier:(id)arg1;	// IMP=0x00000000001a4282

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

