//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class CKVOriginApp, CKVSearchField, KVItem, NSUUID;

@interface CKVFTSResult : NSObject <NSCopying>
{
    KVItem *_item;	// 8 = 0x8
    CKVOriginApp *_originApp;	// 16 = 0x10
    CKVSearchField *_searchField;	// 24 = 0x18
    NSUUID *_recordId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e912d
@property(readonly, nonatomic) NSUUID *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) CKVSearchField *searchField; // @synthesize searchField=_searchField;
@property(readonly, nonatomic) CKVOriginApp *originApp; // @synthesize originApp=_originApp;
@property(readonly, nonatomic) KVItem *item; // @synthesize item=_item;
- (unsigned long long)hash;	// IMP=0x00000000000e909d
- (_Bool)isEqualToFTSResult:(id)arg1;	// IMP=0x00000000000e8f40
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e8ed8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e8e2b
- (id)description;	// IMP=0x00000000000e8da3
- (id)initWithItem:(id)arg1 originApp:(id)arg2 searchField:(id)arg3 recordId:(id)arg4;	// IMP=0x00000000000e8c3b

@end

