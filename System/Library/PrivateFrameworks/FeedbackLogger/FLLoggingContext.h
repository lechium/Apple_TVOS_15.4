//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FeedbackLogger/FLLoggingContext-Protocol.h>

@class NSFileManager, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface FLLoggingContext : NSObject <FLLoggingContext>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSUserDefaults *_userDefaults;	// 16 = 0x10
    NSString *_timestampReferenceIdentifier;	// 24 = 0x18
    NSFileManager *_fileManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000b640
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(copy, nonatomic) NSString *timestampReferenceIdentifier; // @synthesize timestampReferenceIdentifier=_timestampReferenceIdentifier;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)reportTelemetry:(id)arg1 payload:(id)arg2;	// IMP=0x000000000000b579
@property(readonly, nonatomic) unsigned long long now;
- (id)initWithFileManager:(id)arg1;	// IMP=0x000000000000b515
- (id)init;	// IMP=0x000000000000b40c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
