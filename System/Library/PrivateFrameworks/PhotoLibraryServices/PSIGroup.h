//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableString, NSString;

@interface PSIGroup
{
    NSMutableString *_contentString;	// 8 = 0x8
    NSMutableString *_normalizedString;	// 16 = 0x10
    NSMutableString *_lookupIdentifier;	// 24 = 0x18
    unsigned long long _compressedRanges[2];	// 32 = 0x20
    struct _NSRange _tokenRanges[8];	// 48 = 0x30
    unsigned long long _tokenRangesCount;	// 176 = 0xb0
    short _category;	// 184 = 0xb8
    unsigned long long _groupId;	// 192 = 0xc0
    unsigned long long _owningGroupId;	// 200 = 0xc8
    struct __CFArray *_assetIds;	// 208 = 0xd0
    struct __CFArray *_collectionIds;	// 216 = 0xd8
}

+ (void)_getTokenRanges:(struct _NSRange [8])arg1 fromCompressedRanges:(unsigned long long [2])arg2;	// IMP=0x000000000025af8d
+ (void)getCompressedRanges:(unsigned long long [2])arg1 fromTokenRanges:(CDStruct_627e0f85 *)arg2 count:(long long)arg3;	// IMP=0x000000000025aed2
- (void).cxx_destruct;	// IMP=0x000000000025ae90
@property(retain, nonatomic) struct __CFArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property(readonly, nonatomic) NSString *lookupIdentifier; // @synthesize lookupIdentifier=_lookupIdentifier;
@property(readonly, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_normalizedString;
@property(readonly, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(nonatomic) short category; // @synthesize category=_category;
@property(nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
- (void)unionIdsWithGroup:(id)arg1;	// IMP=0x000000000025ab28
- (void)unionCollectionIdsWithGroup:(id)arg1;	// IMP=0x000000000025a9df
- (unsigned long long)groupIdForObjectLookup;	// IMP=0x000000000025a998
- (void)prepareFromFilenameStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x000000000025a832
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x000000000025a68e
- (void)prepareForReuse;	// IMP=0x000000000025a5ab
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000025a591
- (unsigned long long)tokenRangesCount;	// IMP=0x000000000025a580
- (long long)compareToGroup:(id)arg1;	// IMP=0x000000000025a510
- (unsigned long long)hash;	// IMP=0x000000000025a4d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025a474
- (id)_tokenRangesDescription;	// IMP=0x000000000025a393
- (id)description;	// IMP=0x000000000025a295
- (void)dealloc;	// IMP=0x000000000025a23a
- (id)initWithContentString:(id)arg1 lookIdentifier:(id)arg2 category:(short)arg3 owningGroupId:(long long)arg4;	// IMP=0x000000000025a128
- (id)init;	// IMP=0x000000000025a07f

@end

