//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PLSearchProcessor, PXSearchIndexManager, PXSearchQuery, PXSearchQueryResultsProcessor;
@protocol OS_dispatch_queue;

@interface PXSearchQueryExecutor : NSObject
{
    _Bool _requestSceneAncestryInformation;	// 8 = 0x8
    PXSearchQuery *_currentSearchQuery;	// 16 = 0x10
    CDUnknownBlockType _resultsHandler;	// 24 = 0x18
    PXSearchQueryResultsProcessor *_searchResultsProcessor;	// 32 = 0x20
    PLSearchProcessor *_plSearchProcessor;	// 40 = 0x28
    PXSearchIndexManager *_searchIndexManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queryQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    NSDictionary *_sceneAncestryInformation;	// 72 = 0x48
}

+ (_Bool)_sectionIsHighlightsSection:(id)arg1;	// IMP=0x00000000001af45b
- (void).cxx_destruct;	// IMP=0x00000000001ade39
@property(readonly, nonatomic) _Bool requestSceneAncestryInformation; // @synthesize requestSceneAncestryInformation=_requestSceneAncestryInformation;
@property(copy, nonatomic) NSDictionary *sceneAncestryInformation; // @synthesize sceneAncestryInformation=_sceneAncestryInformation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(readonly, nonatomic) PXSearchIndexManager *searchIndexManager; // @synthesize searchIndexManager=_searchIndexManager;
@property(readonly, nonatomic) PLSearchProcessor *plSearchProcessor; // @synthesize plSearchProcessor=_plSearchProcessor;
@property(retain, nonatomic) PXSearchQueryResultsProcessor *searchResultsProcessor; // @synthesize searchResultsProcessor=_searchResultsProcessor;
@property(readonly, copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
- (id)_limitedSearchSuggestions:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x00000000001add3a
- (id)_searchSuggestionsFromPSIQuery:(id)arg1 searchSections:(id)arg2 suggestionLimit:(unsigned long long)arg3;	// IMP=0x00000000001ada79
- (id)_backendQueryFromSearchQuery:(id)arg1;	// IMP=0x00000000001ad450
- (void)_processedQueryResultsForSearchQuery:(id)arg1 psiQuery:(id)arg2 assetResults:(id)arg3 collectionResults:(id)arg4 topAssetsResult:(id)arg5 topCollectionResults:(id)arg6;	// IMP=0x00000000001ad049
- (void)executeSearchQuery:(id)arg1;	// IMP=0x00000000001acda0
@property(copy, nonatomic) PXSearchQuery *currentSearchQuery; // @synthesize currentSearchQuery=_currentSearchQuery;
- (void)_setupSearchResultsProcessor;	// IMP=0x00000000001acbda
- (void)_requestSceneAncestryInformation;	// IMP=0x00000000001acb3e
- (id)initWithSearchIndexManager:(id)arg1 requestSceneAncestryInformation:(_Bool)arg2 resultsHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ac98e
- (id)init;	// IMP=0x00000000001ac914

@end

