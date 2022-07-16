//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelTVShowCreator, NSString;

@interface MPModelTVShow
{
}

+ (id)__tagline_KEY;	// IMP=0x00000000002a708f
+ (id)__episodesCount_KEY;	// IMP=0x00000000002a7082
+ (id)__editorialArtworkCatalogBlock_KEY;	// IMP=0x00000000002a7075
+ (id)__artworkCatalogBlock_KEY;	// IMP=0x00000000002a7068
+ (id)__creator_KEY;	// IMP=0x00000000002a705b
+ (id)__shortEditorNotes_KEY;	// IMP=0x00000000002a704e
+ (id)__editorNotes_KEY;	// IMP=0x00000000002a7041
+ (id)__shortTitle_KEY;	// IMP=0x00000000002a7034
+ (id)__title_KEY;	// IMP=0x00000000002a7027
+ (id)kindWithSeasonKind:(id)arg1;	// IMP=0x00000000002a700e
+ (long long)genericObjectType;	// IMP=0x00000000001e30a8
- (id)editorialArtworkCatalog;	// IMP=0x00000000002a6fb6
- (id)artworkCatalog;	// IMP=0x00000000002a6f5e
- (id)humanDescription;	// IMP=0x00000000002a6e38

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(copy, nonatomic) MPModelTVShowCreator *creator; // @dynamic creator;
@property(copy, nonatomic) NSString *editorNotes; // @dynamic editorNotes;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @dynamic editorialArtworkCatalogBlock;
@property(nonatomic) long long episodesCount; // @dynamic episodesCount;
@property(copy, nonatomic) NSString *shortEditorNotes; // @dynamic shortEditorNotes;
@property(copy, nonatomic) NSString *shortTitle; // @dynamic shortTitle;
@property(copy, nonatomic) NSString *tagline; // @dynamic tagline;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

