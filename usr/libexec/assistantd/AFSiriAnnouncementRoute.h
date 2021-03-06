//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AFSiriAnnouncementRoute : NSObject
{
    NSString *_productID;	// 8 = 0x8
    NSString *_btAddress;	// 16 = 0x10
    unsigned long long _availableAnnouncementRequestTypes;	// 24 = 0x18
    NSDictionary *_avscRouteDescription;	// 32 = 0x20
    long long _announcePlatformForRoute;	// 40 = 0x28
    _Bool _isRouteCurrentlyPicked;	// 48 = 0x30
    _Bool _isDoAPCapable;	// 49 = 0x31
    _Bool _isHeadsetInEar;	// 50 = 0x32
    _Bool _inEarDetectSupportedSpecified;	// 51 = 0x33
    _Bool _headsetSupportsIED;	// 52 = 0x34
    _Bool _inEarDetectEnabledSpecified;	// 53 = 0x35
    _Bool _inEarDetectEnabled;	// 54 = 0x36
    _Bool;	// 55 = 0x37
    _Bool _isTipiRoute;	// 56 = 0x38
    _Bool _isOtherDeviceConnected;	// 57 = 0x39
    _Bool _isInTriangleMode;	// 58 = 0x3a
    _Bool _shouldTakeRouteFromOtherConnectedDevice;	// 59 = 0x3b
    _Bool _shouldDeferToOtherConnectedDevice;	// 60 = 0x3c
    NSString *_avAudioRouteName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000092580
@property(nonatomic) long long announcePlatformForRoute; // @synthesize announcePlatformForRoute=_announcePlatformForRoute;
@property(retain, nonatomic) NSDictionary *avscRouteDescription; // @synthesize avscRouteDescription=_avscRouteDescription;
@property(nonatomic) unsigned long long availableAnnouncementRequestTypes; // @synthesize availableAnnouncementRequestTypes=_availableAnnouncementRequestTypes;
@property(retain, nonatomic) NSString *btAddress; // @synthesize btAddress=_btAddress;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (long long)_announcementPlatform;	// IMP=0x00100000000924fc
- (unsigned long long)_getRouteCapabilities;	// IMP=0x00100000000924f4
- (void)_initializeInternalState;	// IMP=0x00100000000924ee
- (id)initWithRouteDescription:(id)arg1;	// IMP=0x00100000000924bf

@end

