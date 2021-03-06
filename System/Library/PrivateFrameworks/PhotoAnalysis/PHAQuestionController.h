//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUbiquitousKeyValueStore, PGManager, PGTrialSession;
@protocol OS_os_log;

@interface PHAQuestionController : NSObject
{
    PGManager *_graphManager;	// 8 = 0x8
    NSObject<OS_os_log> *_loggingConnection;	// 16 = 0x10
    PGTrialSession *_trialSession;	// 24 = 0x18
    NSMutableDictionary *_questionTypeImportanceByQuestionType;	// 32 = 0x20
    NSUbiquitousKeyValueStore *_store;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c9632
@property(retain, nonatomic) NSUbiquitousKeyValueStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSMutableDictionary *questionTypeImportanceByQuestionType; // @synthesize questionTypeImportanceByQuestionType=_questionTypeImportanceByQuestionType;
@property(retain, nonatomic) PGTrialSession *trialSession; // @synthesize trialSession=_trialSession;
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(retain, nonatomic) PGManager *graphManager; // @synthesize graphManager=_graphManager;
- (unsigned long long)numberOfSyndicationAssetsQuestionsToGenerate;	// IMP=0x00000000000c93f1
- (void)removeCurrentKVSData;	// IMP=0x00000000000c93b7
- (id)currentQuestionsKVSData;	// IMP=0x00000000000c939a
- (void)_handleKVSQuestionsUpdateIfNeededWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7d9e
- (void)_syncAnsweredQuestionsWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c71d4
- (void)_updateInvalidQuestionsWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6bcf
- (id)allQuestionFactories;	// IMP=0x00000000000c683a
- (id)questionFactoriesForOptions:(long long)arg1;	// IMP=0x00000000000c6614
- (double)importanceOfQuestionType:(id)arg1;	// IMP=0x00000000000c6337
- (_Bool)persistQuestions:(id)arg1;	// IMP=0x00000000000c6096
- (void)assignScoreToQuestions:(id)arg1;	// IMP=0x00000000000c5d52
- (id)selectedQuestionsFromSortedQuestionsByQuestionType:(id)arg1 withLimit:(unsigned long long)arg2;	// IMP=0x00000000000c55fe
- (_Bool)generateQuestionsWithOptions:(long long)arg1 limit:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4a13
- (_Bool)generateQuestionsWithOptions:(long long)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4703
- (id)initWithGraphManager:(id)arg1;	// IMP=0x00000000000c45f0

@end

