//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FigCaptureCameraCalibrationDataSinkConfiguration
{
    _Bool _discardsLateCameraCalibrationData;	// 16 = 0x10
}

@property(nonatomic) _Bool discardsLateCameraCalibrationData; // @synthesize discardsLateCameraCalibrationData=_discardsLateCameraCalibrationData;
- (int)sinkType;	// IMP=0x000000000000e0da
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e055
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000dff2
- (id)description;	// IMP=0x000000000000df7a
- (id)copyXPCEncoding;	// IMP=0x000000000000df1d
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000000dec1

@end

