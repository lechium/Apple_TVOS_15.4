//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CTServiceDescriptorContainer : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_descriptors;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003e01b
- (void).cxx_destruct;	// IMP=0x000000000003e03e
@property(retain, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003de93
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003de6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ddd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003dc9d
- (id)description;	// IMP=0x000000000003dbce
- (id)initWithDescriptors:(id)arg1;	// IMP=0x000000000003db4f

@end
