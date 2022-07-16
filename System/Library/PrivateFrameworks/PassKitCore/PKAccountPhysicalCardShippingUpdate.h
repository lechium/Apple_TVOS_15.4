//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSDateComponents, NSString, NSURL;

@interface PKAccountPhysicalCardShippingUpdate : NSObject <NSSecureCoding, PKRecordObject>
{
    NSString *_physicalCardIdentifier;	// 8 = 0x8
    long long _shippingStatus;	// 16 = 0x10
    NSString *_localizedDeliveryExceptionReason;	// 24 = 0x18
    NSString *_trackingNumber;	// 32 = 0x20
    NSString *_shippingCompany;	// 40 = 0x28
    NSDate *_timestamp;	// 48 = 0x30
    NSDateComponents *_estimatedDeliveryDate;	// 56 = 0x38
}

+ (id)recordNamePrefix;	// IMP=0x00000000003b9d58
+ (id)recordType;	// IMP=0x00000000003b9d44
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003b9679
- (void).cxx_destruct;	// IMP=0x00000000003ba53e
@property(retain, nonatomic) NSDateComponents *estimatedDeliveryDate; // @synthesize estimatedDeliveryDate=_estimatedDeliveryDate;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *shippingCompany; // @synthesize shippingCompany=_shippingCompany;
@property(copy, nonatomic) NSString *trackingNumber; // @synthesize trackingNumber=_trackingNumber;
@property(copy, nonatomic) NSString *localizedDeliveryExceptionReason; // @synthesize localizedDeliveryExceptionReason=_localizedDeliveryExceptionReason;
@property(nonatomic) long long shippingStatus; // @synthesize shippingStatus=_shippingStatus;
@property(copy, nonatomic) NSString *physicalCardIdentifier; // @synthesize physicalCardIdentifier=_physicalCardIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToPhysicalCardShippingUpdate:(id)arg1;	// IMP=0x00000000003ba025
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b9fc2
@property(readonly, copy, nonatomic) NSString *formattedEstimatedDeliveryDate;
@property(readonly, nonatomic) NSURL *shipmentTrackingURL;
- (void)encodeWithRecord:(id)arg1;	// IMP=0x00000000003b9b57
- (id)initWithRecord:(id)arg1;	// IMP=0x00000000003b9914
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003b983f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003b9681

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

