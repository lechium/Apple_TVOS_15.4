//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupConfirmIntent.h>

@interface SAIntentGroupConfirmIntent (INSExtensionService)
- (_Bool)ins_shouldUseExtendedFlowTimeout;	// IMP=0x000000000000516d
- (long long)ins_analyticsEndEventType;	// IMP=0x0000000000005162
- (long long)ins_analyticsBeginEventType;	// IMP=0x0000000000005157
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000004f0b
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x0000000000004ef9
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x0000000000004ee7
- (id)ins_protobufEncodedIntent;	// IMP=0x0000000000004ed5
- (id)ins_jsonEncodedIntent;	// IMP=0x0000000000004ec3
@end

