//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FigMetadataItemCaptureConnectionConfiguration
{
    struct opaqueCMFormatDescription *_formatDescription;	// 48 = 0x30
    struct OpaqueCMClock *_clock;	// 56 = 0x38
    int _sourceSubType;	// 64 = 0x40
}

@property(nonatomic) int sourceSubType; // @synthesize sourceSubType=_sourceSubType;
@property(retain, nonatomic) struct OpaqueCMClock *clock; // @synthesize clock=_clock;
@property(retain, nonatomic) struct opaqueCMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007105
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007069
- (id)description;	// IMP=0x0000000000006f37
- (void)dealloc;	// IMP=0x0000000000006edc
- (id)copyXPCEncoding;	// IMP=0x0000000000006d9a
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000006beb

@end

