//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INRestaurantOfferExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INRestaurantOffer : NSObject <INRestaurantOfferExport, NSSecureCoding, NSCopying>
{
    NSString *_offerTitleText;	// 8 = 0x8
    NSString *_offerDetailText;	// 16 = 0x10
    NSString *_offerIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000082511
- (void).cxx_destruct;	// IMP=0x00000000000824de
@property(copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(copy, nonatomic) NSString *offerDetailText; // @synthesize offerDetailText=_offerDetailText;
@property(copy, nonatomic) NSString *offerTitleText; // @synthesize offerTitleText=_offerTitleText;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000082337
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000008225b
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000082082
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000081fff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000081f35
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000081cc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
