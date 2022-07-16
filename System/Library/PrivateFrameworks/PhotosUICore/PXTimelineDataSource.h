//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, PHPhotoLibrary, PHUserFeedbackCalculator;

@interface PXTimelineDataSource : NSObject
{
    NSDictionary *_keyAssetByMemoryLocalIdentifier;	// 8 = 0x8
    NSDictionary *_keyAssetByFeaturedPhotoLocalIdentifier;	// 16 = 0x10
    NSDictionary *_suggestedCropByFeaturedPhotoLocalIdentifier;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
    NSMutableArray *_memoryCandidates;	// 40 = 0x28
    NSMutableArray *_featuredPhotoCandidates;	// 48 = 0x30
    NSMutableArray *_filteredContent;	// 56 = 0x38
    PHUserFeedbackCalculator *_userFeedbackCalculator;	// 64 = 0x40
    struct CGSize _widgetSize;	// 72 = 0x48
}

+ (_Bool)_momentIsLocationTypeAtWork:(id)arg1;	// IMP=0x0000000000176a97
- (void).cxx_destruct;	// IMP=0x000000000017673f
@property(retain, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator; // @synthesize userFeedbackCalculator=_userFeedbackCalculator;
@property(retain, nonatomic) NSMutableArray *filteredContent; // @synthesize filteredContent=_filteredContent;
@property(retain, nonatomic) NSMutableArray *featuredPhotoCandidates; // @synthesize featuredPhotoCandidates=_featuredPhotoCandidates;
@property(retain, nonatomic) NSMutableArray *memoryCandidates; // @synthesize memoryCandidates=_memoryCandidates;
@property(nonatomic) struct CGSize widgetSize; // @synthesize widgetSize=_widgetSize;
@property(readonly, nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSDictionary *suggestedCropByFeaturedPhotoLocalIdentifier; // @synthesize suggestedCropByFeaturedPhotoLocalIdentifier=_suggestedCropByFeaturedPhotoLocalIdentifier;
@property(readonly, nonatomic) NSDictionary *keyAssetByFeaturedPhotoLocalIdentifier; // @synthesize keyAssetByFeaturedPhotoLocalIdentifier=_keyAssetByFeaturedPhotoLocalIdentifier;
@property(readonly, nonatomic) NSDictionary *keyAssetByMemoryLocalIdentifier; // @synthesize keyAssetByMemoryLocalIdentifier=_keyAssetByMemoryLocalIdentifier;
- (id)_gatedCropSpecBySuggestionLocalIdentiferFromSuggestions:(id)arg1;	// IMP=0x00000000001759a9
- (_Bool)_isAcceptableUserFeedbackForAssetCollection:(id)arg1 personUUIDs:(id)arg2 asset:(id)arg3;	// IMP=0x0000000000175712
- (id)_fetchMomentByAssetUUIDForAssets:(id)arg1;	// IMP=0x00000000001750d8
- (id)_gatedKeyAssetBySuggestionLocalIdentifierWithSuggestions:(id)arg1;	// IMP=0x0000000000174634
- (id)_gatedKeyAssetByMemoryLocalIdentifierWithMemories:(id)arg1;	// IMP=0x0000000000173d8a
- (id)keyAssetFetchOptions;	// IMP=0x0000000000173c7a
- (id)_fetchFallbackSuggestionsAndSetFeatured;	// IMP=0x0000000000173936
- (id)_fetchFallbackMemoriesAndSetFeatured;	// IMP=0x00000000001735f2
- (id)_fetchSuggestionsWithFeaturedState:(unsigned short)arg1 fetchLimit:(unsigned long long)arg2;	// IMP=0x00000000001732db
- (id)_fetchSuggestionsWithFeaturedState:(unsigned short)arg1;	// IMP=0x00000000001732c4
- (id)_fetchMemoriesWithFeaturedState:(long long)arg1 fetchLimit:(unsigned long long)arg2;	// IMP=0x0000000000172fc3
- (id)_fetchMemoriesWithFeaturedState:(long long)arg1;	// IMP=0x0000000000172fac
- (id)_defaultSortDescriptors;	// IMP=0x0000000000172ed0
- (void)_initializeFeaturedCandidatesWithMemoryResult:(id)arg1 suggestionResult:(id)arg2;	// IMP=0x0000000000172ca0
@property(readonly, nonatomic) NSArray *featuredPhotos;
@property(readonly, nonatomic) NSArray *memories;
- (id)initWithPhotoLibrary:(id)arg1 forWidgetSize:(struct CGSize)arg2;	// IMP=0x0000000000172831
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000017280f
- (id)init;	// IMP=0x0000000000172795

@end
