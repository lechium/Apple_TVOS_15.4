//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlugInKit/PKPlugIn-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSUUID, NSXPCConnection;

@protocol PKPlugInPrivate <PKPlugIn>
@property(copy) NSArray *preferredLanguages;
@property(retain) NSDictionary *environment;
@property(retain) NSDictionary *extensionState;
@property(readonly) NSXPCConnection *pluginConnection;
@property(readonly) NSDate *timestamp;
@property(readonly) NSUUID *uuid;
- (_Bool)endUsingRequest:(NSUUID *)arg1 error:(id *)arg2;
- (void)endUsingRequest:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)beginUsingRequest:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (_Bool)beginUsingRequest:(NSUUID *)arg1 error:(id *)arg2;
- (void)beginUsingRequest:(NSUUID *)arg1 withSubsystemOptions:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (_Bool)beginUsingRequest:(NSUUID *)arg1 withSubsystemOptions:(NSDictionary *)arg2 error:(id *)arg3;
@end

