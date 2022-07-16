//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface SecTapToRadar : NSObject
{
    NSString *_componentID;	// 8 = 0x8
    NSString *_componentName;	// 16 = 0x10
    NSString *_componentVersion;	// 24 = 0x18
    NSString *_alert;	// 32 = 0x20
    NSString *_radarDescription;	// 40 = 0x28
    NSString *_radarnumber;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (_Bool)askUserIfTTR:(id)arg1;	// IMP=0x0040000000012963
+ (void)triggerTapToRadar:(id)arg1;	// IMP=0x001000000001286a
+ (void)disableTTRsEntirely;	// IMP=0x001000000001285d
+ (_Bool)isRateLimited:(id)arg1;	// IMP=0x001000000001283b
+ (id)keyname:(id)arg1;	// IMP=0x00100000000127c5
- (void).cxx_destruct;	// IMP=0x0020000000012615
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSString *radarnumber; // @synthesize radarnumber=_radarnumber;
@property(retain) NSString *radarDescription; // @synthesize radarDescription=_radarDescription;
@property(retain) NSString *alert; // @synthesize alert=_alert;
@property(retain) NSString *componentVersion; // @synthesize componentVersion=_componentVersion;
@property(retain) NSString *componentName; // @synthesize componentName=_componentName;
@property(retain) NSString *componentID; // @synthesize componentID=_componentID;
- (void)trigger;	// IMP=0x00100000000124af
- (void)clearRetryTimestamp;	// IMP=0x0010000000012426
- (void)updateRetryTimestamp;	// IMP=0x0010000000012345
- (_Bool)isRateLimited;	// IMP=0x001000000001222e
- (id)initTapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3;	// IMP=0x00100000000120dd

@end

