//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MSServerSideConfigProtocolDelegate-Protocol.h>

@class MSMediaStreamDaemon, MSServerSideConfigProtocol, NSDictionary, NSString;

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate>
{
    NSString *_personID;	// 8 = 0x8
    NSDictionary *_config;	// 16 = 0x10
    MSMediaStreamDaemon *_daemon;	// 24 = 0x18
    NSString *_configPath;	// 32 = 0x20
    MSServerSideConfigProtocol *_protocol;	// 40 = 0x28
    int _state;	// 48 = 0x30
}

+ (id)objectForKey:(id)arg1 forPersonID:(id)arg2 defaultValue:(id)arg3;	// IMP=0x0000000000032f70
+ (long long)longLongValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3;	// IMP=0x0000000000032dd2
+ (long long)longValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3;	// IMP=0x0000000000032c34
+ (double)doubleValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(double)arg3;	// IMP=0x0000000000032a8b
+ (int)intValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(int)arg3;	// IMP=0x00000000000328ed
+ (void)forgetPersonID:(id)arg1;	// IMP=0x0000000000032869
+ (void)abortAllActivities;	// IMP=0x0000000000032735
+ (id)existingConfigManagerForPersonID:(id)arg1;	// IMP=0x000000000003271c
+ (id)configManagerForPersonID:(id)arg1;	// IMP=0x00000000000325fd
- (void).cxx_destruct;	// IMP=0x00000000000325bf
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (void)serverSideConfigProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;	// IMP=0x0000000000032498
- (void)serverSideConfigProtocol:(id)arg1 didFinishWithConfiguration:(id)arg2 error:(id)arg3;	// IMP=0x000000000003232b
- (void)abort;	// IMP=0x00000000000322ec
- (void)refreshConfiguration;	// IMP=0x0000000000032262
@property(retain, nonatomic) NSDictionary *config;
- (void)dealloc;	// IMP=0x0000000000031e99
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;	// IMP=0x0000000000031da8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

