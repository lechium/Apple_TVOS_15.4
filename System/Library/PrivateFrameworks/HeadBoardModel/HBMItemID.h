//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeadBoardModel/NSCopying-Protocol.h>
#import <HeadBoardModel/NSSecureCoding-Protocol.h>

@class NSString;

@interface HBMItemID : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b07f
- (void).cxx_destruct;	// IMP=0x000000000000b09b
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b00d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000af5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000af51
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000aea0
- (unsigned long long)hash;	// IMP=0x000000000000ae6e
- (id)description;	// IMP=0x000000000000adf5
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000000ad77

@end

