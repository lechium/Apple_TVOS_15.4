//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FigCaptureDepthDataSinkConfiguration
{
    _Bool _discardsLateDepthData;	// 16 = 0x10
    _Bool _filteringEnabled;	// 17 = 0x11
}

@property(nonatomic) _Bool filteringEnabled; // @synthesize filteringEnabled=_filteringEnabled;
@property(nonatomic) _Bool discardsLateDepthData; // @synthesize discardsLateDepthData=_discardsLateDepthData;
- (int)sinkType;	// IMP=0x000000000000d49b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d3f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d371
- (id)description;	// IMP=0x000000000000d2e1
- (id)copyXPCEncoding;	// IMP=0x000000000000d25d
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000000d1e8

@end
