//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFSiriRequest, NSError;

@protocol AFSiriRequestFailureHandling <NSObject>
- (void)handleFailureOfRequest:(AFSiriRequest *)arg1 error:(NSError *)arg2 atTime:(unsigned long long)arg3;
@end

