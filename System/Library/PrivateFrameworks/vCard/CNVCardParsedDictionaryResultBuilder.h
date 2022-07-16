//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardParsedResultBuilder-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder>
{
    NSMutableDictionary *_dictionaryRep;	// 8 = 0x8
}

+ (id)factory;	// IMP=0x00000000000128f9
- (void).cxx_destruct;	// IMP=0x0000000000012d51
- (id)validCountryCodes;	// IMP=0x0000000000012d49
- (void)setUnknownProperties:(id)arg1;	// IMP=0x0000000000012cee
- (_Bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;	// IMP=0x0000000000012cdc
- (_Bool)setImageData:(id)arg1;	// IMP=0x0000000000012cb9
- (id)valueForProperty:(id)arg1;	// IMP=0x0000000000012ca3
- (_Bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;	// IMP=0x0000000000012a31
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000012a02
- (_Bool)canSetValueForProperty:(id)arg1;	// IMP=0x00000000000129fa
- (id)build;	// IMP=0x00000000000129dc
- (id)init;	// IMP=0x0000000000012974

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

