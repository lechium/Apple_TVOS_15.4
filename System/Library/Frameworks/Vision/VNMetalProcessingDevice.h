//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface VNMetalProcessingDevice
{
    id <MTLDevice> _metalDevice;	// 8 = 0x8
}

+ (id)allDevices;	// IMP=0x0000000000126b9d
- (void).cxx_destruct;	// IMP=0x0000000000126b8a
- (int)espressoStorageType;	// IMP=0x0000000000126b7f
- (int)espressoEngine;	// IMP=0x0000000000126b74
- (int)espressoDeviceID;	// IMP=0x0000000000126b5f
- (id)metalDevice;	// IMP=0x0000000000126b4a
- (_Bool)targetsGPU;	// IMP=0x0000000000126b42
- (id)description;	// IMP=0x0000000000126a90
- (unsigned long long)hash;	// IMP=0x0000000000126a11
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012691d
- (id)initWithMetalDevice:(id)arg1;	// IMP=0x00000000001268af

@end

