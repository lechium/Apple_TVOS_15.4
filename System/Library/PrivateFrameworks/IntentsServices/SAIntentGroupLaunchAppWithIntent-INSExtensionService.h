//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupLaunchAppWithIntent.h>

@interface SAIntentGroupLaunchAppWithIntent (INSExtensionService)
- (long long)ins_analyticsEndEventType;	// IMP=0x0000000000004ae8
- (long long)ins_analyticsBeginEventType;	// IMP=0x0000000000004add
- (void)ins_launchAppWithConnection:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000046df
- (id)ins_protobufEncodedIntentResponse;	// IMP=0x00000000000046cd
- (id)ins_jsonEncodedIntentResponse;	// IMP=0x00000000000046bb
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x00000000000046a9
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x0000000000004697
- (id)ins_protobufEncodedIntent;	// IMP=0x0000000000004685
- (id)ins_jsonEncodedIntent;	// IMP=0x0000000000004673
@end

