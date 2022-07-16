//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol TVPMediaItem;

@interface TVCKSceneMediaItem : NSObject
{
    NSObject<TVPMediaItem> *_mediaItem;	// 8 = 0x8
    NSSet *_localMetadataKeys;	// 16 = 0x10
    NSMutableDictionary *_localMetadata;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a3fe1
@property(retain, nonatomic) NSMutableDictionary *localMetadata; // @synthesize localMetadata=_localMetadata;
@property(retain, nonatomic) NSSet *localMetadataKeys; // @synthesize localMetadataKeys=_localMetadataKeys;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000000a3f40
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000a3ed5
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000a3e63
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000a3e13
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000a3d82
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000a3d1c
- (void)_mediaItemMetadataWillOrDidChange:(id)arg1;	// IMP=0x00000000000a3c5c
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000000000a3be8
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000000a3967
- (_Bool)hasTrait:(id)arg1;	// IMP=0x00000000000a38e2
- (void)dealloc;	// IMP=0x00000000000a386d
- (id)initWithMediaItem:(id)arg1 sceneTimeRange:(id)arg2;	// IMP=0x00000000000a3591

@end

