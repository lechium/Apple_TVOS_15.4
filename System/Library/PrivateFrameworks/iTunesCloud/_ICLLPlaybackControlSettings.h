//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class _ICLLAutoPlaySource, _ICLLAvailability, _ICLLRadioSource;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettings : PBCodable <NSCopying>
{
    _ICLLAutoPlaySource *_autoPlay;	// 8 = 0x8
    _ICLLAvailability *_availability;	// 16 = 0x10
    _ICLLRadioSource *_radio;	// 24 = 0x18
    int _repeatMode;	// 32 = 0x20
    int _shuffleMode;	// 36 = 0x24
    int _trackGenerationSource;	// 40 = 0x28
    struct {
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int trackGenerationSource:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000009896e
- (unsigned long long)hash;	// IMP=0x000000000009889e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000098716
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000985f7
- (void)writeTo:(id)arg1;	// IMP=0x000000000009852f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000098522
- (id)dictionaryRepresentation;	// IMP=0x00000000000982f4
- (id)description;	// IMP=0x0000000000098245

@end

