//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSMutableDictionary;

@interface ABVCardCardDAVParser
{
    NSMutableDictionary *_unknownAttributes;	// 320 = 0x140
    _Bool _removeExistingProperties;	// 328 = 0x148
    _Bool _localRecordHasAdditionalProperties;	// 329 = 0x149
    int _lastCropRectX;	// 332 = 0x14c
    int _lastCropRectY;	// 336 = 0x150
    int _lastCropRectWidth;	// 340 = 0x154
    int _lastCropRectHeight;	// 344 = 0x158
    NSData *_lastCropRectChecksum;	// 352 = 0x160
}

@property(readonly, retain) NSData *lastCropRectChecksum; // @synthesize lastCropRectChecksum=_lastCropRectChecksum;
@property(readonly) int lastCropRectHeight; // @synthesize lastCropRectHeight=_lastCropRectHeight;
@property(readonly) int lastCropRectWidth; // @synthesize lastCropRectWidth=_lastCropRectWidth;
@property(readonly) int lastCropRectY; // @synthesize lastCropRectY=_lastCropRectY;
@property(readonly) int lastCropRectX; // @synthesize lastCropRectX=_lastCropRectX;
@property(readonly) _Bool localRecordHasAdditionalProperties; // @synthesize localRecordHasAdditionalProperties=_localRecordHasAdditionalProperties;
- (void)cleanUpCardState;	// IMP=0x000000000005402c
- (void)noteLackOfValueForImageData;	// IMP=0x0000000000053fc9
- (void)noteLackOfValueForProperty:(unsigned int)arg1;	// IMP=0x0000000000053ef6
- (void *)createRecordInSource:(void *)arg1 outRecordType:(unsigned int *)arg2;	// IMP=0x0000000000053d2c
- (_Bool)importToGroup:(void *)arg1 removeExistingProperties:(_Bool)arg2;	// IMP=0x0000000000053ba9
- (_Bool)importToPerson:(void *)arg1 removeExistingProperties:(_Bool)arg2;	// IMP=0x0000000000053a26
- (_Bool)_handleUnknownTag:(id)arg1 withValue:(id)arg2;	// IMP=0x0000000000053935
- (_Bool)parseUID;	// IMP=0x00000000000538d5
- (id)defaultURLLabel;	// IMP=0x00000000000538cd
- (id)defaultADRLabel;	// IMP=0x00000000000538c5
- (id)defaultLabel;	// IMP=0x00000000000538bd
- (id)genericLabel;	// IMP=0x00000000000538ab
- (void)setLocalRecordHasAdditionalProperties:(_Bool)arg1;	// IMP=0x000000000005389b
- (void)dealloc;	// IMP=0x0000000000053823
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;	// IMP=0x00000000000537d0

@end

