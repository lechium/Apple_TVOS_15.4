//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreBookkeeper/NSCopying-Protocol.h>
#import <StoreBookkeeper/NSObject-Protocol.h>
#import <StoreBookkeeper/NSSecureCoding-Protocol.h>

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <NSCopying, NSObject, NSSecureCoding>
{
    _Bool _hasBeenPlayed;	// 8 = 0x8
    NSString *_itemIdentifier;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    double _bookmarkTime;	// 32 = 0x20
    unsigned long long _playCount;	// 40 = 0x28
}

+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(_Bool)arg3;	// IMP=0x0000000000013f06
+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;	// IMP=0x0000000000013ef1
+ (id)metadataWithItemIdentifier:(id)arg1 bookmarkTime:(double)arg2 bookmarkTimestamp:(double)arg3 hasBeenPlayed:(_Bool)arg4 playCount:(unsigned long long)arg5;	// IMP=0x0000000000013e38
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;	// IMP=0x0000000000013ac9
+ (id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)arg1 itemTitle:(id)arg2 albumName:(id)arg3 itemArtistName:(id)arg4 feedURL:(id)arg5 feedGUID:(id)arg6;	// IMP=0x00000000000136d9
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;	// IMP=0x0000000000013184
+ (id)_testableMetadataItem_1;	// IMP=0x0000000000013162
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001315a
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;	// IMP=0x000000000001313e
- (void).cxx_destruct;	// IMP=0x00000000000130ce
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) _Bool hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)kvsValueDescription;	// IMP=0x0000000000013067
- (id)kvsPayload;	// IMP=0x0000000000013055
- (id)kvsKey;	// IMP=0x0000000000013043
- (id)keyValueStorePayload;	// IMP=0x0000000000012e81
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012dcd
@property(readonly) unsigned long long hash;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012ba3
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001277f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001267e
- (id)initAsTestableItem;	// IMP=0x0000000000012616
- (id)init;	// IMP=0x00000000000125e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
