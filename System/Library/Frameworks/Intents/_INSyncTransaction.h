//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _INVocabularyGenerationDocument, _INVocabularyStoreManager;

@interface _INSyncTransaction : NSObject
{
    NSString *_pathToLatestVocabularyDocument;	// 8 = 0x8
    NSString *_pathToStagedVocabularyDocument;	// 16 = 0x10
    NSString *_pathToSentVocabularyDocument;	// 24 = 0x18
    NSString *_syncSlot;	// 32 = 0x20
    _INVocabularyStoreManager *_storeManager;	// 40 = 0x28
    _Bool _deleteExistingVocabulary;	// 48 = 0x30
    _Bool _vocabularyUpdatesEnabled;	// 49 = 0x31
    _Bool _fullResetRequired;	// 50 = 0x32
    _INVocabularyGenerationDocument *_latest;	// 56 = 0x38
    _INVocabularyGenerationDocument *_sent;	// 64 = 0x40
}

+ (id)beginTransactionForBundleID:(id)arg1 bundlePath:(id)arg2 syncSlot:(id)arg3;	// IMP=0x000000000016ef60
- (void).cxx_destruct;	// IMP=0x000000000016ee3b
@property(nonatomic) _Bool fullResetRequired; // @synthesize fullResetRequired=_fullResetRequired;
@property(readonly, nonatomic) _INVocabularyGenerationDocument *latestVocabularyDocument; // @synthesize latestVocabularyDocument=_latest;
- (void)_beginTransaction;	// IMP=0x000000000016ea52
- (_Bool)_isMissingLatestFileError:(id)arg1;	// IMP=0x000000000016e946
- (void)_deleteInvalidSavedData;	// IMP=0x000000000016e7bc
- (id)_emptySentDocument;	// IMP=0x000000000016e731
@property(readonly, nonatomic) _INVocabularyGenerationDocument *sentVocabularyDocument; // @synthesize sentVocabularyDocument=_sent;
- (id)calculateDiff;	// IMP=0x000000000016e6c1
- (void)endTransactionWithFinalAnchor:(id)arg1;	// IMP=0x000000000016e544
- (void)_saveAndCleanup;	// IMP=0x000000000016e1c0
- (id)_initWithVocabularyManager:(id)arg1 syncSlot:(id)arg2 deleteExistingVocabulary:(_Bool)arg3;	// IMP=0x000000000016de03

@end

