//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;
@protocol TRITaskQueueStateProviding;

@interface TRIBaseTask : NSObject
{
    NSDate *startTime;	// 8 = 0x8
    id <TRITaskQueueStateProviding> _stateProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ee25c
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime;
- (id)description;	// IMP=0x00000000000ee1ce
- (unsigned long long)hash;	// IMP=0x00000000000ee1ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ee15d
- (unsigned long long)requiredCapabilities:(id)arg1;	// IMP=0x00000000000ee155
- (void)runDequeueHandlerUsingContext:(id)arg1;	// IMP=0x00000000000ee14f
- (void)runEnqueueHandlerUsingContext:(id)arg1;	// IMP=0x00000000000ee149
@property(readonly, nonatomic) NSArray *dependencies;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) NSString *taskName;

@end

