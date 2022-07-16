//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosFormats/PFStoryMutableRecipe-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol PFStoryRecipeSongAsset, PFStoryRecipeStyle;

@interface PFStoryConcreteMutableRecipe <PFStoryMutableRecipe>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073a0c
@property(copy, nonatomic) NSDictionary *seedSongIdentifiersByCatalog; // @dynamic seedSongIdentifiersByCatalog;
@property(retain, nonatomic) NSDictionary *autoEditDecisionLists; // @dynamic autoEditDecisionLists;
@property(nonatomic) CDStruct_5d4c7ed3 overallDurationInfo;
- (void)removeLibraryWithKind:(long long)arg1;	// IMP=0x00000000000738a5
- (void)addLibrary:(id)arg1;	// IMP=0x00000000000737f1
- (void)removePresentationWithIdentifier:(id)arg1;	// IMP=0x00000000000736b5
- (void)addPresentation:(id)arg1;	// IMP=0x0000000000073601
@property(copy, nonatomic) NSArray *presentations; // @dynamic presentations;
- (void)removeAssetWithIdentifier:(id)arg1;	// IMP=0x0000000000073498
@property(copy, nonatomic) id <PFStoryRecipeStyle> currentStyle; // @dynamic currentStyle;
- (void)addAsset:(id)arg1;	// IMP=0x00000000000733d0
@property(copy, nonatomic) NSArray *assets; // @dynamic assets;
@property(copy, nonatomic) NSArray *libraries; // @dynamic libraries;
@property(nonatomic) long long minorVersion;
@property(nonatomic) long long majorVersion;
@property(copy, nonatomic) NSString *contentIdentifier;

// Remaining properties
@property(readonly, copy, nonatomic) id <PFStoryRecipeSongAsset> currentStyleSongAsset;
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) long long numberOfAssets;
@property(readonly, nonatomic) long long numberOfPresentations;

@end

