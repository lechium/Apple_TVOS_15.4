//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class _ICLLPlaybackControlSettings;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettingsQuery : PBCodable <NSCopying>
{
    _ICLLPlaybackControlSettings *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000800cd
- (unsigned long long)hash;	// IMP=0x00000000000800b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000080016
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ff9e
- (void)writeTo:(id)arg1;	// IMP=0x000000000007ff7a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007ff6d
- (id)dictionaryRepresentation;	// IMP=0x000000000007fee3
- (id)description;	// IMP=0x000000000007fe34

@end
