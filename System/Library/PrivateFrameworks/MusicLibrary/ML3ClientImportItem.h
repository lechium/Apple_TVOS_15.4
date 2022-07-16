//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>
#import <MusicLibrary/NSSecureCoding-Protocol.h>

@class MIPMediaItem, MIPMultiverseIdentifier;

@interface ML3ClientImportItem : NSObject <NSSecureCoding, NSCopying>
{
    MIPMultiverseIdentifier *_multiverseIdentifier;	// 8 = 0x8
    MIPMediaItem *_mediaItem;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005c572
- (void).cxx_destruct;	// IMP=0x000000000005c54a
@property(readonly, copy, nonatomic) MIPMultiverseIdentifier *multiverseIdentifier; // @synthesize multiverseIdentifier=_multiverseIdentifier;
@property(readonly, copy, nonatomic) MIPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005c4c8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005c3ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c3e3
- (id)initWithMultiverseIdentifier:(id)arg1 mediaItem:(id)arg2;	// IMP=0x000000000005c34a

@end
