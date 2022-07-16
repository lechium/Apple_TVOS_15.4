//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDateComponents;

@interface PKDateComponentsRange : NSObject <NSCopying, NSSecureCoding>
{
    NSDateComponents *_startDateComponents;	// 8 = 0x8
    NSDateComponents *_endDateComponents;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000086a91
- (void).cxx_destruct;	// IMP=0x0000000000086ce3
@property(readonly, copy, nonatomic) NSDateComponents *endDateComponents; // @synthesize endDateComponents=_endDateComponents;
@property(readonly, copy, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
- (id)description;	// IMP=0x0000000000086bcc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000086b07
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000086a99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086a86
- (_Bool)isEqualToDateComponentsRange:(id)arg1;	// IMP=0x0000000000086a39
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000869d1
- (unsigned long long)hash;	// IMP=0x0000000000086947
- (id)dateInterval;	// IMP=0x00000000000868a8
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;	// IMP=0x0000000000086798

@end

