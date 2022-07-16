//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFIndexManager, EMFQueryLogger, EMFQueryResultOverrideList, EMFStringStemmer, NSLocale;
@protocol EMFAutocompleteCandidateProvider;

@interface EMFEmojiSearchEngine : NSObject
{
    const struct __EmojiLocaleDataWrapper *_localeData;	// 8 = 0x8
    EMFQueryLogger *_queryLogger;	// 16 = 0x10
    _Bool _enableAutocomplete;	// 24 = 0x18
    NSLocale *_locale;	// 32 = 0x20
    EMFIndexManager *_indexManager;	// 40 = 0x28
    EMFStringStemmer *_stringStemmer;	// 48 = 0x30
    id <EMFAutocompleteCandidateProvider> _autocompleteProvider;	// 56 = 0x38
    EMFQueryResultOverrideList *_overrideList;	// 64 = 0x40
}

+ (_Bool)isLocaleSupported:(id)arg1;	// IMP=0x0000000000025022
- (void).cxx_destruct;	// IMP=0x00000000000266ad
@property(nonatomic) _Bool enableAutocomplete; // @synthesize enableAutocomplete=_enableAutocomplete;
@property(readonly, nonatomic) EMFQueryResultOverrideList *overrideList; // @synthesize overrideList=_overrideList;
@property(readonly, nonatomic) id <EMFAutocompleteCandidateProvider> autocompleteProvider; // @synthesize autocompleteProvider=_autocompleteProvider;
@property(readonly, nonatomic) EMFStringStemmer *stringStemmer; // @synthesize stringStemmer=_stringStemmer;
@property(readonly, nonatomic) EMFIndexManager *indexManager; // @synthesize indexManager=_indexManager;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)_performAutocompletedQueryForQuery:(id)arg1 usingIndex:(id)arg2;	// IMP=0x0000000000025d1b
- (id)_performStringQuery:(id)arg1 usingIndex:(id)arg2 shouldAutocomplete:(_Bool)arg3 shouldStem:(_Bool)arg4;	// IMP=0x0000000000025b43
- (id)_performStringQueryUntokenized:(id)arg1 usingIndex:(id)arg2;	// IMP=0x0000000000025a5e
- (id)_performStringQueryOverride:(id)arg1 usingIndex:(id)arg2;	// IMP=0x000000000002591d
- (id)performQuery:(id)arg1 usingIndex:(id)arg2;	// IMP=0x0000000000025863
- (id)performStringQuery:(id)arg1;	// IMP=0x000000000002541b
- (void)preheat;	// IMP=0x00000000000253de
- (void)dealloc;	// IMP=0x000000000002539f
- (id)initWithLocale:(id)arg1 andIndexManager:(id)arg2 andStringStemmer:(id)arg3 andAutocompleteProvider:(id)arg4;	// IMP=0x0000000000025234
- (id)initWithLocale:(id)arg1 andAssetBundle:(id)arg2;	// IMP=0x00000000000250e8
- (id)initWithLocale:(id)arg1;	// IMP=0x000000000002504f
- (id)init;	// IMP=0x000000000002503b

@end
