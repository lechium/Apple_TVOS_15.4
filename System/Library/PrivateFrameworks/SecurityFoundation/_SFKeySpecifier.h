//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@interface _SFKeySpecifier : NSObject <NSCopying, NSSecureCoding>
{
    id _keySpecifierInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008cc9
+ (Class)keyClass;	// IMP=0x0000000000008cb8
- (void).cxx_destruct;	// IMP=0x0000000000008d3f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008d06
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008d00
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008cd1

@end

