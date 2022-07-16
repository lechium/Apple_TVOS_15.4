//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircle/FAFamilyCircleRequestConnectionProvider-Protocol.h>

@class NSLock, NSString, NSXPCConnection;
@protocol FAFamilyCircleRequestConnectionFactory;

@interface _FAFamilyCircleRequestConnectionProvider : NSObject <FAFamilyCircleRequestConnectionProvider>
{
    id <FAFamilyCircleRequestConnectionFactory> _factory;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
}

+ (id)createResumedConnectionWithFactory:(id)arg1 provider:(id)arg2;	// IMP=0x0000000000001541
+ (id)sharedInstance;	// IMP=0x00000000000014ec
- (void).cxx_destruct;	// IMP=0x0000000000001d94
@property(readonly, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id <FAFamilyCircleRequestConnectionFactory> factory; // @synthesize factory=_factory;
- (id)serviceConnection;	// IMP=0x0000000000001c2c
- (void)connectionWasInvalidated:(id)arg1;	// IMP=0x0000000000001b0b
- (void)connectionWasInterrupted:(id)arg1;	// IMP=0x00000000000019bd
- (void)dealloc;	// IMP=0x00000000000018e2
- (id)initWithConnectionFactory:(id)arg1;	// IMP=0x000000000000185d
- (id)init;	// IMP=0x000000000000181d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

