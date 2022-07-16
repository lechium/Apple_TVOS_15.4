//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPArtworkDataSourceVisualIdenticality-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPStaticArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality>
{
    NSString *_imageArtworkIdentifier;	// 8 = 0x8
    NSString *_videoArtworkIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000be26f
@property(copy, nonatomic) NSString *videoArtworkIdentifier; // @synthesize videoArtworkIdentifier=_videoArtworkIdentifier;
@property(copy, nonatomic) NSString *imageArtworkIdentifier; // @synthesize imageArtworkIdentifier=_imageArtworkIdentifier;
- (id)stringRepresentation;	// IMP=0x00000000000be178
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000be125
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000be078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

