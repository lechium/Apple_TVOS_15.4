//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BagKit/NSCopying-Protocol.h>
#import <BagKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface BAGResourceOptions : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSDictionary *_additionalOptions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007b72
- (void).cxx_destruct;	// IMP=0x0000000000008357
@property(retain, nonatomic) NSDictionary *additionalOptions; // @synthesize additionalOptions=_additionalOptions;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x00000000000081e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000811d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007ee6
- (unsigned long long)hash;	// IMP=0x0000000000007e14
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007d0c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007b7a
- (id)initWithBundleID:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 additionalOptions:(id)arg4;	// IMP=0x0000000000007939
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 additionalOptions:(id)arg3;	// IMP=0x00000000000078b1
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000000789c

@end

