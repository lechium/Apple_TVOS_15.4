//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSString;

@interface ICPlayActivityEventContainerIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    long long _adamID;	// 8 = 0x8
    NSString *_cloudAlbumID;	// 16 = 0x10
    unsigned long long _cloudPlaylistID;	// 24 = 0x18
    NSString *_globalPlaylistID;	// 32 = 0x20
    NSString *_playlistVersionHash;	// 40 = 0x28
    long long _stationID;	// 48 = 0x30
    NSString *_stationHash;	// 56 = 0x38
    NSString *_stationStringID;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000125cdd
- (void).cxx_destruct;	// IMP=0x0000000000125c94
@property(readonly, nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(readonly, copy, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property(readonly, copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(readonly, copy, nonatomic) NSString *playlistVersionHash; // @synthesize playlistVersionHash=_playlistVersionHash;
@property(readonly, copy, nonatomic) NSString *globalPlaylistID; // @synthesize globalPlaylistID=_globalPlaylistID;
@property(readonly, nonatomic) unsigned long long cloudPlaylistID; // @synthesize cloudPlaylistID=_cloudPlaylistID;
@property(readonly, copy, nonatomic) NSString *cloudAlbumID; // @synthesize cloudAlbumID=_cloudAlbumID;
@property(readonly, nonatomic) long long adamID; // @synthesize adamID=_adamID;
- (id)_copyWithClass:(Class)arg1;	// IMP=0x0000000000125bc6
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000125b98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000125b8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000125aa1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001258f6
- (id)description;	// IMP=0x000000000012570a

@end
