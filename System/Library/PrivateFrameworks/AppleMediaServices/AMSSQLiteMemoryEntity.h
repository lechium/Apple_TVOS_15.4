//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSSQLiteMemoryEntity : NSObject <NSCopying>
{
    long long _databaseID;	// 8 = 0x8
    NSMutableDictionary *_propertyValues;	// 16 = 0x10
    NSMutableDictionary *_externalPropertyValues;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x00000000001fdf1f
+ (Class)databaseEntityClass;	// IMP=0x00000000001fdf0e
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x0000000000202810
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x00000000002027fb
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000000202699
- (void).cxx_destruct;	// IMP=0x00000000001fe40c
@property(readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property(readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fe370
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fe233
- (unsigned long long)hash;	// IMP=0x00000000001fe21d
- (id)description;	// IMP=0x00000000001fe197
- (id)valueForExternalProperty:(id)arg1;	// IMP=0x00000000001fe181
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000001fe16b
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x00000000001fe0ee
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;	// IMP=0x00000000001fe062
- (void)setValuesWithDictionary:(id)arg1;	// IMP=0x00000000001fe04c
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x00000000001fdfcf
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000001fdf43
- (void)setExternalValuesWithDictionary:(id)arg1;	// IMP=0x00000000001fdf2d
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x00000000001fdf27
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x00000000001fde82
- (id)init;	// IMP=0x00000000001fde0d

@end

