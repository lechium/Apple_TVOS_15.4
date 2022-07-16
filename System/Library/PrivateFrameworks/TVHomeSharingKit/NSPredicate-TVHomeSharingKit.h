//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (TVHomeSharingKit)
+ (id)_tvhk_keyPathsInComparisonPredicate:(id)arg1;	// IMP=0x00000000000b5677
+ (id)_tvhk_keyPathsInCompoundPredicate:(id)arg1;	// IMP=0x00000000000b54af
+ (id)_tvhk_keyPathsInPredicate:(id)arg1;	// IMP=0x00000000000b5351
+ (id)tvhk_predicateWithSubpredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2;	// IMP=0x00000000000b4d0d
+ (id)tvhk_excludeAllPlaylistTypePredicate:(id)arg1;	// IMP=0x00000000000b4b16
+ (id)tvhk_includeAnyPlaylistTypePredicate:(id)arg1;	// IMP=0x00000000000b491f
+ (id)tvhk_unplayedPredicate;	// IMP=0x00000000000b48d8
+ (id)tvhk_notPlaylistTypePredicateWithPlaylistType:(unsigned long long)arg1;	// IMP=0x00000000000b486b
+ (id)tvhk_playlistTypePredicateWithPlaylistType:(unsigned long long)arg1;	// IMP=0x00000000000b47fe
+ (id)tvhk_mediaEntityCollectionArtistIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00000000000b47e2
+ (id)tvhk_mediaItemComposerTitlePredicateWithComposerTitle:(id)arg1;	// IMP=0x00000000000b47c6
+ (id)tvhk_mediaItemAlbumArtistIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00000000000b47aa
+ (id)tvhk_mediaEntityTypePredicateWithMediaEntityType:(id)arg1;	// IMP=0x00000000000b478e
+ (id)tvhk_mediaEntityCompilationAlbumsPredicateWithWantCompilationAlbums:(_Bool)arg1;	// IMP=0x00000000000b4721
+ (id)tvhk_mediaEntityAlbumIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00000000000b4705
+ (id)tvhk_genreTitlePredicateWithGenreTitle:(id)arg1;	// IMP=0x00000000000b46e9
+ (id)tvhk_identifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00000000000b46cd
+ (id)tvhk_notEqualPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00000000000b46a5
+ (id)tvhk_equalPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00000000000b467d
+ (id)tvhk_containsPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00000000000b4655
- (id)tvhk_keyPathsInPredicate;	// IMP=0x00000000000b532a
- (id)tvhk_predicateWithAlbumIdentifierPredicateRemoved:(id *)arg1;	// IMP=0x00000000000b5007
- (id)tvhk_predicateWithRemovePredicateTest:(CDUnknownBlockType)arg1 removedPredicate:(id *)arg2;	// IMP=0x00000000000b4de0
@end
