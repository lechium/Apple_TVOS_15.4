//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Espresso/NSObject-Protocol.h>

@class NSDictionary;

@protocol ETDataProvider <NSObject>
- (unsigned long long)numberOfDataPoints;
- (NSDictionary *)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;

@optional
- (void)prepareForEpoch;
@end

