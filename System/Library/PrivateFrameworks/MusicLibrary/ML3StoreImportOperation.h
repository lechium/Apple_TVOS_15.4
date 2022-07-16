//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ML3StoreItemPlaylistData, ML3StoreItemTrackData;

__attribute__((visibility("hidden")))
@interface ML3StoreImportOperation
{
    ML3StoreItemTrackData *_trackData;	// 8 = 0x8
    ML3StoreItemPlaylistData *_playlistData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011d559
- (_Bool)_importPlaylistsUsingImportSession:(void *)arg1;	// IMP=0x000000000011ce5a
- (_Bool)_importTracksUsingImportSession:(void *)arg1;	// IMP=0x000000000011c766
- (_Bool)_performImportWithTransaction:(id)arg1;	// IMP=0x000000000011bf2c
- (void)main;	// IMP=0x000000000011bd2c
- (unsigned long long)importSource;	// IMP=0x000000000011bd21

@end

