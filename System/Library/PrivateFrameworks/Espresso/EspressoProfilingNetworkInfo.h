//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EspressoProfilingANEcompilerAnalytics, EspressoProfilingNetworkANEInfo, NSMutableArray, NSString;

@interface EspressoProfilingNetworkInfo : NSObject
{
    NSMutableArray *_layers;	// 8 = 0x8
    NSString *_network_at_path;	// 16 = 0x10
    EspressoProfilingNetworkANEInfo *_ane_performance_info;	// 24 = 0x18
    EspressoProfilingANEcompilerAnalytics *_ane_compiler_analytics;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000322b0e
@property(retain) EspressoProfilingANEcompilerAnalytics *ane_compiler_analytics; // @synthesize ane_compiler_analytics=_ane_compiler_analytics;
@property(retain) EspressoProfilingNetworkANEInfo *ane_performance_info; // @synthesize ane_performance_info=_ane_performance_info;
@property(retain) NSString *network_at_path; // @synthesize network_at_path=_network_at_path;
@property(retain) NSMutableArray *layers; // @synthesize layers=_layers;

@end

