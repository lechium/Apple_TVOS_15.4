//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (RadioRequestAdditions)
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000001b445
+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000001b428
- (id)propertyListForRadioResponseReturningError:(id *)arg1 unparsedResponseDictionary:(id *)arg2;	// IMP=0x000000000001aaf8
- (id)propertyListForRadioResponseReturningError:(id *)arg1;	// IMP=0x000000000001aae4
@end

