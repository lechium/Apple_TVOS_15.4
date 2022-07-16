//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKDisplayProfile : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002f25d3
+ (Class)classForDisplayProfileType:(long long)arg1;	// IMP=0x00000000002f2577
+ (id)displayProfileOfType:(long long)arg1 withDictionary:(id)arg2 bundle:(id)arg3;	// IMP=0x00000000002f24e2
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f2610
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002f260a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002f25db
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002f25a4

@end

