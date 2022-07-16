//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TransparencySFAnalytics;

@interface TransparencyAnalytics : NSObject
{
    TransparencySFAnalytics *_sfanalytics;	// 8 = 0x8
}

+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000091258
+ (_Bool)doWithAnalyticsForEventName:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000091078
+ (id)formatEventName:(id)arg1 application:(id)arg2;	// IMP=0x0000000000091053
+ (_Bool)hasInternalDiagnostics;	// IMP=0x0000000000091042
+ (id)logger;	// IMP=0x0000000000090f30
- (void).cxx_destruct;	// IMP=0x00000000000920fc
@property(retain) TransparencySFAnalytics *sfanalytics; // @synthesize sfanalytics=_sfanalytics;
- (void)removeMultiSamplerForName:(id)arg1;	// IMP=0x0000000000092003
- (void)addMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000091ef9
- (void)logMetric:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000091df2
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 withAttributes:(id)arg4;	// IMP=0x0000000000091b9e
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3;	// IMP=0x000000000009197e
- (void)noteEventNamed:(id)arg1;	// IMP=0x00000000000918b9
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x00000000000916e6
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x0000000000091513
- (void)logSuccessForEventNamed:(id)arg1;	// IMP=0x000000000009144e

@end
