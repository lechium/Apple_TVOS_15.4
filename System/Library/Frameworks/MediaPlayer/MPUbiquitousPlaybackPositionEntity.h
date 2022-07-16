//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPUbiquitousPlaybackPositionEntity : NSObject
{
    _Bool _hasBeenPlayed;	// 8 = 0x8
    NSString *_ubiquitousIdentifier;	// 16 = 0x10
    double _bookmarkTimestamp;	// 24 = 0x18
    double _bookmarkTime;	// 32 = 0x20
    unsigned long long _userPlayCount;	// 40 = 0x28
}

+ (id)ubiquitousIdentifierWithStoreAdamID:(long long)arg1;	// IMP=0x00000000002071c5
- (void).cxx_destruct;	// IMP=0x00000000002071b5
@property(nonatomic) _Bool hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) unsigned long long userPlayCount; // @synthesize userPlayCount=_userPlayCount;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(nonatomic) double bookmarkTimestamp; // @synthesize bookmarkTimestamp=_bookmarkTimestamp;
@property(readonly, copy, nonatomic) NSString *ubiquitousIdentifier; // @synthesize ubiquitousIdentifier=_ubiquitousIdentifier;
- (_Bool)bookmarkTimestampModified;	// IMP=0x0000000000207172
- (_Bool)bookmarkTimeModified;	// IMP=0x0000000000207164
- (_Bool)userPlayCountModified;	// IMP=0x0000000000207153
- (_Bool)hasBeenPlayedModified;	// IMP=0x0000000000207142
- (id)init;	// IMP=0x00000000002070e9
- (id)initWithUbiquitousIdentifier:(id)arg1;	// IMP=0x0000000000207077

@end
