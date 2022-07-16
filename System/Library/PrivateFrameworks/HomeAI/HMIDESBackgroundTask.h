//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLBackgroundTask.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString, NSURL;

@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging>
{
    NSURL *_url;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b9d35
+ (_Bool)scheduleTask:(id)arg1;	// IMP=0x00000000000b9c63
+ (Class)taskRunnerClass;	// IMP=0x00000000000b9ade
+ (id)logCategory;	// IMP=0x00000000000b9ad4
- (void).cxx_destruct;	// IMP=0x00000000000b9e89
@property(readonly) NSURL *url; // @synthesize url=_url;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b9dd8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b9d3d
- (id)activityForScheduling;	// IMP=0x00000000000b9aef
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000b9a66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

