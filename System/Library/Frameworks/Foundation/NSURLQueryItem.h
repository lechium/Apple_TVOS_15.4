//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001507ef
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000000150503
+ (id)queryItemWithName:(id)arg1 value:(id)arg2;	// IMP=0x00000000001504c4
@property(readonly) NSString *value; // @synthesize value=_value;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000150616
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000150559
- (id)description;	// IMP=0x000000000015050b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001504f8
- (id)initWithName:(id)arg1 value:(id)arg2;	// IMP=0x0000000000150420
- (id)init;	// IMP=0x0000000000150405
- (void)dealloc;	// IMP=0x0000000000150389
- (unsigned long long)hash;	// IMP=0x000000000015034a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001502a2

@end

