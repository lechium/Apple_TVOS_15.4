//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVirtualDeviceResolution/SVDDeviceUnitMutating-Protocol.h>

@class NSString;

@interface _SVDMutableDeviceUnit : NSObject <SVDDeviceUnitMutating>
{
    _Bool _isCommunalDevice;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_roomName;	// 24 = 0x18
    long long _proximity;	// 32 = 0x20
    NSString *_mediaRouteIdentifier;	// 40 = 0x28
    NSString *_homeKitAccessoryIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000026c3
@property(copy, nonatomic) NSString *homeKitAccessoryIdentifier; // @synthesize homeKitAccessoryIdentifier=_homeKitAccessoryIdentifier;
@property(nonatomic) _Bool isCommunalDevice; // @synthesize isCommunalDevice=_isCommunalDevice;
@property(copy, nonatomic) NSString *mediaRouteIdentifier; // @synthesize mediaRouteIdentifier=_mediaRouteIdentifier;
@property(nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
