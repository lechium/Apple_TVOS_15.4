//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray;

@interface TISupplementalLexicon : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_items;	// 8 = 0x8
    unsigned long long _searchPrefixes;	// 16 = 0x10
    unsigned long long _identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000058e4a
- (void).cxx_destruct;	// IMP=0x0000000000058e3a
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long searchPrefixes; // @synthesize searchPrefixes=_searchPrefixes;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)description;	// IMP=0x0000000000058b4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000058ae7
- (unsigned long long)hash;	// IMP=0x0000000000058add
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000058ad2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000058a22
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000058876
- (_Bool)isEqualToSupplementalLexicon:(id)arg1;	// IMP=0x0000000000058865
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000058851
- (id)initWithItems:(id)arg1 searchPrefixes:(unsigned long long)arg2;	// IMP=0x00000000000587ab

@end

