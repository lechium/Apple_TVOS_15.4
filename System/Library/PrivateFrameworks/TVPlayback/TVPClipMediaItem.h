//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol TVPMediaItem;

@interface TVPClipMediaItem : NSObject
{
    NSObject<TVPMediaItem> *_mediaItem;	// 8 = 0x8
    NSSet *_localMetadataKeys;	// 16 = 0x10
    NSMutableDictionary *_localMetadata;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a0d55
@property(retain, nonatomic) NSMutableDictionary *localMetadata; // @synthesize localMetadata=_localMetadata;
@property(retain, nonatomic) NSSet *localMetadataKeys; // @synthesize localMetadataKeys=_localMetadataKeys;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000000a0cb4
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000a0c49
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000a0bd7
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000a0b87
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000a0af6
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000a0a90
- (void)_mediaItemMetadataWillOrDidChange:(id)arg1;	// IMP=0x00000000000a09d0
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000000000a095c
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000000a06db
- (_Bool)hasTrait:(id)arg1;	// IMP=0x00000000000a0656
- (void)dealloc;	// IMP=0x00000000000a05e1
- (id)initWithMediaItem:(id)arg1 clipTimeRange:(id)arg2;	// IMP=0x00000000000a0305

@end

