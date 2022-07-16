//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class MPMediaPredicate, NSArray, NSDictionary, NSError, NSMutableSet, VUIMPMediaLibrary, VUIMediaEntityFetchRequest, VUIMediaEntityFetchResponse, VUIMediaEntityKind, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntitiesSingleFetchOperation : VUIAsynchronousOperation
{
    _Bool _processPredicateAfterFetch;	// 8 = 0x8
    _Bool _processRangeAfterFetch;	// 9 = 0x9
    VUIMediaEntityFetchRequest *_request;	// 16 = 0x10
    VUIMediaEntityFetchResponse *_response;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    VUIMPMediaLibrary *_mediaLibrary;	// 40 = 0x28
    VUIMediaEntityKind *_mediaEntityKind;	// 48 = 0x30
    NSMutableSet *_prefetchProperties;	// 56 = 0x38
    MPMediaPredicate *_mediaQueryPredicate;	// 64 = 0x40
    NSArray *_mediaQuerySortOrderingProperties;	// 72 = 0x48
    NSDictionary *_mediaQuerySortOrderingDirectionMappings;	// 80 = 0x50
    NSArray *_postFetchSortDescriptors;	// 88 = 0x58
    VUIMediaEntityType *_currentFetchMediaEntityType;	// 96 = 0x60
}

+ (id)_sortIndexesWithMediaQuerySection:(id)arg1;	// IMP=0x000000000000a15c
- (void).cxx_destruct;	// IMP=0x000000000000a69a
@property(retain, nonatomic) VUIMediaEntityType *currentFetchMediaEntityType; // @synthesize currentFetchMediaEntityType=_currentFetchMediaEntityType;
@property(nonatomic) _Bool processRangeAfterFetch; // @synthesize processRangeAfterFetch=_processRangeAfterFetch;
@property(nonatomic) _Bool processPredicateAfterFetch; // @synthesize processPredicateAfterFetch=_processPredicateAfterFetch;
@property(retain, nonatomic) NSArray *postFetchSortDescriptors; // @synthesize postFetchSortDescriptors=_postFetchSortDescriptors;
@property(retain, nonatomic) NSDictionary *mediaQuerySortOrderingDirectionMappings; // @synthesize mediaQuerySortOrderingDirectionMappings=_mediaQuerySortOrderingDirectionMappings;
@property(retain, nonatomic) NSArray *mediaQuerySortOrderingProperties; // @synthesize mediaQuerySortOrderingProperties=_mediaQuerySortOrderingProperties;
@property(retain, nonatomic) MPMediaPredicate *mediaQueryPredicate; // @synthesize mediaQueryPredicate=_mediaQueryPredicate;
@property(retain, nonatomic) NSMutableSet *prefetchProperties; // @synthesize prefetchProperties=_prefetchProperties;
@property(retain, nonatomic) VUIMediaEntityKind *mediaEntityKind; // @synthesize mediaEntityKind=_mediaEntityKind;
@property(retain, nonatomic) VUIMPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) VUIMediaEntityFetchResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) VUIMediaEntityFetchRequest *request; // @synthesize request=_request;
- (id)_coalesceResponses:(id)arg1;	// IMP=0x000000000000a3af
- (id)_fetchResponseWithMediaEntities:(id)arg1 mediaQuerySections:(id)arg2;	// IMP=0x0000000000009e95
- (id)_collectionsFetchResponseWithMediaQuery:(id)arg1;	// IMP=0x0000000000009abf
- (id)_itemsFetchResponseWithMediaQuery:(id)arg1;	// IMP=0x0000000000009820
- (id)_mediaEntities:(id)arg1 subarrayWithRange:(struct _NSRange)arg2;	// IMP=0x000000000000978d
- (id)_processFetchedMediaEntities:(id)arg1;	// IMP=0x0000000000009545
- (void)_addPrefetchPropertiesToMediaQuery:(id)arg1;	// IMP=0x0000000000009306
- (void)_addSortingPropertiesToMediaQuery:(id)arg1;	// IMP=0x000000000000924c
- (void)_addPredicateToMediaQuery:(id)arg1;	// IMP=0x00000000000091e1
- (void)_addEntityLimitToMediaQuery:(id)arg1;	// IMP=0x0000000000009156
- (id)_baseMediaQuery;	// IMP=0x0000000000008eae
- (id)_mediaQuery;	// IMP=0x0000000000008e2b
- (void)_populatePrefetchProperties;	// IMP=0x0000000000008bfd
- (id)_mediaEntityKind;	// IMP=0x0000000000008ac8
- (id)_mediaEntityPropertyDescriptorForFilteringWithKeyPath:(id)arg1;	// IMP=0x0000000000008974
- (id)_bitTestMediaQueryPropertyPredicateWithKeyPathBitTestExpression:(id)arg1 operatorType:(unsigned long long)arg2 constantExpression:(id)arg3;	// IMP=0x0000000000008696
- (id)_keyPathMediaQueryPropertyPredicateWithKeyPathExpression:(id)arg1 operatorType:(unsigned long long)arg2 constantExpression:(id)arg3;	// IMP=0x000000000000847d
- (id)_mediaQueryPropertyPredicateForComparisonPredicate:(id)arg1;	// IMP=0x00000000000082f7
- (id)_mediaQueryPredicateForCompoundPredicate:(id)arg1;	// IMP=0x000000000000808a
- (id)_mediaQueryPredicateForPredicate:(id)arg1;	// IMP=0x0000000000007f7b
- (void)_processPredicate;	// IMP=0x0000000000007e65
- (_Bool)_isSortingBeingPerformedByMediaQuery;	// IMP=0x0000000000007e1d
- (void)_processSortDescriptors;	// IMP=0x000000000000780c
- (_Bool)_shouldSortUsingMediaQuery;	// IMP=0x00000000000076eb
- (void)_processRange;	// IMP=0x000000000000767a
- (void)executionDidBegin;	// IMP=0x000000000000734f
- (id)initWithMediaLibrary:(id)arg1 request:(id)arg2;	// IMP=0x00000000000071b1
- (id)init;	// IMP=0x0000000000007142

@end
