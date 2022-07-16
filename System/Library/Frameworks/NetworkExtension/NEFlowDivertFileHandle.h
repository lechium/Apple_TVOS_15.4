//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber;

@interface NEFlowDivertFileHandle
{
    NSNumber *_controlUnit;	// 24 = 0x18
    NSData *_keyMaterial;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004d4eb
@property(readonly) NSData *keyMaterial; // @synthesize keyMaterial=_keyMaterial;
@property(readonly) NSNumber *controlUnit; // @synthesize controlUnit=_controlUnit;
- (unsigned long long)type;	// IMP=0x000000000004d4b4
- (id)description;	// IMP=0x000000000004d408
- (id)dictionary;	// IMP=0x000000000004d2b7
- (id)initFromDictionary:(id)arg1;	// IMP=0x000000000004d1ae
- (id)getUnitForSocket:(int)arg1;	// IMP=0x000000000004d11d
- (id)initFlowDivertDataSocket;	// IMP=0x000000000004d10f
- (id)initFlowDivertControlSocketDisableAppMap:(_Bool)arg1;	// IMP=0x000000000004d101
- (id)initFlowDivertControlSocket;	// IMP=0x000000000004d0ed

@end

