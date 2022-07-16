//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosFormats/PFStoryRecipe-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol PFStoryRecipeSongAsset, PFStoryRecipeStyle;

@interface PFStoryConcreteRecipe : NSObject <PFStoryRecipe>
{
    NSString *_contentIdentifier;	// 8 = 0x8
    long long _majorVersion;	// 16 = 0x10
    long long _minorVersion;	// 24 = 0x18
    NSArray *_libraries;	// 32 = 0x20
    NSArray *_assets;	// 40 = 0x28
    NSArray *_presentations;	// 48 = 0x30
    CDStruct_5d4c7ed3 _overallDurationInfo;	// 56 = 0x38
    id <PFStoryRecipeStyle> _currentStyle;	// 136 = 0x88
    NSString *_currentStyleIdentifier;	// 144 = 0x90
    NSDictionary *_autoEditDecisionLists;	// 152 = 0x98
    NSDictionary *_seedSongIdentifiersByCatalog;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000732bf
@property(readonly, copy, nonatomic) NSDictionary *seedSongIdentifiersByCatalog; // @synthesize seedSongIdentifiersByCatalog=_seedSongIdentifiersByCatalog;
@property(readonly, copy, nonatomic) NSArray *presentations; // @synthesize presentations=_presentations;
@property(readonly, nonatomic) NSDictionary *autoEditDecisionLists; // @synthesize autoEditDecisionLists=_autoEditDecisionLists;
@property(readonly, copy, nonatomic) id <PFStoryRecipeStyle> currentStyle; // @synthesize currentStyle=_currentStyle;
@property(readonly, nonatomic) CDStruct_5d4c7ed3 overallDurationInfo; // @synthesize overallDurationInfo=_overallDurationInfo;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, copy, nonatomic) NSArray *libraries; // @synthesize libraries=_libraries;
@property(readonly, nonatomic) long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, nonatomic) long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(readonly, copy, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073051
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073046
- (_Bool)_isDictionary:(id)arg1 equalToDictionary:(id)arg2 usingObjectEquality:(CDUnknownBlockType)arg3;	// IMP=0x0000000000072ecd
- (_Bool)_isArray:(id)arg1 equalToArray:(id)arg2 usingObjectEquality:(CDUnknownBlockType)arg3;	// IMP=0x0000000000072d54
- (_Bool)isEqualToRecipe:(id)arg1;	// IMP=0x000000000007263f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000725e2
@property(readonly, nonatomic) NSString *diagnosticDescription;
- (id)presentationAtIndex:(long long)arg1;	// IMP=0x00000000000724f8
@property(readonly, nonatomic) long long numberOfPresentations;
@property(readonly, copy, nonatomic) id <PFStoryRecipeSongAsset> currentStyleSongAsset;
- (id)seedSongAssetForCatalog:(id)arg1;	// IMP=0x00000000000722aa
- (id)assetWithKind:(long long)arg1 identifier:(id)arg2;	// IMP=0x0000000000072190
- (void)enumerateAssetsWithKind:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000720cd
- (id)assetAtIndex:(long long)arg1;	// IMP=0x000000000007206e
@property(readonly, nonatomic) long long numberOfAssets;
- (id)libraryWithKind:(long long)arg1;	// IMP=0x0000000000071ecb
- (id)initWithContentIdentifier:(id)arg1 majorVersion:(long long)arg2 minorVersion:(long long)arg3 libraries:(id)arg4 assets:(id)arg5 overallDurationInfo:(CDStruct_5d4c7ed3)arg6 currentStyle:(id)arg7 seedSongIdentifiersByCatalog:(id)arg8 autoDecisionLists:(id)arg9 presentations:(id)arg10;	// IMP=0x0000000000071cda
- (id)init;	// IMP=0x0000000000071c76

@end

