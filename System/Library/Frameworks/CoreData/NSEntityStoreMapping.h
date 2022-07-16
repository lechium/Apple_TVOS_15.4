//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSEntityDescription, NSString;

__attribute__((visibility("hidden")))
@interface NSEntityStoreMapping
{
    NSEntityDescription *_entity;	// 16 = 0x10
    NSDictionary *_propertyMappings;	// 24 = 0x18
    NSArray *_primaryKeys;	// 32 = 0x20
    _Bool _isSingleTableEntity;	// 40 = 0x28
    NSString *_subentityColumn;	// 48 = 0x30
    unsigned int _subentityID;	// 56 = 0x38
}

- (unsigned int)subentityID;	// IMP=0x000000000008c53b
- (id)subentityColumn;	// IMP=0x000000000008c52a
- (_Bool)isSingleTableEntity;	// IMP=0x000000000008c51a
- (id)primaryKeys;	// IMP=0x000000000008c509
- (id)propertyMappings;	// IMP=0x000000000008c4f8
- (id)entity;	// IMP=0x000000000008c4e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008c31d
- (id)description;	// IMP=0x000000000008c2a4
- (void)dealloc;	// IMP=0x000000000008c1f5
- (id)initWithEntity:(id)arg1;	// IMP=0x000000000008c057

@end
