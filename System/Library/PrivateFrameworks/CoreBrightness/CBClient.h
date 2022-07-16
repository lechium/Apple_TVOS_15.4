//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBAdaptationClient, CBBlueLightClient;

@interface CBClient : NSObject
{
    CBBlueLightClient *_blueLightClient;	// 8 = 0x8
    CBAdaptationClient *_adaptationClient;	// 16 = 0x10
}

+ (_Bool)supportsAdaptation;	// IMP=0x0000000000001c85
+ (_Bool)supportsBlueLightReduction;	// IMP=0x0000000000001c7d
@property(readonly) CBAdaptationClient *adaptationClient; // @synthesize adaptationClient=_adaptationClient;
@property(readonly) CBBlueLightClient *blueLightClient; // @synthesize blueLightClient=_blueLightClient;
- (id)init;	// IMP=0x0000000000001c8d

@end
