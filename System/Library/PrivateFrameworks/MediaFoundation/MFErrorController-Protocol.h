//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaFoundation/MFResettable-Protocol.h>

@class NSError;
@protocol MFPlayerItem;

@protocol MFErrorController <MFResettable>
- (void)reportCriticalError:(NSError *)arg1 forItem:(id <MFPlayerItem>)arg2;
- (void)resolveError:(NSError *)arg1 forItem:(id <MFPlayerItem>)arg2 completion:(void (^)(long long))arg3;
@end

