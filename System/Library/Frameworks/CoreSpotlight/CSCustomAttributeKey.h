//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class NSString;

@interface CSCustomAttributeKey : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _searchable;	// 8 = 0x8
    _Bool _searchableByDefault;	// 9 = 0x9
    _Bool _unique;	// 10 = 0xa
    _Bool _multiValued;	// 11 = 0xb
    NSString *_keyName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e905
+ (_Bool)_keyNameIsValid:(id)arg1;	// IMP=0x000000000001e2f3
- (void).cxx_destruct;	// IMP=0x000000000001eb61
@property(getter=isMultiValued) _Bool multiValued; // @synthesize multiValued=_multiValued;
@property(getter=isUnique) _Bool unique; // @synthesize unique=_unique;
@property(getter=isSearchableByDefault) _Bool searchableByDefault; // @synthesize searchableByDefault=_searchableByDefault;
@property(getter=isSearchable) _Bool searchable; // @synthesize searchable=_searchable;
@property(retain) NSString *keyName; // @synthesize keyName=_keyName;
- (id)description;	// IMP=0x000000000001ea66
- (unsigned long long)hash;	// IMP=0x000000000001ea22
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e90d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e82c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e72f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e62f
- (id)initWithKeyName:(id)arg1 searchable:(_Bool)arg2 searchableByDefault:(_Bool)arg3 unique:(_Bool)arg4 multiValued:(_Bool)arg5;	// IMP=0x000000000001e525
- (id)initWithKeyName:(id)arg1;	// IMP=0x000000000001e4f8
- (id)init;	// IMP=0x000000000001e45c

@end

