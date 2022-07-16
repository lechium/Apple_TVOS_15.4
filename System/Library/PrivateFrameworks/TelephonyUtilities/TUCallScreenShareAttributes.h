//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUScreenShareAttributes-Protocol.h>

@class NSNumber, NSString, NSUUID, NSValue;

@interface TUCallScreenShareAttributes : NSObject <TUScreenShareAttributes>
{
    _Bool _windowed;	// 8 = 0x8
    long long _deviceFamily;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    NSNumber *_displayScale;	// 32 = 0x20
    NSNumber *_scaleFactor;	// 40 = 0x28
    NSNumber *_frameRate;	// 48 = 0x30
    NSNumber *_displayID;	// 56 = 0x38
    NSValue *_originalResolution;	// 64 = 0x40
    NSUUID *_windowUUID;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000038ba6
+ (id)defaultScaleFactor;	// IMP=0x0000000000038578
+ (id)defaultDisplayScale;	// IMP=0x000000000003856b
+ (long long)currentDeviceFamily;	// IMP=0x0000000000038563
+ (id)defaultAttributes;	// IMP=0x00000000000381fb
- (void).cxx_destruct;	// IMP=0x00000000000392dd
@property(retain, nonatomic) NSUUID *windowUUID; // @synthesize windowUUID=_windowUUID;
@property(nonatomic, getter=isWindowed) _Bool windowed; // @synthesize windowed=_windowed;
@property(retain, nonatomic) NSValue *originalResolution; // @synthesize originalResolution=_originalResolution;
@property(retain, nonatomic) NSNumber *displayID; // @synthesize displayID=_displayID;
@property(retain, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
@property(retain, nonatomic) NSNumber *scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) NSNumber *displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long deviceFamily; // @synthesize deviceFamily=_deviceFamily;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000038ebd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038bae
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToScreenShareAttributes:(id)arg1;	// IMP=0x00000000000386f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003869c
- (_Bool)isSignificantChangeFromAttributes:(id)arg1;	// IMP=0x0000000000038585
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
