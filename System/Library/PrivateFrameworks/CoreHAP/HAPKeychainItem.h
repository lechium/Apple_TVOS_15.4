//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/NSMutableCopying-Protocol.h>

@class NSData, NSDate, NSNumber, NSString;

@interface HAPKeychainItem : HMFObject <NSMutableCopying>
{
    _Bool _syncable;	// 8 = 0x8
    _Bool _invisible;	// 9 = 0x9
    NSString *_accessGroup;	// 16 = 0x10
    NSNumber *_type;	// 24 = 0x18
    NSString *_account;	// 32 = 0x20
    NSData *_valueData;	// 40 = 0x28
    NSString *_label;	// 48 = 0x30
    NSString *_itemDescription;	// 56 = 0x38
    NSString *_viewHint;	// 64 = 0x40
    NSDate *_creationDate;	// 72 = 0x48
    NSData *_genericData;	// 80 = 0x50
    void *_platformReference;	// 88 = 0x58
}

+ (_Bool)isQueryResultValid:(struct __CFDictionary *)arg1 shouldIncludeData:(_Bool)arg2;	// IMP=0x0000000000084f55
- (void).cxx_destruct;	// IMP=0x0000000000084be1
@property(nonatomic) void *platformReference; // @synthesize platformReference=_platformReference;
@property(readonly, nonatomic, getter=isInvisible) _Bool invisible; // @synthesize invisible=_invisible;
@property(retain, nonatomic) NSData *genericData; // @synthesize genericData=_genericData;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *viewHint; // @synthesize viewHint=_viewHint;
@property(nonatomic, getter=isSyncable) _Bool syncable; // @synthesize syncable=_syncable;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSData *valueData; // @synthesize valueData=_valueData;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
- (_Bool)matchesPublicKeyData:(id)arg1;	// IMP=0x0000000000084953
- (void)dealloc;	// IMP=0x0000000000084901
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084753
- (id)mutableCopy;	// IMP=0x000000000008473f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084544
- (id)initWithQueryResult:(struct __CFDictionary *)arg1 shouldIncludeData:(_Bool)arg2;	// IMP=0x00000000000842a4
- (id)description;	// IMP=0x00000000000840a4

@end

