//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@class NSData;

@interface PRTrustedContact : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_contactKey;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d352
- (void).cxx_destruct;	// IMP=0x000000000001d504
@property(readonly) NSData *contactKey; // @synthesize contactKey=_contactKey;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d462
- (id)description;	// IMP=0x000000000001d439
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d40a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d3e7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d35a
- (id)initWithContactKey:(id)arg1;	// IMP=0x000000000001d1e7
- (id)init;	// IMP=0x000000000001d1bc

@end
