//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FigPointCloudDataCaptureConnectionConfiguration
{
    int _projectorMode;	// 76 = 0x4c
    _Bool _supplementalPointCloudData;	// 80 = 0x50
}

@property(nonatomic) _Bool supplementalPointCloudData; // @synthesize supplementalPointCloudData=_supplementalPointCloudData;
@property(nonatomic) int projectorMode; // @synthesize projectorMode=_projectorMode;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007941
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000078df
- (id)description;	// IMP=0x0000000000007720
- (id)copyXPCEncoding;	// IMP=0x000000000000769c
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000007617

@end

