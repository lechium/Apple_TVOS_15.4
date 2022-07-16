//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVCTextStreamConfig : NSObject
{
    long long _codecType;	// 8 = 0x8
    unsigned long long _numRedundantPayloads;	// 16 = 0x10
    unsigned long long _txRedPayloadType;	// 24 = 0x18
    unsigned long long _rxRedPayloadType;	// 32 = 0x20
    float _txIntervalMin;	// 40 = 0x28
}

+ (long long)clientCodecTypeWithCodecType:(long long)arg1;	// IMP=0x00000000003b5195
+ (long long)codecTypeWithClientCodecType:(long long)arg1;	// IMP=0x00000000003b4fff
@property(nonatomic) float txIntervalMin; // @synthesize txIntervalMin=_txIntervalMin;
@property(nonatomic) unsigned long long rxRedPayloadType; // @synthesize rxRedPayloadType=_rxRedPayloadType;
@property(nonatomic) unsigned long long txRedPayloadType; // @synthesize txRedPayloadType=_txRedPayloadType;
@property(nonatomic) unsigned long long numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (id)dictionary;	// IMP=0x00000000003b530e
- (void)setUpWithDictionary:(id)arg1;	// IMP=0x00000000003b5224
- (_Bool)isRedValid;	// IMP=0x00000000003b519d
- (_Bool)isValid;	// IMP=0x00000000003b4fc5

@end
