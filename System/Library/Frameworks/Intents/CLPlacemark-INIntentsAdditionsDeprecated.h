//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLPlacemark.h>

#import <Intents/INCodableAttributeRelationComparing-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>

@class NSString;

@interface CLPlacemark (INIntentsAdditionsDeprecated) <INCodableAttributeRelationComparing, INJSONSerializable>
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;	// IMP=0x00000000002901f4
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000038bd21
- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;	// IMP=0x0000000000010d68
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000875fd
- (id)_intents_defaultReadableDescription;	// IMP=0x000000000008751b
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x00000000001355f7
- (id)_intents_indexingRepresentation;	// IMP=0x00000000002a01a9
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000038bb80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

