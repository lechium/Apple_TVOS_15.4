//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface ASCOverlaySettings : NSObject
{
}

+ (id)sharedSettings;	// IMP=0x0000000000013b98
@property(copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property(copy, nonatomic) NSNumber *rateLimitTimeWindow;
@property(copy, nonatomic) NSNumber *rateLimitRequestsPerSecond;
- (id)_init;	// IMP=0x0000000000013bfd

@end

