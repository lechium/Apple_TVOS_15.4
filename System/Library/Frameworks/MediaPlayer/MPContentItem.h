//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject
{
    void *_mediaRemoteContentItem;	// 8 = 0x8
    MPMediaItemArtwork *_artwork;	// 16 = 0x10
}

+ (_Bool)shouldPushArtworkData;	// IMP=0x000000000022fc76
+ (void)performChangeImmediately:(CDUnknownBlockType)arg1;	// IMP=0x000000000022fb6f
+ (void)performSuppressingChangeNotifications:(CDUnknownBlockType)arg1;	// IMP=0x000000000022fa68
+ (_Bool)isSuppressingChangeNotifications;	// IMP=0x000000000022f9c5
- (void).cxx_destruct;	// IMP=0x000000000022f92b
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @synthesize artwork=_artwork;
@property(readonly, nonatomic) void *_mediaRemoteContentItem; // @synthesize _mediaRemoteContentItem;
- (void)_loadArtwork:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000022f905
- (void)_postItemChangedNotificationWithDeltaBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000022f61a
@property(nonatomic, getter=isPlayable) _Bool playable;
@property(nonatomic, getter=isStreamingContent) _Bool streamingContent;
@property(nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(nonatomic, getter=isContainer) _Bool container;
@property(nonatomic) float playbackProgress;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022eedc
- (id)createExternalRepresentation;	// IMP=0x000000000022eeab
- (id)description;	// IMP=0x000000000022edf5
- (void)dealloc;	// IMP=0x000000000022edb6
- (id)_initWithMediaRemoteContentItem:(void *)arg1;	// IMP=0x000000000022ed27
- (id)initWithExternalRepresentation:(id)arg1;	// IMP=0x000000000022ecf3
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000022eb7f
- (id)init;	// IMP=0x000000000022eb04

@end
