//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKVSearchService, OS_dispatch_queue;

@interface CKVocabularySearcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<CKVSearchService> *_searchService;	// 16 = 0x10
    NSString *_userId;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000000000eb840
+ (id)makeSearcherForUserId:(id)arg1;	// IMP=0x00000000000eb7b4
+ (id)makeSearcher;	// IMP=0x00000000000eb759
- (void).cxx_destruct;	// IMP=0x00000000000eb726
- (_Bool)_validateUtteranceTokens:(id)arg1;	// IMP=0x00000000000eb690
- (_Bool)_validateCustomTypes:(id)arg1 andAddToCriteria:(id)arg2;	// IMP=0x00000000000eb29a
- (_Bool)_validateAppIds:(id)arg1 andAddToCriteria:(id)arg2;	// IMP=0x00000000000eaef5
- (id)matchSpansOfString:(id)arg1;	// IMP=0x00000000000eabf9
- (id)matchSpansOfUtterance:(id)arg1;	// IMP=0x00000000000ea971
- (id)searchCustomVocabularyWithWildcardPatterns:(id)arg1 appIds:(id)arg2 vocabularyTypes:(id)arg3;	// IMP=0x00000000000ea581
- (id)searchCustomVocabulary:(id)arg1 appIds:(id)arg2 vocabularyTypes:(id)arg3;	// IMP=0x00000000000ea1c7
- (id)init;	// IMP=0x00000000000ea17f
- (id)initWithSearchService:(id)arg1 dispatchQueue:(id)arg2 userId:(id)arg3 prewarm:(_Bool)arg4;	// IMP=0x00000000000ea09c

@end

