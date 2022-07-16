//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject <NSCopying>
{
    _Bool _hasOnlinePlaybackKeys;	// 8 = 0x8
    _Bool _hasOfflinePlaybackKeys;	// 9 = 0x9
    unsigned long long _accountUniqueIdentifier;	// 16 = 0x10
}

@property(nonatomic) _Bool hasOfflinePlaybackKeys; // @synthesize hasOfflinePlaybackKeys=_hasOfflinePlaybackKeys;
@property(nonatomic) _Bool hasOnlinePlaybackKeys; // @synthesize hasOnlinePlaybackKeys=_hasOnlinePlaybackKeys;
@property(nonatomic) unsigned long long accountUniqueIdentifier; // @synthesize accountUniqueIdentifier=_accountUniqueIdentifier;
- (id)description;	// IMP=0x000000000010c281
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010c276
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010c21f

@end
