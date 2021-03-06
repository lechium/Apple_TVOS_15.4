//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class NSArray, NSString;
@protocol OS_xpc_object;

@interface CSSearchContext : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _queryID;	// 8 = 0x8
    NSString *_userQuery;	// 16 = 0x10
    unsigned long long _maxItemsCount;	// 24 = 0x18
    NSString *_keyboardLanguage;	// 32 = 0x20
    NSArray *_preferredLanguages;	// 40 = 0x28
    NSString *_markedText;	// 48 = 0x30
    unsigned long long _markedTextStart;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005fa9
- (void).cxx_destruct;	// IMP=0x000000000000685a
@property(readonly) unsigned long long markedTextStart; // @synthesize markedTextStart=_markedTextStart;
@property(readonly) NSString *markedText; // @synthesize markedText=_markedText;
@property(readonly) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(readonly) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(readonly) unsigned long long maxItemsCount; // @synthesize maxItemsCount=_maxItemsCount;
@property(readonly) NSString *userQuery; // @synthesize userQuery=_userQuery;
@property(readonly) unsigned long long queryID; // @synthesize queryID=_queryID;
- (id)description;	// IMP=0x000000000000679e
- (unsigned long long)hash;	// IMP=0x0000000000006794
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006732
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000066e2
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000006550
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpc_dictionary;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006267
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000618d
- (id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5 markedText:(id)arg6 markedTextStart:(unsigned long long)arg7;	// IMP=0x0000000000006094
- (id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5;	// IMP=0x0000000000005fb1

@end

