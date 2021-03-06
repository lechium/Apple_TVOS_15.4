//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TVSLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_componentsQueue;	// 8 = 0x8
    _Bool _allComponentsEnabled;	// 16 = 0x10
    int _logLevel;	// 20 = 0x14
    NSString *_domain;	// 24 = 0x18
    NSArray *_persistentComponents;	// 32 = 0x20
    NSMutableDictionary *_enabledComponents;	// 40 = 0x28
    NSMutableDictionary *_profileTimes;	// 48 = 0x30
}

+ (void)initializeLoggingWithDomain:(id)arg1 persistentComponents:(id)arg2;	// IMP=0x000000000004f4fd
+ (id)sharedInstance;	// IMP=0x000000000004f4ec
- (void).cxx_destruct;	// IMP=0x0000000000050cf1
@property(retain, nonatomic) NSMutableDictionary *profileTimes; // @synthesize profileTimes=_profileTimes;
@property(nonatomic) _Bool allComponentsEnabled; // @synthesize allComponentsEnabled=_allComponentsEnabled;
@property(retain, nonatomic) NSMutableDictionary *enabledComponents; // @synthesize enabledComponents=_enabledComponents;
@property(nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
@property(copy, nonatomic) NSArray *persistentComponents; // @synthesize persistentComponents=_persistentComponents;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)_logFrom:(void *)arg1 toLog:(id)arg2 asType:(unsigned char)arg3 shouldForce:(_Bool)arg4 atLevel:(int)arg5 toComponent:(id)arg6 withFormat:(id)arg7 andArguments:(struct __va_list_tag [1])arg8;	// IMP=0x0000000000050b61
- (void)_logForComponent:(id)arg1 level:(int)arg2 message:(id)arg3;	// IMP=0x0000000000050b48
- (void)_logForComponent:(id)arg1 level:(int)arg2 format:(id)arg3 list:(struct __va_list_tag [1])arg4;	// IMP=0x000000000005076f
- (void)reset;	// IMP=0x0000000000050124
- (_Bool)loggingEnabledForComponent:(id)arg1 atLevel:(int)arg2;	// IMP=0x000000000004ffee
- (void)disableComponent:(id)arg1;	// IMP=0x000000000004ff31
- (void)enableComponent:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000004faf0
- (void)_enableComponent:(id)arg1 withLogHandlers:(id)arg2;	// IMP=0x000000000004f9a2
- (void)enableComponent:(id)arg1 withLogHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f89c
- (id)initWithDomain:(id)arg1 persistentComponents:(id)arg2;	// IMP=0x000000000004f621

@end

