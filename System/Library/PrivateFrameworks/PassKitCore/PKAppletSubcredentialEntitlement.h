//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAppletSubcredentialEntitlement : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _nativelySupported;	// 8 = 0x8
    unsigned long long _value;	// 16 = 0x10
    NSString *_descriptionKey;	// 24 = 0x18
    NSString *_longDescriptionKey;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003cd6c3
- (void).cxx_destruct;	// IMP=0x00000000003cd960
@property(nonatomic, getter=isNativelySupported) _Bool nativelySupported; // @synthesize nativelySupported=_nativelySupported;
@property(copy, nonatomic) NSString *longDescriptionKey; // @synthesize longDescriptionKey=_longDescriptionKey;
@property(copy, nonatomic) NSString *descriptionKey; // @synthesize descriptionKey=_descriptionKey;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003cd868
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003cd76c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003cd6cb
- (id)description;	// IMP=0x00000000003cd65f
@property(readonly, nonatomic) long long type;
- (id)defaultLongDescription;	// IMP=0x00000000003cd5f7
- (id)defaultDescription;	// IMP=0x00000000003cd5a6
- (id)localizedDescriptionWithPass:(id)arg1;	// IMP=0x00000000003cd4eb
- (id)localizedLongDescriptionWithPass:(id)arg1;	// IMP=0x00000000003cd430
- (id)asDictionary;	// IMP=0x00000000003cd316
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003cd11e

@end

