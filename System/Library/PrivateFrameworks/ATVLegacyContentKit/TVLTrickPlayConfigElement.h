//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TVLTrickPlayConfigElement
{
    _Bool _oneBasedNamingScheme;	// 8 = 0x8
    int _trickPlayCount;	// 12 = 0xc
    double _frameTimeDifferenceInSeconds;	// 16 = 0x10
    NSString *_trickPlayURL;	// 24 = 0x18
    NSString *_thumbnailNameFormat;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000cb85f
@property(copy, nonatomic) NSString *thumbnailNameFormat; // @synthesize thumbnailNameFormat=_thumbnailNameFormat;
@property(nonatomic) _Bool oneBasedNamingScheme; // @synthesize oneBasedNamingScheme=_oneBasedNamingScheme;
@property(copy, nonatomic) NSString *trickPlayURL; // @synthesize trickPlayURL=_trickPlayURL;
@property(nonatomic) int trickPlayCount; // @synthesize trickPlayCount=_trickPlayCount;
@property(nonatomic) double frameTimeDifferenceInSeconds; // @synthesize frameTimeDifferenceInSeconds=_frameTimeDifferenceInSeconds;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cb628
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;	// IMP=0x00000000000cb3bc

@end

