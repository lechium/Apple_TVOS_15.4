//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXUIAlert, NSDictionary, NSString, UIImage;
@protocol AXUIService;

@interface AXUIAlertContext : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    double _creationTimeInterval;	// 16 = 0x10
    double _fadeAnimationDuration;	// 24 = 0x18
    AXDispatchTimer *_showOrHideTimer;	// 32 = 0x20
    AXUIAlert *_alertView;	// 40 = 0x28
    id <AXUIService> _service;	// 48 = 0x30
    unsigned long long _priority;	// 56 = 0x38
    double _duration;	// 64 = 0x40
    NSString *_text;	// 72 = 0x48
    NSString *_subtitleText;	// 80 = 0x50
    UIImage *_iconImage;	// 88 = 0x58
    unsigned long long _type;	// 96 = 0x60
    NSDictionary *_userInfo;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000029f2
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id <AXUIService> service; // @synthesize service=_service;
@property(retain, nonatomic) AXUIAlert *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) AXDispatchTimer *showOrHideTimer; // @synthesize showOrHideTimer=_showOrHideTimer;
@property(nonatomic) double fadeAnimationDuration; // @synthesize fadeAnimationDuration=_fadeAnimationDuration;
@property(nonatomic) double creationTimeInterval; // @synthesize creationTimeInterval=_creationTimeInterval;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000002814

@end
