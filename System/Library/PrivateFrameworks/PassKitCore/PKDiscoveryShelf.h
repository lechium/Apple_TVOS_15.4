//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKDiscoveryItem;

@interface PKDiscoveryShelf : NSObject <NSSecureCoding>
{
    NSString *_itemIdentifier;	// 8 = 0x8
    PKDiscoveryItem *_item;	// 16 = 0x10
    long long _type;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e5f0b
+ (id)shelfWithDictionary:(id)arg1;	// IMP=0x00000000002e5d0f
- (void).cxx_destruct;	// IMP=0x00000000002e6060
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak PKDiscoveryItem *item; // @synthesize item=_item;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e5f85
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e5f13
- (unsigned long long)hash;	// IMP=0x00000000002e5efc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e5ea9
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;	// IMP=0x00000000002e5ea3
- (void)localizeWithBundle:(id)arg1;	// IMP=0x00000000002e5e9d

@end

