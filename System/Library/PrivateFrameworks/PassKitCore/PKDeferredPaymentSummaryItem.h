//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate;

@interface PKDeferredPaymentSummaryItem <NSCopying, NSSecureCoding>
{
    NSDate *_deferredDate;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003e2179
- (void).cxx_destruct;	// IMP=0x00000000003e2448
@property(copy, nonatomic) NSDate *deferredDate; // @synthesize deferredDate=_deferredDate;
- (id)dictionaryRepresentation;	// IMP=0x00000000003e2360
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003e22bc
- (_Bool)isEqualToDeferredPaymentSummaryItem:(id)arg1;	// IMP=0x00000000003e2262
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e21fa
- (unsigned long long)hash;	// IMP=0x00000000003e2181
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e20de
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e2030
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e1fbe

@end

