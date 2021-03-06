//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying>
{
    long long _typeCode;	// 8 = 0x8
    Class _objectClass;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001749e7
+ (id)objectTypeFromClass:(Class)arg1;	// IMP=0x00000000001748a3
+ (id)objectTypeWithName:(id)arg1;	// IMP=0x0000000000174872
+ (id)objectTypeWithTypeCode:(long long)arg1;	// IMP=0x0000000000174822
+ (Class)associatedObjectClass;	// IMP=0x0000000000174811
+ (long long)typeCodeFromName:(id)arg1;	// IMP=0x00000000001747b4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000174a80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001749ef
- (unsigned long long)hash;	// IMP=0x00000000001749dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000174984
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000174979
- (id)description;	// IMP=0x000000000017490b
@property(readonly, nonatomic) Class objectClass;
@property(readonly, nonatomic) long long typeCode;
- (id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2;	// IMP=0x00000000001747c9

@end

