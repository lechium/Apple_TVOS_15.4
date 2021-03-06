//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SyncedDefaults/NSCopying-Protocol.h>
#import <SyncedDefaults/NSSecureCoding-Protocol.h>

@class NSString;

@interface SYDStoreID : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006f65
- (void).cxx_destruct;	// IMP=0x00000000000070bd
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000701e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006f6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006eec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006def
- (unsigned long long)hash;	// IMP=0x0000000000006d8d
- (id)description;	// IMP=0x0000000000006cdb
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000006bcb

@end

