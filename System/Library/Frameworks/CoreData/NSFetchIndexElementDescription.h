//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@class NSFetchIndexDescription, NSPropertyDescription, NSString;

@interface NSFetchIndexElementDescription : NSObject <NSSecureCoding, NSCoding, NSCopying>
{
    NSPropertyDescription *_property;	// 8 = 0x8
    NSString *_propertyName;	// 16 = 0x10
    unsigned long long _collationType;	// 24 = 0x18
    NSFetchIndexDescription *_indexDescription;	// 32 = 0x20
    struct __indexElementDescriptionFlags {
        unsigned int _ascending:1;
        unsigned int _propertyIsRetained:1;
        unsigned int _unique:1;
        unsigned int _reservedEntityDescription:29;
    } _indexElementDescriptionFlags;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000267727
@property(readonly, retain) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) NSFetchIndexDescription *indexDescription;
@property(getter=isAscending) _Bool ascending;
@property unsigned long long collationType;
@property(readonly, retain) NSPropertyDescription *property;
- (id)description;	// IMP=0x0000000000267ae3
- (unsigned long long)hash;	// IMP=0x0000000000267acd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002679cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000267902
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026772f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000026766d
- (void)dealloc;	// IMP=0x0000000000267612
- (id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2;	// IMP=0x0000000000267320

@end

