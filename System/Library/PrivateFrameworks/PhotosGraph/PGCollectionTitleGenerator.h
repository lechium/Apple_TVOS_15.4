//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, PGTitleGenerationContext, PGTitleTuple, PHAsset, PHAssetCollection;
@protocol PGEventEnrichment;

@interface PGCollectionTitleGenerator : NSObject
{
    PGTitleGenerationContext *_titleGenerationContext;	// 8 = 0x8
    _Bool _forDiagnostics;	// 16 = 0x10
    id <PGEventEnrichment> _collection;	// 24 = 0x18
    PGTitleTuple *_titleTuple;	// 32 = 0x20
    PHAsset *_keyAsset;	// 40 = 0x28
    PHAssetCollection *_curatedAssetCollection;	// 48 = 0x30
    NSSet *_whitelistedMeaningLabels;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000023fe69
@property(retain, nonatomic) NSSet *whitelistedMeaningLabels; // @synthesize whitelistedMeaningLabels=_whitelistedMeaningLabels;
@property(nonatomic) _Bool forDiagnostics; // @synthesize forDiagnostics=_forDiagnostics;
@property(retain, nonatomic) PHAssetCollection *curatedAssetCollection; // @synthesize curatedAssetCollection=_curatedAssetCollection;
@property(retain, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(retain, nonatomic) PGTitleTuple *titleTuple; // @synthesize titleTuple=_titleTuple;
@property(retain, nonatomic) id <PGEventEnrichment> collection; // @synthesize collection=_collection;
- (id)_sortedMeaningLabels;	// IMP=0x000000000023fdaa
- (id)_meaningLabelForTitle;	// IMP=0x000000000023fc21
- (void)_generateTitleTuples;	// IMP=0x000000000023f9a4
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 titleGenerationContext:(id)arg4;	// IMP=0x000000000023f8d3
- (id)initWithCollection:(id)arg1 whitelistedMeaningLabels:(id)arg2 titleGenerationContext:(id)arg3;	// IMP=0x000000000023f865
- (id)initWithCollection:(id)arg1 titleGenerationContext:(id)arg2;	// IMP=0x000000000023f7cc

@end

