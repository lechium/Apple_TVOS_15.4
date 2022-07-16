//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGQuickResponsesModel, SGQuickResponsesPersonalization, SGQuickResponsesRanking, SGQuickResponsesStore, _PASRng;

@interface SGQuickResponsesInference : NSObject
{
    SGQuickResponsesStore *_store;	// 8 = 0x8
    SGQuickResponsesModel *_model;	// 16 = 0x10
    SGQuickResponsesRanking *_ranking;	// 24 = 0x18
    SGQuickResponsesPersonalization *_personalization;	// 32 = 0x20
    _PASRng *_rng;	// 40 = 0x28
}

+ (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(_Bool)arg3 isUsingQuickResponses:(_Bool)arg4 locale:(id)arg5 plistPath:(id)arg6;	// IMP=0x0000000000015e6c
+ (void)registerDisplayedQuickResponses:(id)arg1 plistPath:(id)arg2;	// IMP=0x0000000000015b4f
+ (id)normalizeStringForDeduping:(id)arg1;	// IMP=0x0000000000015b3a
+ (id)quickResponsesForMessage:(id)arg1 conversationTurns:(id)arg2 maxResponses:(unsigned long long)arg3 localeIdentifier:(id)arg4 recipientHandles:(id)arg5 chunkPath:(id)arg6 plistPath:(id)arg7 espressoBinFilePath:(id)arg8 useContactNames:(_Bool)arg9;	// IMP=0x000000000001590d
+ (id)quickResponsesForMessage:(id)arg1 context:(id)arg2 time:(id)arg3 maxResponses:(unsigned long long)arg4 locale:(id)arg5 recipientHandles:(id)arg6 chunkPath:(id)arg7 plistPath:(id)arg8 espressoBinFilePath:(id)arg9;	// IMP=0x00000000000156d7
+ (id)stringsForQuickResponses:(id)arg1;	// IMP=0x000000000001550b
+ (id)languageForLocale:(id)arg1 withLanguageDetectionForMessage:(id)arg2;	// IMP=0x00000000000152f3
- (void).cxx_destruct;	// IMP=0x0000000000014f76
- (id)addCustomResponsesToCommonResponses:(id)arg1 language:(id)arg2 locale:(id)arg3 recipient:(id)arg4 modelScores:(id)arg5 maxResponses:(unsigned long long)arg6 customResponsesParams:(id)arg7;	// IMP=0x000000000001491d
- (id)quickResponsesFromReplyTextIds:(id)arg1 isConfident:(_Bool)arg2 config:(id)arg3;	// IMP=0x00000000000143f3
- (id)randomizedReplyTextIdsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;	// IMP=0x0000000000014217
- (id)replyTextIdsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;	// IMP=0x000000000001402a
- (id)replyTextsFromSemanticClasses:(id)arg1 config:(id)arg2;	// IMP=0x0000000000013a90
- (id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 language:(id)arg6 locale:(id)arg7 recipients:(id)arg8 useContactNames:(_Bool)arg9;	// IMP=0x0000000000012ae9
- (id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 language:(id)arg6 locale:(id)arg7 recipients:(id)arg8;	// IMP=0x0000000000012ab5
- (id)_getMergedPromptForMessage:(id)arg1 conversationTurns:(id)arg2;	// IMP=0x000000000001299a
- (id)initWithLanguage:(id)arg1 chunkPath:(id)arg2 plistPath:(id)arg3 espressoBinFilePath:(id)arg4;	// IMP=0x0000000000012746
- (id)initWithModel:(id)arg1 ranking:(id)arg2 personalization:(id)arg3 rng:(id)arg4 store:(id)arg5;	// IMP=0x000000000001243f

@end

