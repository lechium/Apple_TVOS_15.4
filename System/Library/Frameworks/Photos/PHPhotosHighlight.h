//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSManagedObjectID, NSString;

@interface PHPhotosHighlight
{
    unsigned long long _assetsCount;	// 112 = 0x70
    _Bool _enriched;	// 120 = 0x78
    _Bool _recent;	// 121 = 0x79
    unsigned short _kind;	// 122 = 0x7a
    unsigned short _type;	// 124 = 0x7c
    unsigned short _category;	// 126 = 0x7e
    unsigned short _visibilityState;	// 128 = 0x80
    unsigned short _enrichmentState;	// 130 = 0x82
    short _highlightVersion;	// 132 = 0x84
    short _enrichmentVersion;	// 134 = 0x86
    unsigned long long _extendedCount;	// 136 = 0x88
    unsigned long long _summaryCount;	// 144 = 0x90
    NSString *_verboseSmartDescription;	// 152 = 0x98
    long long _startTimeZoneOffset;	// 160 = 0xa0
    long long _endTimeZoneOffset;	// 168 = 0xa8
    double _promotionScore;	// 176 = 0xb0
    unsigned long long _mood;	// 184 = 0xb8
    NSDate *_localStartDate;	// 192 = 0xc0
    NSDate *_localEndDate;	// 200 = 0xc8
    unsigned long long _dayGroupAssetsCount;	// 208 = 0xd0
    unsigned long long _dayGroupExtendedAssetsCount;	// 216 = 0xd8
    unsigned long long _dayGroupSummaryAssetsCount;	// 224 = 0xe0
    NSString *_subtitle;	// 232 = 0xe8
    NSManagedObjectID *_parentPhotosHighlight;	// 240 = 0xf0
    NSManagedObjectID *_keyAsset;	// 248 = 0xf8
    NSManagedObjectID *_dayGroupKeyAsset;	// 256 = 0x100
    NSManagedObjectID *_monthKeyAsset;	// 264 = 0x108
    NSManagedObjectID *_yearKeyAsset;	// 272 = 0x110
}

+ (_Bool)invalidateHighlightSubtitlesAndRegenerateHighlightTitles;	// IMP=0x00000000000619b8
+ (_Bool)cleanupEmptyHighlights;	// IMP=0x000000000006186b
+ (_Bool)updateHighlightTitles;	// IMP=0x000000000006171e
+ (_Bool)processUnprocessedMomentLocations;	// IMP=0x00000000000615d1
+ (_Bool)processRecentHighlights;	// IMP=0x0000000000061484
+ (id)fetchPhotosHighlightUUIDByMomentUUIDForMomentUUIDs:(id)arg1 options:(id)arg2;	// IMP=0x0000000000061291
+ (id)_fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000000610c9
+ (id)fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2;	// IMP=0x0000000000061040
+ (id)fetchPhotosHighlightUUIDByAssetUUIDForAssets:(id)arg1 options:(id)arg2;	// IMP=0x0000000000060db4
+ (id)fetchChildDayGroupHighlightsForHighlight:(id)arg1 options:(id)arg2;	// IMP=0x0000000000060d06
+ (id)fetchParentDayGroupHighlightForHighlight:(id)arg1 options:(id)arg2;	// IMP=0x0000000000060c58
+ (id)fetchChildHighlightsForHighlight:(id)arg1 options:(id)arg2;	// IMP=0x0000000000060baa
+ (id)fetchParentHighlightsForHighlights:(id)arg1 options:(id)arg2;	// IMP=0x0000000000060afc
+ (id)fetchParentHighlightForHighlight:(id)arg1 options:(id)arg2;	// IMP=0x0000000000060a4e
+ (id)dateRangeTitleGenerator;	// IMP=0x0000000000060a2a
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;	// IMP=0x000000000006088d
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000000607c4
+ (id)entityKeyMap;	// IMP=0x000000000006076e
+ (id)identifierCode;	// IMP=0x0000000000060761
+ (_Bool)managedObjectSupportsTrashedState;	// IMP=0x0000000000060759
+ (id)fetchType;	// IMP=0x000000000006073a
+ (id)managedEntityName;	// IMP=0x000000000006072d
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x00000000000606ca
- (void).cxx_destruct;	// IMP=0x0000000000063cd5
@property(readonly, nonatomic) NSManagedObjectID *yearKeyAsset; // @synthesize yearKeyAsset=_yearKeyAsset;
@property(readonly, nonatomic) NSManagedObjectID *monthKeyAsset; // @synthesize monthKeyAsset=_monthKeyAsset;
@property(readonly, nonatomic) NSManagedObjectID *dayGroupKeyAsset; // @synthesize dayGroupKeyAsset=_dayGroupKeyAsset;
@property(readonly, nonatomic) NSManagedObjectID *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) NSManagedObjectID *parentPhotosHighlight; // @synthesize parentPhotosHighlight=_parentPhotosHighlight;
@property(readonly, nonatomic) short enrichmentVersion; // @synthesize enrichmentVersion=_enrichmentVersion;
@property(readonly, nonatomic) short highlightVersion; // @synthesize highlightVersion=_highlightVersion;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) unsigned short enrichmentState; // @synthesize enrichmentState=_enrichmentState;
@property(readonly, nonatomic) unsigned long long dayGroupSummaryAssetsCount; // @synthesize dayGroupSummaryAssetsCount=_dayGroupSummaryAssetsCount;
@property(readonly, nonatomic) unsigned long long dayGroupExtendedAssetsCount; // @synthesize dayGroupExtendedAssetsCount=_dayGroupExtendedAssetsCount;
@property(readonly, nonatomic) unsigned long long dayGroupAssetsCount; // @synthesize dayGroupAssetsCount=_dayGroupAssetsCount;
@property(retain, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(retain, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(readonly, nonatomic) unsigned long long mood; // @synthesize mood=_mood;
@property(nonatomic, getter=isRecent) _Bool recent; // @synthesize recent=_recent;
@property(nonatomic, getter=isEnriched) _Bool enriched; // @synthesize enriched=_enriched;
@property(readonly, nonatomic) double promotionScore; // @synthesize promotionScore=_promotionScore;
@property(readonly, nonatomic) long long endTimeZoneOffset; // @synthesize endTimeZoneOffset=_endTimeZoneOffset;
@property(readonly, nonatomic) long long startTimeZoneOffset; // @synthesize startTimeZoneOffset=_startTimeZoneOffset;
@property(readonly, nonatomic) unsigned short visibilityState; // @synthesize visibilityState=_visibilityState;
@property(readonly, nonatomic) unsigned short category; // @synthesize category=_category;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned short kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSString *verboseSmartDescription; // @synthesize verboseSmartDescription=_verboseSmartDescription;
- (id)description;	// IMP=0x000000000006394d
@property(readonly, nonatomic) unsigned short preferredCurationType;
@property(readonly, nonatomic) NSManagedObjectID *keyAssetForKind;
@property(readonly, nonatomic) NSString *smartDescription;
- (id)dateDescriptionWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000063698
@property(readonly, nonatomic) NSString *dateDescription;
- (id)localizedSubtitle;	// IMP=0x0000000000063671
- (id)title;	// IMP=0x00000000000634c9
- (unsigned long long)countForCurationType:(unsigned short)arg1;	// IMP=0x000000000006349b
@property(readonly, nonatomic) unsigned long long summaryCount; // @synthesize summaryCount=_summaryCount;
@property(readonly, nonatomic) unsigned long long extendedCount; // @synthesize extendedCount=_extendedCount;
- (unsigned long long)estimatedAssetCount;	// IMP=0x0000000000063410
- (long long)assetCollectionSubtype;	// IMP=0x00000000000633c1
- (_Bool)canShowAvalancheStacks;	// IMP=0x00000000000633b9
- (_Bool)canPerformEditOperation:(long long)arg1;	// IMP=0x00000000000633ac
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x0000000000062cb6

@end

