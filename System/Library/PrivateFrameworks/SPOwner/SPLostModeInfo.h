//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface SPLostModeInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    NSString *_email;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001aa6
- (void).cxx_destruct;	// IMP=0x0000000000001cbf
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001b43
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001aae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000019c8
- (id)initWithMessage:(id)arg1 email:(id)arg2 phoneNumber:(id)arg3 timestamp:(id)arg4;	// IMP=0x00000000000018e8

@end

