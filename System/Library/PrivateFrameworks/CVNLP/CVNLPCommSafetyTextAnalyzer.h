//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CVNLPCommSafetyTextAnalyzer
{
    NSArray *_models;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000045cc0
- (void)processConversationsWithStartDate:(id)arg1 endDate:(id)arg2 previousClassifications:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000045820
- (id)_classificationsForTextItems:(id)arg1 previousClassifications:(id)arg2;	// IMP=0x0000000000045320
- (id)_classificationForTextItems:(id)arg1 conversationIdentifier:(id)arg2;	// IMP=0x0000000000044f30
- (id)processText:(id)arg1 inConversationWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000044a60
- (id)processText:(id)arg1 inConversationWithIdentifier:(id)arg2 date:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000044a20
- (long long)classifyString:(id)arg1;	// IMP=0x00000000000448a0
- (long long)_classifyString:(id)arg1;	// IMP=0x00000000000446c0
- (id)initWithModelURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000044090

@end

