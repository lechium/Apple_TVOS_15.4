//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@protocol CKWritableDeviceActivityStore
- (_Bool)recordActivityWithIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 error:(id *)arg4;
- (void)recordActivityWithIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

