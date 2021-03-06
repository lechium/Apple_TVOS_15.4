//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPArtworkDataSourceVisualIdenticality-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPNowPlayingContentItemArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_artworkIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b764d
@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)stringRepresentation;	// IMP=0x00000000001b75d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b754a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b74a7
- (id)initWithIdentifier:(id)arg1 artworkIdentifier:(id)arg2;	// IMP=0x00000000001b73ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

