//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTQoS;

@interface CTCellularQoSFlow : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _flowId;	// 8 = 0x8
    CTQoS *_txQos;	// 16 = 0x10
    CTQoS *_rxQos;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003b02b
- (void).cxx_destruct;	// IMP=0x000000000003b07d
@property(retain, nonatomic) CTQoS *rxQos; // @synthesize rxQos=_rxQos;
@property(retain, nonatomic) CTQoS *txQos; // @synthesize txQos=_txQos;
@property(nonatomic) unsigned long long flowId; // @synthesize flowId=_flowId;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003af35
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003ae63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ad5a
- (id)description;	// IMP=0x000000000003abfb

@end
