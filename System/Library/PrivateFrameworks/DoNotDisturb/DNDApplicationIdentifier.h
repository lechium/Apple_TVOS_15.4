//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSString;

@interface DNDApplicationIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleID;	// 8 = 0x8
    unsigned long long _platform;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000eaa7
- (void).cxx_destruct;	// IMP=0x000000000000ebde
@property(readonly, nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000eb58
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000eaaf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ea9c
- (id)diffDescription;	// IMP=0x000000000000ea1c
- (id)description;	// IMP=0x000000000000e93b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e7ae
- (unsigned long long)hash;	// IMP=0x000000000000e74c
- (id)initWithBundleID:(id)arg1 platform:(unsigned long long)arg2;	// IMP=0x000000000000e6ce
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000000000e6b7

@end

