//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INCarHeadUnit : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_bluetoothIdentifier;	// 8 = 0x8
    NSString *_iAP2Identifier;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000004b791f
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b7917
- (void).cxx_destruct;	// IMP=0x00000000004b78ef
@property(readonly, copy, nonatomic) NSString *iAP2Identifier; // @synthesize iAP2Identifier=_iAP2Identifier;
@property(readonly, copy, nonatomic) NSString *bluetoothIdentifier; // @synthesize bluetoothIdentifier=_bluetoothIdentifier;
- (id)_dictionaryRepresentation;	// IMP=0x00000000004b77cd
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000004b76f1
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000004b75f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b758b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b743d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b7432
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b7384
@property(readonly) unsigned long long hash;
- (id)initWithBluetoothIdentifier:(id)arg1 iAP2Identifier:(id)arg2;	// IMP=0x00000000004b728c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

