//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricsKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface MTIDSecret : NSObject <NSSecureCoding>
{
    _Bool _isSynchronized;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    NSDate *_effectiveDate;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    NSString *_syncStatusCode;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002e4d
- (void).cxx_destruct;	// IMP=0x00000000000031ac
@property(retain, nonatomic) NSString *syncStatusCode; // @synthesize syncStatusCode=_syncStatusCode;
@property(nonatomic) _Bool isSynchronized; // @synthesize isSynchronized=_isSynchronized;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSDate *effectiveDate; // @synthesize effectiveDate=_effectiveDate;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002f91
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002e55
- (id)debugInfo;	// IMP=0x0000000000002c79
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002aa7
- (id)description;	// IMP=0x00000000000029b5
- (id)initWithValue:(id)arg1 effectiveDate:(id)arg2 expirationDate:(id)arg3 isSynchronize:(_Bool)arg4;	// IMP=0x00000000000028f3
- (id)init;	// IMP=0x00000000000028b4

@end
