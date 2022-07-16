//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TILanguageModelOfflineLearningStrategy-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, TILanguageModelOfflineLearningTask;

@interface TILanguageModelOfflineLearningStrategyResponseKit : NSObject <TILanguageModelOfflineLearningStrategy>
{
    NSMutableDictionary *_recipientModels;	// 8 = 0x8
    NSURL *_directory;	// 16 = 0x10
    TILanguageModelOfflineLearningTask *_learningTask;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004f7eb
@property(readonly) TILanguageModelOfflineLearningTask *learningTask; // @synthesize learningTask=_learningTask;
- (void)didFinishLearning;	// IMP=0x000000000004f79a
- (id)filterMessages:(id)arg1;	// IMP=0x000000000004f6a7
- (_Bool)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;	// IMP=0x000000000004f69f
- (id)messagesClusteredByRecipient:(id)arg1;	// IMP=0x000000000004f429
- (id)initWithClientIdentifier:(id)arg1 andDirectory:(id)arg2;	// IMP=0x000000000004f355

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
