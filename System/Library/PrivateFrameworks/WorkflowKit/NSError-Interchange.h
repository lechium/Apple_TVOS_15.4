//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (Interchange)
+ (id)errorWithInterchangeErrorDictionary:(id)arg1;	// IMP=0x000000000007852c
+ (id)wfUnsupportedEnvironmentError;	// IMP=0x000000000007c4a9
+ (id)wf_unsupportedParameterErrorWithParameterName:(id)arg1 errorType:(id)arg2 platformIdiom:(long long)arg3;	// IMP=0x00000000000a34e5
+ (id)wf_unsupportedActionErrorWithType:(id)arg1 platformIdiom:(long long)arg2;	// IMP=0x00000000000a3354
+ (id)mtl_modelErrorWithException:(id)arg1;	// IMP=0x00000000001c9b44
+ (id)sharingMixedMDMContentErrorWithActionName:(id)arg1;	// IMP=0x0000000000258306
- (id)interchangeErrorDictionary;	// IMP=0x00000000000783cc
- (_Bool)wf_isUnsupportedEnvironmentError;	// IMP=0x000000000007c439
- (id)wf_localizedErrorStringWithActionName:(id)arg1;	// IMP=0x00000000000a2e7f
@property(readonly, nonatomic) _Bool wf_isUnsupportedOnPlatformError;
@end

