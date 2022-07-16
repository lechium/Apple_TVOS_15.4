//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPAccessoryLayoutTemplate : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _partIdentifier;	// 8 = 0x8
    NSString *_partType;	// 16 = 0x10
    NSString *_partName;	// 24 = 0x18
    NSString *_partSymbol;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000db16
- (void).cxx_destruct;	// IMP=0x000000000000deb9
@property(copy, nonatomic) NSString *partSymbol; // @synthesize partSymbol=_partSymbol;
@property(copy, nonatomic) NSString *partName; // @synthesize partName=_partName;
@property(copy, nonatomic) NSString *partType; // @synthesize partType=_partType;
@property(nonatomic) unsigned char partIdentifier; // @synthesize partIdentifier=_partIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000dd5e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000dc57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000db1e

@end

