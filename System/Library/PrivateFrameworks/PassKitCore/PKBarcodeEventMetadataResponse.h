//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;

@interface PKBarcodeEventMetadataResponse : NSObject <NSSecureCoding>
{
    NSData *_paymentInformation;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001581d4
- (void).cxx_destruct;	// IMP=0x0000000000158236
@property(copy, nonatomic) NSData *paymentInformation; // @synthesize paymentInformation=_paymentInformation;
- (id)description;	// IMP=0x00000000001581dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001581b1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000158109
- (id)initWithPaymentInformation:(id)arg1;	// IMP=0x000000000015809e

@end

