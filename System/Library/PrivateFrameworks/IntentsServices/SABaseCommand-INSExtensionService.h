//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABaseCommand.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SABaseCommand (INSExtensionService)
- (id)ins_afAnalyticsContext;	// IMP=0x0000000000001aef
- (void)ins_invokeErrorCompletionHandler:(CDUnknownBlockType)arg1 forUnderlyingError:(id)arg2;	// IMP=0x00000000000017d8
- (void)ins_invokeErrorCompletionHandler:(CDUnknownBlockType)arg1 withErrorCode:(long long)arg2 underlyingError:(id)arg3;	// IMP=0x000000000000152f
- (long long)ins_analyticsEndEventType;	// IMP=0x0000000000001527
- (long long)ins_analyticsBeginEventType;	// IMP=0x000000000000151f
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000144f
- (id)ins_aceIntentResponse;	// IMP=0x00000000000012bf
- (id)ins_protobufEncodedIntentResponse;	// IMP=0x00000000000012b7
- (id)ins_jsonEncodedIntentResponse;	// IMP=0x00000000000012af
- (id)ins_aceIntent;	// IMP=0x0000000000001131
@property(retain, nonatomic, setter=ins_setJSONEncodedIntent:) NSString *ins_jsonEncodedIntent;
@property(retain, nonatomic, setter=ins_setProtobufEncodedIntent:) SAIntentGroupProtobufMessage *ins_protobufEncodedIntent;
- (_Bool)ins_isJSONPayload;	// IMP=0x00000000000010e2
@end
