//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPBaseMediaItem.h>

@class TVCKDataItem;

@interface TVCKDataMediaItem : TVPBaseMediaItem
{
    TVCKDataItem *_dataItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000fb89
@property(retain, nonatomic) TVCKDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)_mediaTypeStringFromDataType:(id)arg1;	// IMP=0x000000000000f8c9
- (id)_propertyNameMappings;	// IMP=0x000000000000f52e
- (_Bool)_hasVideoContent;	// IMP=0x000000000000f423
- (_Bool)_supportsPlayCounts;	// IMP=0x000000000000f411
- (_Bool)_supportsBookmarks;	// IMP=0x000000000000f34e
- (id)_dataItemValueForProperty:(id)arg1;	// IMP=0x000000000000f2cb
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;	// IMP=0x000000000000f264
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x000000000000f1f3
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000000f047
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000000000e4ba
- (_Bool)hasTrait:(id)arg1;	// IMP=0x000000000000e37a
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x000000000000e2a7
- (id)mediaItemURL;	// IMP=0x000000000000e28b
- (id)description;	// IMP=0x000000000000e1dc
- (id)initWithDataItem:(id)arg1;	// IMP=0x000000000000e16e

@end

