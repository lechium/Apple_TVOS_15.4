//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface PVFaceprint
{
    unsigned int _faceprintVersion;	// 8 = 0x8
    NSData *_faceprintData;	// 16 = 0x10
}

+ (id)faceprintWithFaceprintData:(id)arg1 faceprintVersion:(unsigned int)arg2;	// IMP=0x0000000000031ade
- (void).cxx_destruct;	// IMP=0x0000000000031acb
@property(retain, nonatomic) NSData *faceprintData; // @synthesize faceprintData=_faceprintData;
@property(nonatomic) unsigned int faceprintVersion; // @synthesize faceprintVersion=_faceprintVersion;
- (id)description;	// IMP=0x00000000000319ad
- (_Bool)getDistance:(float *)arg1 toOtherFaceprint:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000031599
- (void)_setPropertiesFrom:(id)arg1;	// IMP=0x0000000000031500
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000314b2

@end

