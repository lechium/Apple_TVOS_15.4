//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelAlbum, MPModelArtist, MPModelGroup, MPModelPlaylist, MPModelRadioStation, NSDate, NSString;

@interface MPModelPlayEvent
{
}

+ (id)playEventWithModelObject:(id)arg1 featureName:(id)arg2;	// IMP=0x0000000000064570
+ (id)__group_KEY;	// IMP=0x0000000000064563
+ (id)__radioStation_KEY;	// IMP=0x0000000000064556
+ (id)__playlist_KEY;	// IMP=0x0000000000064549
+ (id)__artist_KEY;	// IMP=0x000000000006453c
+ (id)__album_KEY;	// IMP=0x000000000006452f
+ (id)__featureName_KEY;	// IMP=0x0000000000064522
+ (id)__datePlayed_KEY;	// IMP=0x0000000000064515
- (id)genericObjectRepresentation;	// IMP=0x0000000000064103
- (long long)itemType;	// IMP=0x0000000000064056
@property(readonly, copy, nonatomic) NSString *title;
- (id)contentItemCollectionInfo;	// IMP=0x000000000009535a

// Remaining properties
@property(retain, nonatomic) MPModelAlbum *album; // @dynamic album;
@property(retain, nonatomic) MPModelArtist *artist; // @dynamic artist;
@property(copy, nonatomic) NSDate *datePlayed; // @dynamic datePlayed;
@property(copy, nonatomic) NSString *featureName; // @dynamic featureName;
@property(retain, nonatomic) MPModelGroup *group; // @dynamic group;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @dynamic radioStation;

@end

