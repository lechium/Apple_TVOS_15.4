//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVPlayerItem.h>

#import <TVMLKit/TVPlayerItemImpl-Protocol.h>

@class NSArray, NSString;
@protocol AVContentKeyRecipient;

@interface AVPlayerItem (TVPlayerAdaptor) <TVPlayerItemImpl>
@property(readonly, nonatomic) id <AVContentKeyRecipient> contentKeyRecipient;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_198678f7 duration;
@property(copy, nonatomic) NSArray *externalMetadata;
@property(readonly, nonatomic) _Bool hasVideo;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *interstitialTimeRanges;
@property(copy, nonatomic) NSArray *navigationMarkerGroups;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *timedMetadata;
@end
