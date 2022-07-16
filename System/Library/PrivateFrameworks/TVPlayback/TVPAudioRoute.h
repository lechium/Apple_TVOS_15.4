//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TVPAudioRouteVolume;

@interface TVPAudioRoute : NSObject
{
    _Bool _selected;	// 8 = 0x8
    _Bool _defaultRoute;	// 9 = 0x9
    NSString *_routeName;	// 16 = 0x10
    NSString *_routeIdentifier;	// 24 = 0x18
    long long _routeDeviceType;	// 32 = 0x20
    long long _securityType;	// 40 = 0x28
    TVPAudioRouteVolume *_volumeControl;	// 48 = 0x30
    NSDictionary *_routeDescription;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000cbc0
@property(readonly, nonatomic) NSDictionary *routeDescription; // @synthesize routeDescription=_routeDescription;
@property(retain, nonatomic) TVPAudioRouteVolume *volumeControl; // @synthesize volumeControl=_volumeControl;
@property(readonly, nonatomic, getter=isDefaultRoute) _Bool defaultRoute; // @synthesize defaultRoute=_defaultRoute;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) long long securityType; // @synthesize securityType=_securityType;
@property(readonly, nonatomic) long long routeDeviceType; // @synthesize routeDeviceType=_routeDeviceType;
@property(readonly, nonatomic) NSString *routeIdentifier; // @synthesize routeIdentifier=_routeIdentifier;
@property(readonly, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(readonly, nonatomic) NSString *comparisonIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c926
- (unsigned long long)hash;	// IMP=0x000000000000c870
- (id)description;	// IMP=0x000000000000c85a
- (id)initWithRouteDescription:(id)arg1;	// IMP=0x000000000000c4ac

@end

