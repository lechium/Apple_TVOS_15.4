//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFApplicationTerminationMonitor : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003c489
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)startMonitoringWithTerminationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c479
- (void)dealloc;	// IMP=0x000000000003c44a
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000003c3cc

@end

