//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPIdentifierSet, NSDictionary, NSString;

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding>
{
    _Bool _libraryContent;	// 8 = 0x8
    NSDictionary *_dictionary;	// 16 = 0x10
    MPIdentifierSet *_identifiers;	// 24 = 0x18
    NSString *_itemKind;	// 32 = 0x20
    NSString *_itemID;	// 40 = 0x28
    NSString *_catalogID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001155e8
- (void).cxx_destruct;	// IMP=0x00000000001153cb
@property(readonly, copy, nonatomic) NSString *catalogID; // @synthesize catalogID=_catalogID;
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic, getter=isLibraryContent) _Bool libraryContent; // @synthesize libraryContent=_libraryContent;
@property(readonly, copy, nonatomic) NSString *itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, copy, nonatomic) MPIdentifierSet *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)description;	// IMP=0x000000000011534f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000115344
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000115282
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001150bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000114fc0
- (unsigned long long)hash;	// IMP=0x00000000001133c8
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000112d61

@end
