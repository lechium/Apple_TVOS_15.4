//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryWriter : NSObject
{
    unsigned long long _urlIndex;	// 8 = 0x8
}

- (id)paramCurveControlPointsToArray:(id)arg1;	// IMP=0x000000000000fdb8
- (id)paramCurveToDictionary:(id)arg1;	// IMP=0x000000000000fba4
- (id)paramToDictionary:(id)arg1;	// IMP=0x000000000000f9cc
- (id)eventParamsToArray:(id)arg1;	// IMP=0x000000000000f6cb
- (id)eventToDictionary:(id)arg1 embeddedResourceInfo:(id)arg2;	// IMP=0x000000000000f109
- (id)patternToDictionary:(id)arg1 events:(id)arg2 parameters:(id)arg3 parameterCurves:(id)arg4 embeddedResourceInfo:(id)arg5 configuration:(id)arg6;	// IMP=0x000000000000e99b

@end
