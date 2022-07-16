//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString, PKProtobufAutomaticReloadPaymentSummaryItem, PKProtobufCustomPrecisionAmount, PKProtobufDeferredPaymentSummaryItem, PKProtobufRecurringPaymentSummaryItem, PKProtobufShippingMethod;

@interface PKProtobufPaymentSummaryItem : PBCodable <NSCopying>
{
    long long _amount;	// 8 = 0x8
    PKProtobufAutomaticReloadPaymentSummaryItem *_automaticReloadPaymentSummaryItem;	// 16 = 0x10
    PKProtobufCustomPrecisionAmount *_customPrecisionAmount;	// 24 = 0x18
    PKProtobufDeferredPaymentSummaryItem *_deferredPaymentSummaryItem;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
    PKProtobufRecurringPaymentSummaryItem *_recurringPaymentSummaryItem;	// 48 = 0x30
    PKProtobufShippingMethod *_shippingMethodSummaryItem;	// 56 = 0x38
    unsigned int _type;	// 64 = 0x40
    CDStruct_9fb36b4c _has;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x00000000001ae257
@property(retain, nonatomic) PKProtobufAutomaticReloadPaymentSummaryItem *automaticReloadPaymentSummaryItem; // @synthesize automaticReloadPaymentSummaryItem=_automaticReloadPaymentSummaryItem;
@property(retain, nonatomic) PKProtobufShippingMethod *shippingMethodSummaryItem; // @synthesize shippingMethodSummaryItem=_shippingMethodSummaryItem;
@property(retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount; // @synthesize customPrecisionAmount=_customPrecisionAmount;
@property(retain, nonatomic) PKProtobufDeferredPaymentSummaryItem *deferredPaymentSummaryItem; // @synthesize deferredPaymentSummaryItem=_deferredPaymentSummaryItem;
@property(retain, nonatomic) PKProtobufRecurringPaymentSummaryItem *recurringPaymentSummaryItem; // @synthesize recurringPaymentSummaryItem=_recurringPaymentSummaryItem;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001adfbd
- (unsigned long long)hash;	// IMP=0x00000000001adebe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001adcbd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001adb43
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ada1b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ad8fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ad8f0
- (id)dictionaryRepresentation;	// IMP=0x00000000001ad1e0
- (id)description;	// IMP=0x00000000001ad131
@property(readonly, nonatomic) _Bool hasAutomaticReloadPaymentSummaryItem;
@property(readonly, nonatomic) _Bool hasShippingMethodSummaryItem;
@property(readonly, nonatomic) _Bool hasCustomPrecisionAmount;
@property(readonly, nonatomic) _Bool hasDeferredPaymentSummaryItem;
@property(readonly, nonatomic) _Bool hasRecurringPaymentSummaryItem;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasAmount;

@end

