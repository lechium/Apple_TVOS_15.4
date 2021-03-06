//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSExpression, NSMutableArray, NSString;

@interface NSEntityMapping : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    void *_reserved;	// 8 = 0x8
    void *_reserved1;	// 16 = 0x10
    NSDictionary *_mappingsByName;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    unsigned long long _mappingType;	// 40 = 0x28
    NSString *_sourceEntityName;	// 48 = 0x30
    NSData *_sourceEntityVersionHash;	// 56 = 0x38
    NSString *_destinationEntityName;	// 64 = 0x40
    NSData *_destinationEntityVersionHash;	// 72 = 0x48
    NSExpression *_sourceExpression;	// 80 = 0x50
    NSDictionary *_userInfo;	// 88 = 0x58
    NSString *_entityMigrationPolicyClassName;	// 96 = 0x60
    NSMutableArray *_attributeMappings;	// 104 = 0x68
    NSMutableArray *_relationshipMappings;	// 112 = 0x70
    struct __entityMappingFlags {
        unsigned int _isInUse:1;
        unsigned int _changeIsSchemaCompatible:1;
        unsigned int _reservedEntityMapping:30;
    } _entityMappingFlags;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008a5cc
+ (void)initialize;	// IMP=0x0000000000089b5a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008a777
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008a5d4
@property(copy) NSString *entityMigrationPolicyClassName;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(retain) NSExpression *sourceExpression;
@property(retain) NSArray *relationshipMappings;
@property(retain) NSArray *attributeMappings;
@property(copy) NSData *destinationEntityVersionHash;
@property(copy) NSString *destinationEntityName;
@property(copy) NSData *sourceEntityVersionHash;
@property(copy) NSString *sourceEntityName;
@property unsigned long long mappingType;
@property(copy) NSString *name;
- (id)description;	// IMP=0x000000000008a108
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000089eae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000089c3d
- (void)dealloc;	// IMP=0x0000000000089b81
- (id)init;	// IMP=0x0000000000089b6b
- (void)_throwIfNotEditable;	// IMP=0x000000000008ae05
- (void)_setIsEditable:(_Bool)arg1;	// IMP=0x000000000008ad9e
- (void)_createCachesAndOptimizeState;	// IMP=0x000000000008ad98
- (_Bool)isEditable;	// IMP=0x000000000008ad8b
- (id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2;	// IMP=0x000000000008ac5b

@end

