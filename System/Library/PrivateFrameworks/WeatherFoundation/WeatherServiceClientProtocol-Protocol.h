//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class WFResponse;

@protocol WeatherServiceClientProtocol <NSObject>
- (void)serviceDidReceiveResponse:(WFResponse *)arg1;
- (void)taskIdentifier:(void (^)(WFTaskIdentifier *))arg1;
@end
