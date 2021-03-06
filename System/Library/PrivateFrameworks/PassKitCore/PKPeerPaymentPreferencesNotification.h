//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPeerPaymentPreferencesNotification : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _value;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    unsigned long long _notificationType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000043b170
- (void).cxx_destruct;	// IMP=0x000000000043b5ad
@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(nonatomic) unsigned long long notificationType; // @synthesize notificationType=_notificationType;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (id)description;	// IMP=0x000000000043b47f
- (unsigned long long)hash;	// IMP=0x000000000043b3fb
- (_Bool)isEqualToPreferencesNotification:(id)arg1;	// IMP=0x000000000043b3a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000043b33f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000043b2cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000043b240
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000043b178
- (id)dictionaryRepresentation;	// IMP=0x000000000043b081
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000043afa4

@end

