//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MRDNowPlayingPlayerClientArtworkRequest : NSObject
{
    NSString *_contentItemIdentifer;	// 8 = 0x8
    NSString *_artworkIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001bc82
@property(readonly, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(readonly, nonatomic) NSString *contentItemIdentifer; // @synthesize contentItemIdentifer=_contentItemIdentifer;
- (id)initWithContentItem:(id)arg1;	// IMP=0x001000000001bbd8

@end

