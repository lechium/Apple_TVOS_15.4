//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/NSCopying-Protocol.h>
#import <TVServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface TVAppProfileDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006f4c6
- (void).cxx_destruct;	// IMP=0x000000000006f68d
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f58f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006f4ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006f458
- (id)description;	// IMP=0x000000000006f3ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006f2d8
- (unsigned long long)hash;	// IMP=0x000000000006f294
- (id)initWithName:(id)arg1;	// IMP=0x000000000006f221

@end
