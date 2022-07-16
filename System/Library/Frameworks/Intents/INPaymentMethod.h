//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INCodableAttributeRelationComparing-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSString;

@interface INPaymentMethod : NSObject <INCodableAttributeRelationComparing, INCacheableContainer, INKeyImageProducing, INJSONSerializable, NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    INImage *_icon;	// 24 = 0x18
    NSString *_identificationHint;	// 32 = 0x20
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000001c3758
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c3750
+ (id)applePayPaymentMethod;	// IMP=0x00000000001c36ed
- (void).cxx_destruct;	// IMP=0x00000000001c36ba
@property(readonly, copy, nonatomic) NSString *identificationHint; // @synthesize identificationHint=_identificationHint;
@property(copy, nonatomic) INImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)_dictionaryRepresentation;	// IMP=0x00000000001c34e4
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000001c3408
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000001c321d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c3181
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c2fdc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c2fd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c2ef7
@property(readonly) unsigned long long hash;
- (id)initWithType:(long long)arg1 name:(id)arg2 identificationHint:(id)arg3 icon:(id)arg4;	// IMP=0x00000000001c2d69
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;	// IMP=0x000000000008648c
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000863b3
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x00000000000deca8
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001354c9
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x00000000001a4200
- (id)_intents_cacheableObjects;	// IMP=0x00000000001a4143
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;	// IMP=0x00000000002d8011
@property(readonly) INImage *_keyImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
