//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreBookkeeperClient/NSSecureCoding-Protocol.h>

@class SBCPlaybackPositionDomain;

__attribute__((visibility("hidden")))
@interface SBCClientConfiguration : NSObject <NSSecureCoding>
{
    SBCPlaybackPositionDomain *_playbackPositionDomain;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000486c
- (void).cxx_destruct;	// IMP=0x000000000000485c
@property(readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // @synthesize playbackPositionDomain=_playbackPositionDomain;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000047f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000047cf
- (id)description;	// IMP=0x0000000000004749
- (id)initWithPlaybackPositionDomain:(id)arg1;	// IMP=0x00000000000046de

@end
