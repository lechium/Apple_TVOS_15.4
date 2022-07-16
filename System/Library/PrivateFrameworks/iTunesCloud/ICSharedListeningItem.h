//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICLiveLinkIdentity, NSDictionary, NSString;

@interface ICSharedListeningItem : NSObject <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_mediaIdentifier;	// 16 = 0x10
    ICLiveLinkIdentity *_contributorIdentity;	// 24 = 0x18
    NSDictionary *_playParams;	// 32 = 0x20
}

+ (id)itemWithMediaIdentifier:(id)arg1;	// IMP=0x00000000000ba091
- (void).cxx_destruct;	// IMP=0x00000000000ba053
@property(readonly, copy, nonatomic) NSDictionary *playParams; // @synthesize playParams=_playParams;
@property(readonly, copy, nonatomic) ICLiveLinkIdentity *contributorIdentity; // @synthesize contributorIdentity=_contributorIdentity;
@property(readonly, copy, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_playParamsForPlaybackItemProto:(id)arg1;	// IMP=0x00000000000b9d9e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b9d93
- (id)description;	// IMP=0x00000000000b9d45
- (id)initWithProtobuf:(id)arg1 identity:(id)arg2;	// IMP=0x00000000000b9bee

@end

