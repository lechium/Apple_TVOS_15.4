//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DOMCSSPrimitiveValue
{
}

- (id)getRGBColorValue;	// IMP=0x000000000002c7d0
- (id)getRectValue;	// IMP=0x000000000002c510
- (id)getCounterValue;	// IMP=0x000000000002c290
- (id)getStringValue;	// IMP=0x000000000002c090
- (void)setStringValue:(unsigned short)arg1 stringValue:(id)arg2;	// IMP=0x000000000002bfa0
- (float)getFloatValue:(unsigned short)arg1;	// IMP=0x000000000002be30
- (void)setFloatValue:(unsigned short)arg1 floatValue:(float)arg2;	// IMP=0x000000000002bd80
@property(readonly) unsigned short primitiveType;
- (void)setStringValue:(unsigned short)arg1:(id)arg2;	// IMP=0x000000000002caa0
- (void)setFloatValue:(unsigned short)arg1:(float)arg2;	// IMP=0x000000000002ca80

@end

