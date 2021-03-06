//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@interface MPPlaybackArchiveConfiguration : NSObject <NSSecureCoding>
{
    struct CGSize _preferredArtworkSize;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a0a16
@property(nonatomic) struct CGSize preferredArtworkSize; // @synthesize preferredArtworkSize=_preferredArtworkSize;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a09bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a0992
- (id)initWithPreferredArtworkSize:(struct CGSize)arg1;	// IMP=0x00000000000a0940

@end

