//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>
#import <VideosUI/NSMutableCopying-Protocol.h>
#import <VideosUI/NSSecureCoding-Protocol.h>

@class NSDate, VUIBookmarkKey;

__attribute__((visibility("hidden")))
@interface VUIBookmark : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    _Bool _hasBeenPlayed;	// 8 = 0x8
    _Bool _hasBeenRented;	// 9 = 0x9
    _Bool _isMarkedAsUnwatched;	// 10 = 0xa
    _Bool _hasFakeTimestamp;	// 11 = 0xb
    VUIBookmarkKey *_key;	// 16 = 0x10
    double _bookmarkTime;	// 24 = 0x18
    NSDate *_bookmarkTimestamp;	// 32 = 0x20
    unsigned long long _playCount;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000198271
- (void).cxx_destruct;	// IMP=0x00000000001986a4
@property(nonatomic) _Bool hasFakeTimestamp; // @synthesize hasFakeTimestamp=_hasFakeTimestamp;
@property(readonly, nonatomic) _Bool isMarkedAsUnwatched; // @synthesize isMarkedAsUnwatched=_isMarkedAsUnwatched;
@property(readonly, nonatomic) _Bool hasBeenRented; // @synthesize hasBeenRented=_hasBeenRented;
@property(readonly, nonatomic) _Bool hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(readonly, nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(readonly, nonatomic) NSDate *bookmarkTimestamp; // @synthesize bookmarkTimestamp=_bookmarkTimestamp;
@property(readonly, nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(readonly, nonatomic) VUIBookmarkKey *key; // @synthesize key=_key;
- (_Bool)hasRemoteData;	// IMP=0x000000000019861b
- (void)_setIsMarkedAsUnwatched:(_Bool)arg1;	// IMP=0x0000000000198612
- (void)_setHasBeenRented:(_Bool)arg1;	// IMP=0x0000000000198609
- (void)_setHasBeenPlayed:(_Bool)arg1;	// IMP=0x0000000000198600
- (void)_setPlayCount:(unsigned long long)arg1;	// IMP=0x00000000001985f6
- (void)_setBookmarkTimestamp:(id)arg1;	// IMP=0x00000000001985e5
- (void)_setBookmarkTimeWithoutUpdatingTimestamp:(double)arg1;	// IMP=0x00000000001985da
- (id)description;	// IMP=0x000000000019852b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001984fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019849d
- (id)_copyWithResultClass:(Class)arg1;	// IMP=0x0000000000198430
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000198279
- (id)init;	// IMP=0x0000000000198261
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001980ae
- (id)initWithKey:(id)arg1;	// IMP=0x000000000019801c

@end

