//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject
{
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> m_core;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000000ee990
- (void).cxx_destruct;	// IMP=0x00000000000ee960
- (id)lastOrientation;	// IMP=0x00000000000ee8a0
- (void)stopUpdating;	// IMP=0x00000000000ee890
- (void)startUpdating;	// IMP=0x00000000000ee880
- (void)setController:(struct DeviceOrientationController *)arg1;	// IMP=0x00000000000ee860
- (void)setOrientation:(id)arg1;	// IMP=0x00000000000ee7c0
- (id)init;	// IMP=0x00000000000ee740

@end
